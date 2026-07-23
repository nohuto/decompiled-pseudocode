/*
 * XREFs of sub_140243FB0 @ 0x140243FB0
 * Callers:
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140243FB0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rax
  _QWORD *v9; // rax

  v1 = (_QWORD *)(a1 + 1944);
  v3 = *(_QWORD **)(a1 + 1944);
  if ( v3 == (_QWORD *)(a1 + 1944) )
    return 0LL;
  if ( (_QWORD *)v3[1] != v1 || (v5 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
FatalListEntryError_17:
    __fastfail(3u);
  *v1 = v5;
  *(_QWORD *)(v5 + 8) = v1;
  v6 = a1 + 1912;
  --v1[2];
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v8 = v3[4] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v7 )
        break;
      v3[4] = v8 | 0x8000000000000000uLL;
      v3 += 5;
      v7 = 1;
    }
    v3[4] = v8;
    v9 = *(_QWORD **)(v6 + 8);
    if ( *v9 != v6 )
      goto FatalListEntryError_17;
    *v3 = v6;
    ++v7;
    v3[1] = v9;
    *v9 = v3;
    *(_QWORD *)(v6 + 8) = v3;
    v3 += 5;
  }
  while ( v7 < 8 );
  *(_QWORD *)(v6 + 16) += 7LL;
  return v3 - 40;
}
