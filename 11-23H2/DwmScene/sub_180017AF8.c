/*
 * XREFs of sub_180017AF8 @ 0x180017AF8
 * Callers:
 *     sub_180018110 @ 0x180018110 (sub_180018110.c)
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180017AF8(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_180010530(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
