/*
 * XREFs of sub_180052818 @ 0x180052818
 * Callers:
 *     sub_180052654 @ 0x180052654 (sub_180052654.c)
 *     sub_1800DD92C @ 0x1800DD92C (sub_1800DD92C.c)
 *     sub_1800DFD10 @ 0x1800DFD10 (sub_1800DFD10.c)
 * Callees:
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 */

__int64 __fastcall sub_180052818(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    sub_18001DE1C(v3 + 40, a2);
  return sub_18001D284(a1);
}
