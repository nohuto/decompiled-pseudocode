/*
 * XREFs of sub_1408074F4 @ 0x1408074F4
 * Callers:
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 * Callees:
 *     sub_1408140B4 @ 0x1408140B4 (sub_1408140B4.c)
 *     sub_140A1FE8C @ 0x140A1FE8C (sub_140A1FE8C.c)
 */

__int64 __fastcall sub_1408074F4(__int64 a1)
{
  int v2; // eax
  int v4; // eax

  v2 = sub_1408140B4() - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 )
    return sub_140A1FE8C(a1);
  if ( v4 == 1 )
    return 0LL;
  return 3221225659LL;
}
