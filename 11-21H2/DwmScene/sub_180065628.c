/*
 * XREFs of sub_180065628 @ 0x180065628
 * Callers:
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065628(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 440);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 440) = result;
  return result;
}
