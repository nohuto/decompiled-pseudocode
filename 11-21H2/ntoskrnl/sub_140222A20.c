/*
 * XREFs of sub_140222A20 @ 0x140222A20
 * Callers:
 *     sub_1402227C8 @ 0x1402227C8 (sub_1402227C8.c)
 * Callees:
 *     sub_140222B68 @ 0x140222B68 (sub_140222B68.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

__int64 __fastcall sub_140222A20(__int64 *a1)
{
  size_t v1; // rsi
  unsigned int v2; // r11d
  char *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r10
  unsigned __int8 v7; // cf
  unsigned int v8; // r9d
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rsi
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  _BYTE Base[4]; // [rsp+20h] [rbp-218h] BYREF
  char v16; // [rsp+24h] [rbp-214h] BYREF

  v1 = *((unsigned int *)a1 + 2);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v4 = &v16;
    v5 = *a1;
    v6 = (__int64)a1 + 84;
    do
    {
      v7 = _bittest64(&v5, v2);
      *((_DWORD *)v4 - 1) = v2;
      v8 = -1;
      v6 += 64LL;
      v4 += 8;
      v9 = -1;
      if ( *(_DWORD *)(v6 - 64) + (unsigned int)v7 - *(_DWORD *)(v6 - 48) >= v7 )
        v8 = *(_DWORD *)(v6 - 64) + v7 - *(_DWORD *)(v6 - 48);
      if ( v8 + *(_DWORD *)(v6 - 56) - *(_DWORD *)(v6 - 40) >= v8 )
        v9 = v8 + *(_DWORD *)(v6 - 56) - *(_DWORD *)(v6 - 40);
      ++v2;
      *((_DWORD *)v4 - 2) = v9;
    }
    while ( v2 < (unsigned int)v1 );
  }
  qsort(Base, v1, 8uLL, PtFuncCompare);
  result = *((unsigned int *)a1 + 3);
  v11 = 0LL;
  if ( (_DWORD)result )
  {
    v12 = (unsigned int *)Base;
    v13 = (unsigned int)result;
    do
    {
      if ( v12[1] >= 0x19 )
      {
        result = *v12;
        v11 |= 1LL << result;
      }
      v12 += 2;
      --v13;
    }
    while ( v13 );
  }
  v14 = 0;
  for ( *a1 = v11; v14 < *((_DWORD *)a1 + 2); ++v14 )
    result = sub_140222B68(&a1[8 * v14 + 8], !_bittest64(&v11, v14));
  return result;
}
