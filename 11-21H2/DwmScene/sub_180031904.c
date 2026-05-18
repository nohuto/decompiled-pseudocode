/*
 * XREFs of sub_180031904 @ 0x180031904
 * Callers:
 *     sub_180031324 @ 0x180031324 (sub_180031324.c)
 * Callees:
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 */

_QWORD *__fastcall sub_180031904(char *a1, char *a2, _QWORD *a3)
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
  sub_180011138((__int64)v3, (__int64)v3);
  return v3;
}
