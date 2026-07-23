/*
 * XREFs of sub_1409BF370 @ 0x1409BF370
 * Callers:
 *     sub_1409BF948 @ 0x1409BF948 (sub_1409BF948.c)
 * Callees:
 *     sub_1405EE7A0 @ 0x1405EE7A0 (sub_1405EE7A0.c)
 */

__int64 __fastcall sub_1409BF370(_DWORD *a1, int *a2, unsigned __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r11
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  int *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned __int64 v16; // r8
  int *v17; // rdx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v8 = (__int64)(a1 + 1);
    v9 = v4;
    if ( *a1 )
    {
      v10 = a2;
      v11 = (__int64)(a2 + 1);
      do
      {
        if ( v6 >= a3 )
          goto LABEL_20;
        v12 = sub_1405EE7A0(v8, v11);
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            ++v5;
            v8 += 16LL;
            continue;
          }
          v15 = *v10;
          v14 = v4 + 1;
          v10 += 5;
          ++v6;
          v11 += 20LL;
          if ( v15 )
            v14 = v4;
        }
        else
        {
          v13 = *v10;
          v14 = v4 - 1;
          v10 += 5;
          ++v5;
          v8 += 16LL;
          ++v6;
          v11 += 20LL;
          if ( !v13 )
            v14 = v4;
        }
        v4 = v14;
      }
      while ( v5 < v9 );
    }
  }
  if ( v6 < a3 )
  {
    v16 = a3 - v6;
    v17 = &a2[5 * v6];
    do
    {
      v18 = *v17 == 0;
      v19 = v4 + 1;
      v17 += 5;
      if ( !v18 )
        v19 = v4;
      v4 = v19;
      --v16;
    }
    while ( v16 );
  }
LABEL_20:
  if ( v4 )
  {
    v21 = 16 * v4;
    if ( is_mul_ok(v4, 0x10uLL) )
    {
      v22 = -1LL;
      if ( v21 + 4 >= v21 )
        v22 = v21 + 4;
      result = v21 + 4 < v21 ? 0xC0000095 : 0;
    }
    else
    {
      v22 = -1LL;
      result = 3221225621LL;
    }
    *a4 = v22;
  }
  else
  {
    *a4 = 0LL;
    return 0LL;
  }
  return result;
}
