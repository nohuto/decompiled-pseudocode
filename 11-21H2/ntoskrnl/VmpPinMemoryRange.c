/*
 * XREFs of VmpPinMemoryRange @ 0x14062AE30
 * Callers:
 *     VmPinMemoryRange @ 0x1409D9740 (VmPinMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VmAccessFault @ 0x1409D8E00 (VmAccessFault.c)
 *     VmpLockMemoryForPin @ 0x1409DA070 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA634 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpPinMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int8 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  int v18; // edi
  __int64 v19; // rax
  int v20; // ecx
  _QWORD *v22; // rbx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  BOOL v30; // [rsp+58h] [rbp-21h]
  unsigned __int64 v31; // [rsp+60h] [rbp-19h]
  __int128 v32; // [rsp+68h] [rbp-11h] BYREF

  v28 = 0LL;
  v32 = 0LL;
  v31 = a2;
  v29 = a3;
  v9 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a6 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v10 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v10 )
    v10 ^= (unsigned __int64)(SpinLock + 2);
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_16;
    if ( a2 > *(_QWORD *)(v10 + 32) )
    {
      v11 = *(_QWORD *)(v10 + 8);
      goto LABEL_11;
    }
    if ( a2 >= *(_QWORD *)(v10 + 24) )
      break;
    v11 = *(_QWORD *)v10;
LABEL_11:
    if ( (SpinLock[4] & 1) != 0 && v11 )
      v10 ^= v11;
    else
      v10 = v11;
  }
  v22 = (_QWORD *)(v10 - 24);
  if ( v10 == 24 )
LABEL_16:
    NT_ASSERT("GpaMemoryRange != ((void *)0)");
  if ( v22[6] != a2 )
    NT_ASSERT("GpaMemoryRange->StartGpn == StartGpn");
  if ( v22[7] != a4 + a2 - 1 )
    NT_ASSERT("GpaMemoryRange->LastGpn == (StartGpn + SizeInPages - 1)");
  if ( (v22[8] & 1) != 0 )
    NT_ASSERT("GpaMemoryRange->Pinned == 0");
  v12 = v22[2];
  if ( *(_QWORD *)(v12 + 24) != v29 )
    NT_ASSERT("VaMemoryRange->StartVpn == StartVpn");
  v13 = *(_QWORD *)(v12 + 56) == 0LL;
  v30 = (a5 & 2) != 0;
  if ( !v13 )
    goto LABEL_47;
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v13 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  v18 = VmpLockMemoryForPin((_DWORD)SpinLock, v29, a4, (a5 & 2) != 0, (__int64)&v28);
  if ( v18 >= 0 )
  {
    v9 = VmpProcessContextLockExclusive(SpinLock);
    if ( (v22[8] & 1) != 0 )
      NT_ASSERT("GpaMemoryRange->Pinned == 0");
    if ( !*(_QWORD *)(v12 + 56) )
    {
      v19 = v28;
      v28 = 0LL;
      *(_QWORD *)(v12 + 56) = v19;
      if ( (a5 & 2) != 0 )
      {
        *(_DWORD *)(v12 + 64) |= 1u;
        goto LABEL_39;
      }
LABEL_48:
      v20 = 1;
      goto LABEL_40;
    }
LABEL_47:
    if ( (a5 & 2) == 0 )
      goto LABEL_48;
LABEL_39:
    v20 = 0;
LABEL_40:
    if ( v20 != ((*(_DWORD *)(v12 + 64) & 1) == 0) )
      NT_ASSERT("0");
    *((_DWORD *)v22 + 16) |= 1u;
    ++*((_QWORD *)SpinLock + 5);
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && v9 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v13 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
    }
    __writecr8(v9);
    *(_QWORD *)&v32 = v31;
    *((_QWORD *)&v32 + 1) = a4;
    VmAccessFault(&v32, &v29, 1LL, a5, 0, 0, a6);
    v18 = 0;
  }
  if ( v28 )
    VmpUnlockMemoryForPin(SpinLock, v28);
  return (unsigned int)v18;
}
