/*
 * XREFs of sub_1406D0858 @ 0x1406D0858
 * Callers:
 *     sub_1406D068C @ 0x1406D068C (sub_1406D068C.c)
 *     sub_140A29C1C @ 0x140A29C1C (sub_140A29C1C.c)
 *     sub_140A29D04 @ 0x140A29D04 (sub_140A29D04.c)
 *     sub_140A2C08C @ 0x140A2C08C (sub_140A2C08C.c)
 * Callees:
 *     sub_1402E04F4 @ 0x1402E04F4 (sub_1402E04F4.c)
 */

char __fastcall sub_1406D0858(_WORD *a1, unsigned int *a2, const WCHAR *a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  _WORD *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // edi
  _WORD *v18; // rax

  v4 = *a2;
  if ( *a1 )
  {
    v9 = a1;
    if ( (_DWORD)v4 )
    {
      do
      {
        do
          ++v9;
        while ( *v9 );
        ++v9;
      }
      while ( *v9 && 2 * (unsigned __int64)(unsigned int)(v9 - a1) < v4 );
    }
    v10 = -1LL;
    v11 = *a2;
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( 2 * (v9 - a1 + v12) + 4 <= v4 && (int)sub_1402E04F4(v9, v11, a3, 0LL, 0LL, 2304) >= 0 )
    {
      do
        ++v10;
      while ( a3[v10] );
      v13 = &v9[v10 + 1];
      *v13 = 0;
      *a2 = 2 * (v13 - a1) + 2;
      if ( a4 )
        *a4 = v13;
      return 1;
    }
  }
  else
  {
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( a3[v16] );
    v17 = 2 * v16 + 4;
    if ( v17 <= (unsigned int)v4 && (int)sub_1402E04F4(a1, *a2, a3, 0LL, 0LL, 2304) >= 0 )
    {
      do
        ++v15;
      while ( a1[v15] );
      *a2 = v17;
      v18 = &a1[v15 + 1];
      *v18 = 0;
      if ( a4 )
        *a4 = v18;
      return 1;
    }
  }
  return 0;
}
