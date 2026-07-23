/*
 * XREFs of CcFlushCacheOneRange @ 0x14029E530
 * Callers:
 *     CcFlushCachePriv @ 0x14029CC14 (CcFlushCachePriv.c)
 *     CcWriteBehindAsync @ 0x14053A530 (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14053B850 (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     CcGetVirtualAddressIfMapped @ 0x14029E820 (CcGetVirtualAddressIfMapped.c)
 *     CcPerfLogFlushSection @ 0x140392784 (CcPerfLogFlushSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcFlushCacheOneRange(__int64 *a1)
{
  struct _KEVENT *v2; // r13
  __int64 v3; // rsi
  __int64 v4; // r15
  char v5; // r12
  struct _IO_STATUS_BLOCK *v6; // r14
  unsigned int v7; // edi
  unsigned __int64 VirtualAddressIfMapped; // rcx
  unsigned int v9; // eax
  BOOL v10; // eax
  __int64 v11; // rsi
  struct _KEVENT *v12; // rcx
  struct _KEVENT *v13; // r13
  __int64 result; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 OldIrql; // rbx
  NTSTATUS Status; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf
  int v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-80h] BYREF
  __int128 v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  char v29; // [rsp+D0h] [rbp+8h]
  unsigned int v30; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+E0h] [rbp+18h] BYREF
  struct _KEVENT *v32; // [rsp+E8h] [rbp+20h]

  v30 = 0;
  v27 = 0LL;
  v2 = (struct _KEVENT *)a1[9];
  v3 = a1[3];
  v4 = a1[2];
  v5 = *((_BYTE *)a1 + 132);
  v6 = (struct _IO_STATUS_BLOCK *)a1[14];
  v28 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v24 = *a1;
  v25 = a1[1];
  v29 = *((_BYTE *)a1 + 133);
  v31 = 0LL;
  v32 = v2;
  v23 = v3;
  if ( *((_BYTE *)a1 + 192) && !*((_BYTE *)a1 + 193) )
  {
    a1[25] = a1[5];
    *((_BYTE *)a1 + 193) = 1;
  }
  v7 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 15) = 0;
  do
  {
    VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(
                               v4,
                               a1[5] + *((unsigned int *)a1 + 12) - (unsigned __int64)v7,
                               &v31,
                               &v30);
    v9 = v30;
    if ( VirtualAddressIfMapped )
    {
      if ( v30 > v7 )
      {
        v9 = v7;
        v30 = v7;
      }
      v10 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v9) || *((_DWORD *)a1 + 15))
         && a1[5] + *((unsigned int *)a1 + 12) < *(_QWORD *)(v4 + 40)
         && (*(_DWORD *)(v4 + 276) & 0xF) != 0
         && v5
         && !v29
         && (*(_DWORD *)(v4 + 152) & 0x200) == 0
         && !*(_BYTE *)a1[23];
      *((_DWORD *)a1 + 15) = v10;
      v11 = *(_QWORD *)(v31 + 8);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v31 + 16)) )
      {
        v12 = *(struct _KEVENT **)(v11 + 192);
        if ( v12 )
          KeSetEvent(v12, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v11 + 552));
      }
    }
    else
    {
      if ( v30 > v7 )
        v9 = v7;
      v30 = v9;
    }
    v7 -= v30;
  }
  while ( v7 );
  __addgsdword(0x8468u, *((_DWORD *)a1 + 15));
  v13 = v32;
  if ( *((_DWORD *)a1 + 15) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v24 + 768), &LockHandle);
    v15 = (unsigned __int64)*((unsigned int *)a1 + 12) >> 12;
    if ( CcEnablePerVolumeLazyWriter )
      *(_QWORD *)(v25 + 1096) += v15;
    else
      *(_QWORD *)(v24 + 1160) += v15;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
      CcPerfLogFlushSection(a1[21], v4, (_DWORD)a1 + 40, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 14));
    v6->Status = v5 != 0 ? 0x80000016 : 0;
    result = MmFlushSection(v23, a1 + 5, *((unsigned int *)a1 + 12), v13, v6, *((_DWORD *)a1 + 14));
    if ( (int)result < 0 )
    {
      Status = v6->Status;
      if ( v5 )
      {
        if ( Status != -2147483626 )
          return result;
      }
      else if ( Status )
      {
        return result;
      }
      v6->Status = result;
    }
  }
  return result;
}
