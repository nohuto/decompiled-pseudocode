/*
 * XREFs of sub_1405BDA68 @ 0x1405BDA68
 * Callers:
 *     sub_1405BDA68 @ 0x1405BDA68 (sub_1405BDA68.c)
 *     sub_1405BE6F4 @ 0x1405BE6F4 (sub_1405BE6F4.c)
 * Callees:
 *     sub_1405BDA68 @ 0x1405BDA68 (sub_1405BDA68.c)
 */

__int64 __fastcall sub_1405BDA68(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax

  v4 = 32LL * a2;
  v5 = *(_QWORD *)(v4 + a1 + 2056);
  v6 = v5 + a3;
  if ( v5 + a3 > v5 && v6 <= *(_QWORD *)(v4 + a1 + 2080) )
  {
    if ( a2 >= 7 || (result = sub_1405BDA68(a1, (unsigned int)((a2 & 0xFFFFFFF9) != 0) + 7), (int)result >= 0) )
    {
      *(_QWORD *)(v4 + a1 + 2056) = v6;
      if ( v6 > *(_QWORD *)(v4 + a1 + 2072) )
        *(_QWORD *)(v4 + a1 + 2072) = v6;
      return 0LL;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v4 + a1 + 2064);
    if ( v7 != -1 )
      *(_QWORD *)(v4 + a1 + 2064) = v7 + 1;
    return 3221225773LL;
  }
  return result;
}
