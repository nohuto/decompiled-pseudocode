/*
 * XREFs of sub_1405BA3BC @ 0x1405BA3BC
 * Callers:
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405BA2B4 @ 0x1405BA2B4 (sub_1405BA2B4.c)
 */

void sub_1405BA3BC()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  volatile LONG *v4; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // di

  v0 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v1 = 0xFFFFF68000000000uLL;
  v2 = 3LL;
  v3 = 0xFFFFF6BFFFFFFFF8uLL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  v4 = (volatile LONG *)sub_140282AD0(v0);
  v5 = ExAcquireSpinLockExclusive(v4);
  *((_DWORD *)v4 + 1) = 0;
  v6 = v5;
  sub_1405BA2B4(v0, v5, v1, v3, 3);
  sub_14030FA80(v0, v6);
}
