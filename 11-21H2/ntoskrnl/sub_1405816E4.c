/*
 * XREFs of sub_1405816E4 @ 0x1405816E4
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void sub_1405816E4()
{
  __int64 v0; // rdi
  volatile LONG *v1; // rbx
  KIRQL v2; // al

  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  v1 = (volatile LONG *)sub_140282AD0(v0 + 1664);
  v2 = ExAcquireSpinLockExclusive(v1);
  *((_DWORD *)v1 + 1) = 0;
  *(_BYTE *)(v0 + 1851) |= 2u;
  sub_14030FA80(v0 + 1664, v2);
}
