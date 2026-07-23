/*
 * XREFs of sub_140832C50 @ 0x140832C50
 * Callers:
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 */

void __fastcall sub_140832C50(__int64 a1)
{
  ULONG_PTR v1; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    sub_14026D048(v1, 1);
}
