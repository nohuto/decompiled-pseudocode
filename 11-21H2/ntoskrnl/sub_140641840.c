/*
 * XREFs of sub_140641840 @ 0x140641840
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140641840(char a1, signed __int64 a2, unsigned int a3)
{
  __int64 v6; // r14
  ULONG_PTR v7; // rbp
  __int64 v8; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf
  char v14; // si
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+38h] [rbp-60h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  KeAcquireInStackQueuedSpinLock(&qword_140C11498, &LockHandle);
  v7 = *((_QWORD *)qword_140C11490 + 2 * a3);
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
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  v14 = 0;
  if ( v6 != v7 )
  {
    sub_14030D5C0(v7, 0LL, (__int64)v19, v8);
    v14 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v15 = -1073741819;
  }
  else
  {
    v16 = a1 & 2 | 0x10LL;
    if ( (a1 & 4) == 0 )
      v16 = a1 & 2;
    v15 = sub_14031C860(v16, a2, 1, 0LL);
  }
  if ( v14 )
    sub_1402D0930((__int64)v19, 0LL);
  return v15;
}
