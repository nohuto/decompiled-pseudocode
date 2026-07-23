/*
 * XREFs of sub_1403E8ED8 @ 0x1403E8ED8
 * Callers:
 *     sub_1403E85A8 @ 0x1403E85A8 (sub_1403E85A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403E8ED8(__int16 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  bool v4; // sf

  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x40) != 0 && !*(_QWORD *)(a2 + 16) )
    goto LABEL_5;
  v4 = *(_DWORD *)(a2 + 8) - 2 < 0;
  *(_DWORD *)(a2 + 8) -= 2;
  if ( v4 )
  {
    *(_DWORD *)(a2 + 24) = result | 0x20;
  }
  else
  {
    **(_WORD **)a2 = a1;
    result = 0xFFFFLL;
    *(_QWORD *)a2 += 2LL;
    if ( a1 != -1 )
    {
LABEL_5:
      ++*a3;
      return result;
    }
  }
  result = *(unsigned int *)(a2 + 24);
  if ( (result & 0x20) == 0 )
    goto LABEL_5;
  *a3 = -1;
  return result;
}
