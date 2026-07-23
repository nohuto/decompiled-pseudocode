/*
 * XREFs of sub_1402313B4 @ 0x1402313B4
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     sub_14026AEB0 @ 0x14026AEB0 (sub_14026AEB0.c)
 * Callees:
 *     sub_14026B1C0 @ 0x14026B1C0 (sub_14026B1C0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402DF940 @ 0x1402DF940 (sub_1402DF940.c)
 *     sub_1402EB0E0 @ 0x1402EB0E0 (sub_1402EB0E0.c)
 */

__int64 __fastcall sub_1402313B4(ULONG_PTR a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = sub_14026B1C0(a1);
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( v2 != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v3 = (*(_QWORD *)v2 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( v2 != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned int)sub_1402EB0E0(&LockHandle) )
    {
      v4 = sub_1402DF940(v3);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return v4;
    }
  }
  return 0LL;
}
