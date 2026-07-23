/*
 * XREFs of sub_1405EFCF8 @ 0x1405EFCF8
 * Callers:
 *     sub_1405F0510 @ 0x1405F0510 (sub_1405F0510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EFCF8(unsigned int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 v11; // rcx
  char *v12; // r10
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 i; // rcx
  char *v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  char *v21; // rdi
  unsigned __int64 j; // rcx
  unsigned __int64 v23; // rcx
  char *v24; // rdi

  v4 = a1;
  v5 = a4 + 4096;
  v6 = 4096LL;
  v7 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  v8 = (unsigned int)(2 * a2 - v7);
  if ( (unsigned int)v7 > 2 * a2 )
    v8 = (unsigned int)(v8 + 12);
  result = 1024LL;
  v10 = v8;
  v11 = 4 * v8;
  if ( v11 + a4 <= v5 )
    v6 = v11;
  v12 = (char *)(a4 + v6);
  if ( v11 + a4 <= v5 )
    result = v10;
  if ( a4 > (unsigned __int64)v12 )
    result = 0LL;
  if ( result )
  {
    v13 = 4 * result;
    v14 = (_DWORD *)a4;
    v15 = 4 * result;
    result = (unsigned int)v4;
    for ( i = v15 >> 2; i; --i )
      *v14++ = v4;
    a4 += v13;
  }
  v17 = (char *)(a4 + 8);
  if ( (unsigned __int64)v12 < v5 )
  {
    result = 4LL * ((unsigned int)((__int64)(v5 - (_QWORD)v12) >> 2) % 0xC);
    v18 = v5 - result;
    if ( v12 != (char *)(v5 - result) )
    {
      while ( 1 )
      {
        v12 += 48;
        if ( (unsigned __int64)v17 >= v18 )
          break;
        v19 = (unsigned __int64)(v12 - v17 + 3) >> 2;
        if ( v17 > v12 )
          v19 = 0LL;
        if ( v19 )
        {
          v20 = 4 * v19;
          v21 = v17;
          result = v4;
          for ( j = v20 >> 2; j; --j )
          {
            *(_DWORD *)v21 = v4;
            v21 += 4;
          }
          v17 += v20;
        }
        v17 += 8;
      }
    }
  }
  v23 = (v5 - (unsigned __int64)v17 + 3) >> 2;
  if ( (unsigned __int64)v17 > v5 )
    v23 = 0LL;
  if ( v23 )
  {
    result = v4;
    v24 = v17;
    while ( v23 )
    {
      *(_DWORD *)v24 = v4;
      v24 += 4;
      --v23;
    }
  }
  return result;
}
