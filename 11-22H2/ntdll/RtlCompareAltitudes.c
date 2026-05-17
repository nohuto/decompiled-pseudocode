/*
 * XREFs of RtlCompareAltitudes @ 0x180100AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareAltitudes(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // r9
  _WORD *v4; // rsi
  unsigned __int16 v5; // cx
  _WORD *v6; // r14
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r9
  unsigned int v10; // r11d
  unsigned __int16 i; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v14; // bx
  unsigned __int16 k; // ax
  bool v16; // cf
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // di
  unsigned __int16 v20; // ax
  __int16 v21; // r15
  __int16 v22; // bp
  signed __int16 v23; // di
  unsigned __int16 m; // r10
  __int16 v25; // r10
  unsigned __int16 n; // r9
  _WORD *v27; // r15
  _WORD *v28; // r14
  int v29; // eax
  unsigned __int16 v30; // dx
  unsigned __int16 v31; // r8

  v2 = *a1;
  v3 = *a2;
  v4 = (_WORD *)*((_QWORD *)a1 + 1);
  v5 = 0;
  v6 = (_WORD *)*((_QWORD *)a2 + 1);
  v7 = 0;
  v8 = v2 >> 1;
  v9 = v3 >> 1;
  v10 = 1;
  if ( v8 )
  {
    do
    {
      if ( v4[v7] == 46 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( v6[i] == 46 )
      break;
  }
  v12 = v7;
  for ( j = 0; j < v12; --v8 )
  {
    if ( *v4 != 48 )
      break;
    ++j;
    ++v4;
    --v7;
  }
  v14 = i;
  for ( k = 0; k < v14; --v9 )
  {
    if ( *v6 != 48 )
      break;
    ++k;
    ++v6;
    --i;
  }
  if ( v7 != i )
  {
    v16 = i < v7;
    return v16 ? 1 : -1;
  }
  v18 = 0;
  if ( v7 )
  {
    do
    {
      v19 = v4[v18];
      v20 = v6[v18];
      v16 = v20 < v19;
      if ( v20 != v19 )
        return v16 ? 1 : -1;
    }
    while ( ++v18 < v7 );
  }
  v21 = 0;
  v22 = 0;
  if ( (__int16)(v8 - v7 - 1) >= 0 )
    v21 = v8 - v7 - 1;
  v23 = v21;
  if ( (__int16)(v9 - i - 1) >= 0 )
    v22 = v9 - i - 1;
  if ( v8 )
  {
    for ( m = v8 - 1; m > v7 && v4[m] == 48; --m )
      --v23;
  }
  v25 = v22;
  if ( v9 )
  {
    for ( n = v9 - 1; n > i && v6[n] == 48; --n )
      --v25;
  }
  v27 = &v4[v7];
  v28 = &v6[i];
  if ( v23 > 0 )
  {
    v29 = 0;
    while ( v29 < v25 )
    {
      v30 = v27[v5 + 1];
      v31 = v28[v5 + 1];
      if ( v31 != v30 )
        return v31 < v30 ? 1 : -1;
      v29 = ++v5;
      if ( v5 >= v23 )
        break;
    }
  }
  if ( v23 == v25 )
    return 0LL;
  if ( v23 <= v25 )
    return (unsigned int)-1;
  return v10;
}
