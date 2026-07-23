/*
 * XREFs of sub_140AB1844 @ 0x140AB1844
 * Callers:
 *     sub_140AB08A0 @ 0x140AB08A0 (sub_140AB08A0.c)
 * Callees:
 *     sub_1403A7F70 @ 0x1403A7F70 (sub_1403A7F70.c)
 *     sub_1403A8390 @ 0x1403A8390 (sub_1403A8390.c)
 *     sub_1403A8954 @ 0x1403A8954 (sub_1403A8954.c)
 *     sub_1403CAD78 @ 0x1403CAD78 (sub_1403CAD78.c)
 *     sub_14064D880 @ 0x14064D880 (sub_14064D880.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 *     sub_140AAD404 @ 0x140AAD404 (sub_140AAD404.c)
 *     sub_140AB14B4 @ 0x140AB14B4 (sub_140AB14B4.c)
 *     sub_140AB1814 @ 0x140AB1814 (sub_140AB1814.c)
 *     sub_140AB1A78 @ 0x140AB1A78 (sub_140AB1A78.c)
 */

__int64 __fastcall sub_140AB1844(__int64 a1, __int16 *a2, __int64 a3, int a4, __m128i *a5)
{
  __int16 *v6; // r14
  int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  __int16 *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  __m128i *v17; // r15
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // r13d
  int v21; // eax
  unsigned int *v22; // rcx
  int v23; // eax
  _BYTE *v24; // rsi
  __int64 v26; // [rsp+38h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-8h]
  _BYTE *v29; // [rsp+A0h] [rbp+40h] BYREF
  int v30; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+58h] BYREF

  v27 = 0LL;
  v30 = 0;
  v6 = a2;
  v31 = 0LL;
  v28 = 0;
  v29 = 0LL;
  a5 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = a1 + 40;
        v12 = a2;
        while ( 1 )
        {
          v7 = sub_14064D880(v11, (unsigned __int16)*v12, (int)&v30, a4, 0LL);
          if ( v7 < 0 )
            break;
          v9 += v30;
          v11 = a1 + 40;
          ++v10;
          ++v12;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v7 = sub_1403CAD78(a1 + 40, (__int64)&v29);
        if ( v7 >= 0 )
        {
          v13 = *(_DWORD *)(a1 + 12);
          v14 = HIDWORD(v29);
          v28 = v9;
          if ( HIDWORD(v29) > v13 )
            v14 = v13;
          v15 = *(_DWORD *)(a1 + 8);
          HIDWORD(v27) = v14;
          if ( v9 > v15 )
            v9 = v15;
          LODWORD(v27) = v9;
          v16 = sub_140AAD404(&v27, 32, (__int64 *)&a5);
          v17 = a5;
          v7 = v16;
          if ( v16 >= 0 )
          {
            sub_1403A8954((__int64)a5, *(_DWORD *)(a1 + 40));
            v18 = 0;
            v19 = 0;
            v20 = 0;
            v31 = 0LL;
            if ( (_DWORD)v8 )
            {
              while ( 1 )
              {
                v21 = sub_1403A8390(v17, a1 + 40, *v6, v18, v19, 0, &v30, v26, 0LL);
                v7 = v21;
                if ( v21 == -2147483643 )
                  break;
                if ( v21 < 0 )
                  goto LABEL_30;
                v18 = v30 + v31;
                LODWORD(v31) = v18;
                if ( v18 > v9 )
                  break;
                ++v20;
                ++v6;
                if ( v20 >= (unsigned int)v8 )
                  break;
                v19 = HIDWORD(v31);
              }
            }
            sub_140AB1A78(a1, &v27, &v31);
            v22 = *(unsigned int **)(a1 + 24);
            v29 = 0LL;
            v23 = sub_140AB14B4(v22, v17, (int *)&v31, (__int64 *)&v29);
            v24 = v29;
            v7 = v23;
            if ( v23 >= 0 )
            {
              v7 = sub_140AB1814(a1);
              if ( v7 >= 0 )
              {
                HIDWORD(v31) = *(_DWORD *)(a1 + 4);
                LODWORD(v31) = *(_DWORD *)a1 + v31;
                v7 = sub_1403A7F70(v24, (__int64)&v31);
              }
            }
            if ( v24 )
              sub_140AAD3E0((__int64)v24);
          }
LABEL_30:
          if ( v17 )
            sub_140AAD3E0((__int64)v17);
        }
      }
    }
  }
  else
  {
    return (unsigned int)sub_140AB1814(a1);
  }
  return (unsigned int)v7;
}
