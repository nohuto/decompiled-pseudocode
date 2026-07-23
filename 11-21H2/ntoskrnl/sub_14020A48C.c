/*
 * XREFs of sub_14020A48C @ 0x14020A48C
 * Callers:
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 * Callees:
 *     sub_14020A70C @ 0x14020A70C (sub_14020A70C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_14020A48C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        int a7,
        char a8)
{
  int v8; // r11d
  int v10; // edi
  __int64 v11; // r10
  unsigned int v12; // ebx
  bool v13; // zf
  __int64 result; // rax
  _DWORD *v15; // r9
  __int64 v16; // rdx
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  int v20; // eax
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+38h] [rbp-38h] BYREF
  int v23; // [rsp+3Ch] [rbp-34h]
  int v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+44h] [rbp-2Ch]
  int v26; // [rsp+48h] [rbp-28h]
  int v27; // [rsp+4Ch] [rbp-24h]
  __int128 v28; // [rsp+50h] [rbp-20h]

  v8 = 0;
  v10 = a2;
  v11 = a1;
  v12 = *a5;
  v21 = *a5;
  if ( a8 )
  {
    v15 = *(_DWORD **)(a2 + 8);
    v16 = 4LL;
    v17 = *(_OWORD **)(a1 + 64);
    v18 = v15;
    do
    {
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      v18[4] = v17[4];
      v18[5] = v17[5];
      v18[6] = v17[6];
      v18 += 8;
      v19 = v17[7];
      v17 += 8;
      *(v18 - 1) = v19;
      --v16;
    }
    while ( v16 );
    v15[1] = *(_DWORD *)(v11 + 172);
    v15[2] = *(_DWORD *)(v11 + 172);
    v15[7] = 6;
    v15[10] = *(_DWORD *)(v11 + 280);
    v15[11] = 1;
    v20 = sub_140AB41B0(v15, 0LL, 128LL);
    *(_DWORD *)(a4 + 508) = v20;
    v21 = v12 + 512;
  }
  v28 = 0LL;
  v22 = 1162638920;
  v23 = a6;
  if ( a8 != (_BYTE)v8 )
    v23 = a6 - 512;
  v25 = *(_DWORD *)(v11 + 172);
  v13 = (*(_BYTE *)(*(_QWORD *)(v11 + 64) + 144LL) & 1) == 0;
  v26 = *(_DWORD *)(v11 + 280);
  if ( !v13 )
    v8 = 1;
  v27 = a7;
  v24 = v8;
  sub_14020A70C((unsigned int)&v22, 40, v10, a4, a4, (__int64)&v21);
  result = v21;
  *a5 = v21;
  return result;
}
