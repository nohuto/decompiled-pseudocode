/*
 * XREFs of sub_14024DC34 @ 0x14024DC34
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_14027D8DC @ 0x14027D8DC (sub_14027D8DC.c)
 *     sub_14027D9E8 @ 0x14027D9E8 (sub_14027D9E8.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_14024DC34(ULONG_PTR a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rsi
  __int64 v7; // rax
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // r10
  int v12; // ecx
  int v13; // ebx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r13
  char v18; // cl
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  char v25; // al
  __int64 v26; // rdx
  unsigned int v28; // [rsp+20h] [rbp-71h]
  int v29; // [rsp+24h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  _OWORD v35[3]; // [rsp+68h] [rbp-29h] BYREF

  v5 = a1 + 1664;
  memset(v35, 0, sizeof(v35));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = sub_140282AD0(a1 + 1664);
  v12 = *(_DWORD *)(v5 + 184);
  v13 = 0;
  v14 = v7;
  HIBYTE(v28) = HIBYTE(v12);
  v15 = 0LL;
  v16 = *(_QWORD *)(v7 + 8);
  v17 = 0LL;
  if ( dword_140D05210 == 1 )
  {
    v18 = HIBYTE(v12);
    v16 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x60) == 0x40 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
      v29 = sub_14027D9E8(a1, v5);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= v23;
            if ( v24 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v29 )
      {
        sub_1402393FC(a1, (__int64)v35);
        v25 = sub_1402CF4F0(v5);
        v28 = *(_DWORD *)(v5 + 184);
        v26 = HIBYTE(v28);
        if ( (HIBYTE(v28) & 0x60) == 0x40 )
        {
          v26 = *(_QWORD *)(v14 + 32);
          v17 = *(_QWORD *)(v14 + 16);
          v15 = *(_QWORD *)(v26 + 32);
        }
        LOBYTE(v26) = v25;
        sub_1402B0CE0(v5, v26);
        sub_140241980(v35, 0);
        sub_14027D8DC(v5);
      }
      v11 = a5;
      v10 = a4;
      v9 = a3;
      v8 = a2;
    }
    v18 = HIBYTE(v28);
    LOBYTE(v7) = HIBYTE(v28) & 0x60;
    if ( (HIBYTE(v28) & 0x60u) < 0x40 )
      v16 = 0LL;
  }
  LOBYTE(v13) = (v18 & 0x60u) >= 0x20;
  *v8 = v13;
  *v9 = v16;
  *v10 = v15;
  *v11 = v17;
  return v7;
}
