/*
 * XREFs of sub_1409BF208 @ 0x1409BF208
 * Callers:
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409BF48C @ 0x1409BF48C (sub_1409BF48C.c)
 *     sub_1409BF598 @ 0x1409BF598 (sub_1409BF598.c)
 *     sub_1409BF5D0 @ 0x1409BF5D0 (sub_1409BF5D0.c)
 *     sub_1409BF6D0 @ 0x1409BF6D0 (sub_1409BF6D0.c)
 */

__int64 __fastcall sub_1409BF208(_DWORD *a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r11
  _DWORD *v10; // rdi
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  char v16; // al
  unsigned __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  char v21; // al
  __int64 v22; // r9
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  __int64 result; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  int v29; // [rsp+28h] [rbp-50h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v10 = a1 + 1;
    v11 = v4;
    if ( *a1 )
    {
      v12 = a2;
      do
      {
        if ( v6 >= a3 )
          goto LABEL_21;
        v13 = sub_1409BF48C(v10, v12, a3, v4);
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            ++v5;
            v10 += 3;
            continue;
          }
          v16 = sub_1409BF5D0(v12);
          v4 = v18 + 1;
          if ( !v16 )
            v4 = v17;
        }
        else
        {
          if ( (*(_DWORD *)(v12 + 28) & 4) != 0
            || (v15 = v10[2],
                v28 = *(_QWORD *)v10,
                v29 = v15,
                sub_1409BF6D0(&v28, v14),
                !(unsigned __int8)sub_1409BF598(&v28)) )
          {
            --v4;
          }
          ++v5;
          v10 += 3;
        }
        ++v6;
        v12 += 32LL;
      }
      while ( v5 < v11 );
    }
  }
  if ( v6 < a3 )
  {
    v19 = a2 + 32 * v6;
    v20 = a3 - v6;
    do
    {
      v21 = sub_1409BF5D0(v19);
      v24 = v23 + 1;
      if ( !v21 )
        v24 = v23;
      v19 = v22 + 32;
      v4 = v24;
      --v20;
    }
    while ( v20 );
  }
LABEL_21:
  if ( v4 )
  {
    v26 = 12 * v4;
    if ( is_mul_ok(v4, 0xCuLL) )
    {
      v27 = -1LL;
      if ( v26 + 4 >= v26 )
        v27 = v26 + 4;
      result = v26 + 4 < v26 ? 0xC0000095 : 0;
    }
    else
    {
      v27 = -1LL;
      result = 3221225621LL;
    }
    *a4 = v27;
  }
  else
  {
    *a4 = 0LL;
    return 0LL;
  }
  return result;
}
