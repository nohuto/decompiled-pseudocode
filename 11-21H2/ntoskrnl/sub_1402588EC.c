/*
 * XREFs of sub_1402588EC @ 0x1402588EC
 * Callers:
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

_QWORD *__fastcall sub_1402588EC(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx
  KIRQL v5; // al
  _QWORD *i; // rdx

  v2 = 0LL;
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v4 = sub_140282AD0(v3 + 1664);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4);
  *(_DWORD *)(v4 + 4) = 0;
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (_QWORD *)*i )
    v2 = i;
  LOBYTE(i) = v5;
  sub_14030FA80(v3 + 1664, i);
  return v2;
}
