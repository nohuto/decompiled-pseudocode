/*
 * XREFs of sub_140547570 @ 0x140547570
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054BB58 @ 0x14054BB58 (sub_14054BB58.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140547570(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // r15
  unsigned int v10; // edi
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  __int16 v17; // bx
  int v18; // edi
  __int64 v19; // rdx
  __int16 v20; // cx
  __int64 v21; // r8
  __int128 v23; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int128 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  _QWORD v33[34]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v34[112]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v35[288]; // [rsp+220h] [rbp+120h] BYREF

  v26 = a1;
  LODWORD(v32) = 0;
  WORD2(v32) = 0;
  BYTE6(v32) = 0;
  v24 = 0LL;
  LODWORD(v25) = 0;
  v28 = 0LL;
  v30 = 0LL;
  LODWORD(v29) = 0;
  v31 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  memset(v33, 0, 0x108uLL);
  if ( !a3 )
    goto LABEL_6;
  LODWORD(v33[0]) = 2097153;
  memset((char *)v33 + 4, 0, 0x104uLL);
  v7 = *((unsigned __int16 *)a3 + 4);
  v8 = *a3;
  if ( !(_WORD)v7 )
    goto LABEL_5;
  if ( WORD1(v33[0]) > (unsigned __int16)v7 )
  {
    LOWORD(v33[0]) = v7 + 1;
LABEL_5:
    v33[v7 + 1] |= v8;
  }
LABEL_6:
  v9 = 0;
  while ( 1 )
  {
    v10 = 0;
    v11 = sub_14039DF90((PHYSICAL_ADDRESS *)&v27, 2, (__int64)v34, 56LL);
    v12 = sub_14039DF90((PHYSICAL_ADDRESS *)&v23, 1, (__int64)v35, 144LL);
    memset(v12, 0, 0x48uLL);
    *(_OWORD *)(v12 + 5) = *a2;
    *(_OWORD *)(v12 + 7) = a2[1];
    if ( a3 )
    {
      v13 = sub_14054C8F0(v33, v12 + 8, (v23 & 2) != 0 ? 64 : 4016);
      if ( v13 == -1 )
      {
        sub_14039D8F0((__int64)&v23);
        v12 = sub_14039DF90((PHYSICAL_ADDRESS *)&v23, 1, 0LL, 0LL);
        memset(v12, 0, 0x48uLL);
        *(_OWORD *)(v12 + 5) = *a2;
        *(_OWORD *)(v12 + 7) = a2[1];
        v13 = sub_14054C8F0(v33, v12 + 8, 4016LL);
      }
      *((_DWORD *)v12 + 15) |= 2u;
      v14 = v13 + 80;
      v10 = v14 - 72;
      if ( v14 <= 0x48 )
        v10 = 0;
    }
    else
    {
      *(_OWORD *)(v12 + 7) = 0LL;
    }
    *v12 = -1LL;
    v12[1] = v26;
    v12[2] = 1LL;
    v15 = v12[2];
    if ( v9 )
      v15 = 3LL;
    v12[2] = v15;
    v16 = HvlInvokeHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x7C);
    v17 = v16;
    if ( v16 )
    {
      v18 = sub_14054CA70(v16);
    }
    else
    {
      *a4 = *(_OWORD *)v11;
      v30 = *((_OWORD *)v11 + 1);
      v31 = *((_OWORD *)v11 + 2);
      v18 = 0;
      v32 = v11[6];
    }
    sub_14039D8F0((__int64)&v23);
    sub_14039D8F0((__int64)&v27);
    if ( !sub_140459C2A(v17) )
      break;
    if ( (int)sub_1405438E8(v20, v19, v21) < 0 )
      v9 = 1;
  }
  if ( v18 >= 0 )
    sub_14054BB58(&v30);
  return (unsigned int)v18;
}
