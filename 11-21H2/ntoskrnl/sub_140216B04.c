/*
 * XREFs of sub_140216B04 @ 0x140216B04
 * Callers:
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 * Callees:
 *     sub_140216D54 @ 0x140216D54 (sub_140216D54.c)
 *     sub_1402829D0 @ 0x1402829D0 (sub_1402829D0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_140216B04(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  int v9; // edx

  v2 = a1 + 192;
  sub_1402829D0(a1 + 192);
  v5 = sub_140282AD0(v2);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5);
  *(_DWORD *)(v5 + 4) = 0;
  v8 = v6;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    sub_140216D54(v2);
  LOBYTE(v7) = v8;
  sub_14030FA80(v2, v7);
  LOBYTE(v9) = 17;
  return sub_140330080(v2, v9, 0, qword_140C50630, qword_140C50630 + 0x7FFFFFFFFFLL, 0, 0, a2);
}
