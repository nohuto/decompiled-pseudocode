/*
 * XREFs of sub_1C00AADD0 @ 0x1C00AADD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0060100 @ 0x1C0060100 (sub_1C0060100.c)
 *     sub_1C00A7D38 @ 0x1C00A7D38 (sub_1C00A7D38.c)
 */

__int64 __fastcall sub_1C00AADD0(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  int v7; // ebx

  v3 = a1[6];
  v6 = *(_QWORD *)(v3 + 8);
  if ( a2 == 2 )
  {
    v7 = sub_1C00071D4(*(_QWORD *)(v3 + 8), 0LL, 0LL);
    if ( v7 >= 0 )
    {
      v7 = sub_1C00A7D38(*(_QWORD *)(v6 + 24), a1[7], a3);
      sub_1C000729C(v6);
    }
  }
  else if ( a2 == 7 )
  {
    return (unsigned int)sub_1C0060100(a3, a1);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
