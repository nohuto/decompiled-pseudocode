/*
 * XREFs of sub_180061380 @ 0x180061380
 * Callers:
 *     sub_1800612E0 @ 0x1800612E0 (sub_1800612E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180061380(__int64 a1, __int64 a2, char a3)
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
