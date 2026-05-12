/*
 * XREFs of sub_1C00A3308 @ 0x1C00A3308
 * Callers:
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 *     sub_1C00A3200 @ 0x1C00A3200 (sub_1C00A3200.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00A3308(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a3 )
      return v4;
    else
      return v4 + *(_QWORD *)(a2 + 24);
  }
  return result;
}
