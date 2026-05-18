/*
 * XREFs of sub_18002A240 @ 0x18002A240
 * Callers:
 *     sub_18002A08C @ 0x18002A08C (sub_18002A08C.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     sub_18009DECC @ 0x18009DECC (sub_18009DECC.c)
 *     sub_1800A4060 @ 0x1800A4060 (sub_1800A4060.c)
 *     sub_1800A6A50 @ 0x1800A6A50 (sub_1800A6A50.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_18002AB08 @ 0x18002AB08 (sub_18002AB08.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002A240(__int64 a1, int a2, int a3, char a4, int a5, __int64 a6)
{
  int v7; // r14d
  int v8; // r15d
  __int64 *v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 *v14; // rax
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  __int64 v26; // r8
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __int64 result; // rax
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // rcx
  char *v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+58h] [rbp-A8h] BYREF
  char *v41; // [rsp+68h] [rbp-98h] BYREF
  char *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  _QWORD v44[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v47[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v49[4]; // [rsp+E0h] [rbp-20h] BYREF
  char *v50[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v51; // [rsp+118h] [rbp+18h]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  *(_DWORD *)(a1 + 112) = a5;
  v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v10 = sub_180017558(v9, v46);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v44[0] = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v11;
  v44[1] = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = v12;
  sub_180010910((__int64)v44);
  sub_180010910((__int64)v46);
  sub_18002B9EC(a1, v50);
  if ( !v50[2] )
    sub_180012190((__int64 *)v50, "RenderTargetD3D11", 0x11uLL);
  v13 = *(_QWORD *)(a1 + 136);
  v14 = sub_18001875C(v48, (__int64)v50);
  sub_18002BC44(v13, v14);
  sub_18002BCC0(*(_QWORD *)(a1 + 136), 1LL);
  sub_18002BCC0(*(_QWORD *)(a1 + 136), (unsigned int)(v15 + 2));
  sub_18002BCC0(*(_QWORD *)(a1 + 136), (unsigned int)(v16 + 4));
  sub_18002BCC0(*(_QWORD *)(a1 + 136), (unsigned int)(v17 + 8));
  sub_18005D70C(*(_QWORD *)(a1 + 136), v7, v8, 0, a4, 0, a5 & 0x7C | 3, 0LL, 0, 0LL);
  if ( (a5 & 0x80u) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 152);
    if ( !v18 )
    {
      v19 = sub_180017558(v9, v47);
      v20 = *v19;
      v21 = v19[1];
      *v19 = 0LL;
      v19[1] = 0LL;
      v45[0] = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 152) = v20;
      v45[1] = *(_QWORD *)(a1 + 160);
      *(_QWORD *)(a1 + 160) = v21;
      sub_180010910((__int64)v45);
      sub_180010910((__int64)v47);
      v18 = *(_QWORD *)(a1 + 152);
    }
    v22 = sub_18001DCD4(v49, v50, " (staging)");
    sub_18002BC44(v18, v22);
    sub_18002BCC0(*(_QWORD *)(a1 + 152), 1LL);
    sub_18002BCC0(*(_QWORD *)(a1 + 152), (unsigned int)(v23 + 2));
    sub_18002BCC0(*(_QWORD *)(a1 + 152), (unsigned int)(v24 + 4));
    sub_18002BCC0(*(_QWORD *)(a1 + 152), (unsigned int)(v25 + 8));
    sub_18005D70C(*(_QWORD *)(a1 + 152), v7, v8, 0, a4, 3, a5 & 0x7C | 0x80, v26 & v36, v26 & v37, v26 & v38);
  }
  v27 = 0LL;
  v27.m128_f32[0] = (float)v8;
  v28 = 0LL;
  v28.m128_f32[0] = (float)v7;
  sub_18002AB08(a1, _mm_unpacklo_ps(v28, v27).m128_u64[0]);
  if ( a6 )
    sub_18002BCC0(a1, 1LL);
  result = sub_18002BA14(a1, 1LL);
  if ( (_BYTE)result )
  {
    if ( a6 )
    {
      sub_18002A630(v30, a6);
      sub_18002BCC0(a1, 2LL);
      result = sub_18002BCC0(v32, (unsigned int)(v31 + 4));
    }
    else
    {
      result = sub_180039EBC(v9, &v41);
      v33 = v41;
      v34 = (__int64)v42;
      if ( v41 != v42 )
      {
        do
        {
          v35 = *((_QWORD *)v33 + 1);
          if ( v35 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
            v35 = *((_QWORD *)v33 + 1);
          }
          v40[0] = *(_QWORD *)v33;
          v40[1] = v35;
          sub_18002A630(a1, v40[0]);
          result = sub_180010910((__int64)v40);
          v33 += 16;
        }
        while ( v33 != (char *)v34 );
        v34 = (__int64)v42;
        v33 = v41;
      }
      if ( v33 )
      {
        sub_1800126E8((__int64)v33, v34);
        result = sub_180010884(v41, (v43 - (_QWORD)v41) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  if ( v51 >= 0x10 )
    return sub_180010884(v50[0], v51 + 1);
  return result;
}
