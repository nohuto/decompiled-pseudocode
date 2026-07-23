/*
 * XREFs of sub_140A96660 @ 0x140A96660
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 */

KIRQL __fastcall sub_140A96660(PKSPIN_LOCK SpinLock, KIRQL *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL result; // al

  ++dword_140C29FC8;
  if ( (dword_140C29FC0 & 0x1000) != 0 )
    sub_140A8B2AC(a3, 164LL);
  sub_1406021F8((ULONG_PTR)SpinLock, 8uLL);
  LOBYTE(v5) = 2;
  v6 = sub_140A96894(v5);
  result = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = HIDWORD(KeGetPcr()[1].LockArray);
  return result;
}
