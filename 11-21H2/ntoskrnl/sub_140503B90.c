/*
 * XREFs of sub_140503B90 @ 0x140503B90
 * Callers:
 *     sub_1404568E6 @ 0x1404568E6 (sub_1404568E6.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140503B90(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5, unsigned int *a6)
{
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r11
  __int64 v27; // r9
  int v28; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 120), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 208);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 212);
    if ( v10 <= v11 )
      goto LABEL_3;
    v19 = v10 - v11;
    if ( a3 > v19 )
      a3 = v19;
  }
  if ( a3 > *(_DWORD *)(a2 + 32) )
  {
    if ( a4 )
      goto LABEL_3;
    a3 = *(_DWORD *)(a2 + 32);
  }
  if ( !a3 )
  {
LABEL_3:
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
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    *a6 = 0;
    return 0LL;
  }
  v20 = *(_QWORD *)(a2 + 24);
  v21 = v20;
  v22 = a3;
  do
  {
    v23 = v21;
    v21 = *(_QWORD *)(v21 + 8);
    --v22;
  }
  while ( v22 );
  *(_QWORD *)(v23 + 8) = 0LL;
  *(_DWORD *)(a2 + 32) -= a3;
  *(_QWORD *)(a2 + 24) = v21;
  if ( a5 )
    *(_DWORD *)(v9 + 208) -= a3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = *((_QWORD *)v26 + 4375);
        v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
        *(_DWORD *)(v27 + 20) &= v28;
        if ( v17 )
          sub_140418E4C((__int64)v26);
      }
    }
  }
  __writecr8(v24);
  result = v20;
  *a6 = a3;
  return result;
}
