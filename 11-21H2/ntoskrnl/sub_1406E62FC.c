/*
 * XREFs of sub_1406E62FC @ 0x1406E62FC
 * Callers:
 *     sub_1406E62A8 @ 0x1406E62A8 (sub_1406E62A8.c)
 * Callees:
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 */

__int64 __fastcall sub_1406E62FC(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbp
  __int64 v8; // rbx

  v3 = 0;
  if ( a3 <= -1 )
    a3 = *(_DWORD *)(a2 + 16);
  if ( (unsigned int)a3 > *(_DWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v8 = *(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1);
      sub_1407E3B7C(a1, *(_QWORD *)v8);
      *(_OWORD *)v8 = 0LL;
      *(_OWORD *)(v8 + 16) = 0LL;
      --*(_DWORD *)(a2 + 16);
      --v7;
    }
    while ( v7 );
  }
  return v3;
}
