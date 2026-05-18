/*
 * XREFs of sub_180069CE8 @ 0x180069CE8
 * Callers:
 *     sub_180069C48 @ 0x180069C48 (sub_180069C48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180069CE8(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 64) & a2;
  v4 = *(_QWORD *)(a1 + 72);
  if ( a3 )
    result = v3 | v4;
  else
    result = ~v3 & v4;
  *(_QWORD *)(a1 + 72) = result;
  return result;
}
