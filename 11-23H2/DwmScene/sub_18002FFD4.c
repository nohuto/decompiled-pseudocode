/*
 * XREFs of sub_18002FFD4 @ 0x18002FFD4
 * Callers:
 *     sub_18002F280 @ 0x18002F280 (sub_18002F280.c)
 * Callees:
 *     sub_1800109B0 @ 0x1800109B0 (sub_1800109B0.c)
 */

_QWORD *__fastcall sub_18002FFD4(char *a1, char *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8
  __int64 v5; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      if ( *(_QWORD *)((char *)v3 + v4 + 8) )
      {
        *v3 = *(_QWORD *)((char *)v3 + v4);
        v5 = *(_QWORD *)((char *)v3 + v4 + 8);
        v3[1] = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
      }
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  sub_1800109B0((__int64)v3, (__int64)v3);
  return v3;
}
