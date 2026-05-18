/*
 * XREFs of sub_180050D2C @ 0x180050D2C
 * Callers:
 *     sub_180053850 @ 0x180053850 (sub_180053850.c)
 * Callees:
 *     sub_180050B9C @ 0x180050B9C (sub_180050B9C.c)
 */

_QWORD *__fastcall sub_180050D2C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

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
      v5[v4 + 8] = *(_BYTE *)(v4 + 8);
      *(_DWORD *)&v5[v4 + 12] = *(_DWORD *)(v4 + 12);
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 24] = 0LL;
      v6 = *(_QWORD *)(v4 + 24);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      *(_QWORD *)&v5[v4 + 16] = *(_QWORD *)(v4 + 16);
      *(_QWORD *)&v5[v4 + 24] = *(_QWORD *)(v4 + 24);
      *(_QWORD *)&v5[v4 + 32] = 0LL;
      *(_QWORD *)&v5[v4 + 40] = 0LL;
      v7 = *(_QWORD *)(v4 + 40);
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      *(_QWORD *)&v5[v4 + 32] = *(_QWORD *)(v4 + 32);
      *(_QWORD *)&v5[v4 + 40] = *(_QWORD *)(v4 + 40);
      *(_QWORD *)&v5[v4 + 48] = 0LL;
      *(_QWORD *)&v5[v4 + 56] = 0LL;
      v8 = *(_QWORD *)(v4 + 56);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *(_QWORD *)&v5[v4 + 48] = *(_QWORD *)(v4 + 48);
      *(_QWORD *)&v5[v4 + 56] = *(_QWORD *)(v4 + 56);
      *(_QWORD *)&v5[v4 + 64] = 0LL;
      *(_QWORD *)&v5[v4 + 72] = 0LL;
      v9 = *(_QWORD *)(v4 + 72);
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      a3 += 11;
      *(_QWORD *)&v5[v4 + 64] = *(_QWORD *)(v4 + 64);
      *(_QWORD *)&v5[v4 + 72] = *(_QWORD *)(v4 + 72);
      v4 += 88LL;
    }
    while ( v4 - 8 != a2 );
  }
  sub_180050B9C((__int64)a3, (__int64)a3);
  return a3;
}
