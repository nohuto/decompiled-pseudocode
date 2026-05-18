/*
 * XREFs of sub_180025520 @ 0x180025520
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001278 @ 0x180001278 (sub_180001278.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_1800241C4 @ 0x1800241C4 (sub_1800241C4.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025520(__int64 a1, __int64 a2, char a3, _BYTE *a4, __int64 a5, int *a6)
{
  const char *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 result; // rax
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  int v31; // [rsp+10Ch] [rbp+Ch]
  int *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  const char *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  int v40; // [rsp+14Ch] [rbp+4Ch]
  _BYTE *v41; // [rsp+150h] [rbp+50h]
  int v42; // [rsp+158h] [rbp+58h]
  int v43; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  int *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  int *v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  int *v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h]
  int *v52; // [rsp+1A0h] [rbp+A0h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]

  sub_180024958(*(volatile signed __int64 **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5
    && (qword_1801EA1D0 & 0x400000000000LL) != 0
    && (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
  {
    v21 = a6[7];
    v22 = a6[6];
    v23 = a6[4];
    v24 = *a6;
    v26 = a5;
    v10 = sub_1800241C4(a3);
    v11 = sub_1800230F8(a2);
    v12 = sub_1800230EC(a1 + 8);
    v25 = 1;
    v13 = *(volatile signed __int64 **)(a1 + 112);
    if ( v13 )
    {
      _InterlockedExchangeAdd64(v13 + 18, 0LL);
      sub_180025C4C((void *)v13);
    }
    else
    {
      v27[0] = 0;
    }
    v52 = &v21;
    v53 = 4LL;
    v50 = &v22;
    v51 = 4LL;
    v48 = &v23;
    v49 = 4LL;
    v46 = &v24;
    v47 = 4LL;
    v44 = &v26;
    v45 = 8LL;
    v14 = -1LL;
    if ( a4 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a4[v15] );
      v16 = v15 + 1;
    }
    else
    {
      a4 = &unk_180128042;
      v16 = 1;
    }
    v41 = a4;
    v42 = v16;
    v43 = 0;
    if ( v10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v10[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v10 = (const char *)&unk_180128042;
      v18 = 1;
    }
    v38 = v10;
    v39 = v18;
    v40 = 0;
    v36 = v11;
    v37 = 16LL;
    v34 = v12;
    v35 = 16LL;
    v32 = &v25;
    v33 = 4LL;
    do
      ++v14;
    while ( v27[v14] );
    v29 = v27;
    v30 = v14 + 1;
    v31 = 0;
    sub_180001278((__int64)&dword_1801EA1C0, (unsigned __int8 *)dword_1801CD2C2, 0LL, 0LL, 0xDu, &v28);
  }
  result = sub_18002596C((char *)(a1 + 120));
  v20 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v20 )
    return o__aligned_free();
  return result;
}
