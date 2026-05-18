/*
 * XREFs of sub_180028A70 @ 0x180028A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 */

__int64 __fastcall sub_180028A70(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_180056918();
  return result;
}
