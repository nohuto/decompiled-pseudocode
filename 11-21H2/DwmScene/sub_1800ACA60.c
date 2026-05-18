/*
 * XREFs of sub_1800ACA60 @ 0x1800ACA60
 * Callers:
 *     sub_1800EF960 @ 0x1800EF960 (sub_1800EF960.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800ACA60(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
