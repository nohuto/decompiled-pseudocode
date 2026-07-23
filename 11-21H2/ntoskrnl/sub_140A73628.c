/*
 * XREFs of sub_140A73628 @ 0x140A73628
 * Callers:
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 * Callees:
 *     sub_14028F978 @ 0x14028F978 (sub_14028F978.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A70244 @ 0x140A70244 (sub_140A70244.c)
 */

__int64 __fastcall sub_140A73628(__int64 a1, __int64 a2)
{
  char *v2; // r12
  unsigned int v4; // r14d
  unsigned int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r10
  int v8; // r8d
  __int64 v9; // rdi
  char *v10; // rbx
  unsigned __int64 v11; // r10
  unsigned int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // r13d
  char *v16; // r14
  signed __int64 v17; // r12
  char v19[4]; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h]
  unsigned int v22; // [rsp+3Ch] [rbp-2Dh]
  char *v23; // [rsp+40h] [rbp-29h]
  _DWORD v24[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h]
  unsigned __int64 v26; // [rsp+58h] [rbp-11h]
  __int64 v27; // [rsp+60h] [rbp-9h]
  _DWORD v28[4]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v29[4]; // [rsp+78h] [rbp+Fh]

  v2 = *(char **)(a2 + 8);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = -1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  v24[1] = 0;
  v20 = 0;
  v23 = v2;
  v26 = v6 + v7;
  v21 = v4;
  v19[0] = 0;
  *(_DWORD *)(a1 + 8) = -2147483622;
  if ( v4 <= 3 )
    v5 = 0xFFFFFFFF >> (8 * (4 - v4));
  v28[0] = 0;
  v29[0] = v5;
  v8 = 4;
  v29[1] = v5 << 8;
  v29[3] = v5 << 24;
  v29[2] = v5 << 16;
  if ( v4 < 5 )
    v8 = v4;
  sub_140A70244((__int64)v28, v2, v8);
  v9 = v6 & 3;
  v28[1] = v28[0] << 8;
  v10 = (char *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  v28[2] = v28[0] << 16;
  v28[3] = v28[0] << 24;
  if ( (unsigned __int64)v10 < v11 )
  {
    while ( (int)sub_14028F978(v10, (__int64)&v20, 4u, 4u, 4) < 0 )
    {
LABEL_18:
      v10 += 4;
      v9 = 0LL;
      if ( (unsigned __int64)v10 >= v26 )
        goto LABEL_22;
    }
    v12 = v4 - 4;
    v22 = v4 - 4;
    v13 = v9;
    while ( (v20 & v29[v13]) != v28[v13] )
    {
LABEL_17:
      LODWORD(v9) = v9 + 1;
      ++v13;
      if ( (unsigned int)v9 >= 4 )
        goto LABEL_18;
    }
    v14 = (unsigned int)v9;
    v27 = (unsigned int)v9;
    if ( 4 - (int)v9 < v4 )
    {
      v15 = v12 + v9;
      v16 = &v2[-(unsigned int)v9 + 4];
      if ( v12 + (_DWORD)v9 )
      {
        v17 = (unsigned int)v9 + v10 - v23;
        do
        {
          if ( (int)sub_14028F978(&v16[v17], (__int64)v19, 1u, 1u, 4) < 0 )
            goto LABEL_16;
          if ( v19[0] != *v16 )
            break;
          ++v16;
          --v15;
        }
        while ( v15 );
        if ( v15 )
        {
LABEL_16:
          v12 = v22;
          v2 = v23;
          v4 = v21;
          goto LABEL_17;
        }
        v14 = v27;
      }
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = &v10[v14];
  }
LABEL_22:
  v24[0] = 3670072;
  v25 = a1;
  return KdSendPacket(2LL, v24, 0LL, &xmmword_140C31E60);
}
