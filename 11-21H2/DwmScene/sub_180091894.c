/*
 * XREFs of sub_180091894 @ 0x180091894
 * Callers:
 *     sub_180091CE8 @ 0x180091CE8 (sub_180091CE8.c)
 * Callees:
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 */

_QWORD *__fastcall sub_180091894(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      if ( *(_QWORD *)v4 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v4 + 8LL));
      *a3 = *(_QWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)&v5[v4 + 8] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      v6 = *(_QWORD *)(v4 + 16);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      a3 += 5;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      *(_QWORD *)&v5[v4 + 16] = *(_QWORD *)(v4 + 16);
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      v4 += 40LL;
    }
    while ( v4 - 8 != a2 );
  }
  sub_18008E974((__int64)a3, (__int64)a3);
  return a3;
}
