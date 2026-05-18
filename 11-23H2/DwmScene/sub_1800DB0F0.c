/*
 * XREFs of sub_1800DB0F0 @ 0x1800DB0F0
 * Callers:
 *     sub_1800DBA80 @ 0x1800DBA80 (sub_1800DBA80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800163D0 @ 0x1800163D0 (sub_1800163D0.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_18005ED08 @ 0x18005ED08 (sub_18005ED08.c)
 *     sub_1800C2FAC @ 0x1800C2FAC (sub_1800C2FAC.c)
 *     sub_1800C3008 @ 0x1800C3008 (sub_1800C3008.c)
 *     sub_1800D5B0C @ 0x1800D5B0C (sub_1800D5B0C.c)
 *     sub_1800DA924 @ 0x1800DA924 (sub_1800DA924.c)
 *     sub_1800DA980 @ 0x1800DA980 (sub_1800DA980.c)
 *     sub_1800DA9DC @ 0x1800DA9DC (sub_1800DA9DC.c)
 *     sub_1800DAAB8 @ 0x1800DAAB8 (sub_1800DAAB8.c)
 *     sub_1800DABC8 @ 0x1800DABC8 (sub_1800DABC8.c)
 *     sub_1800DACE4 @ 0x1800DACE4 (sub_1800DACE4.c)
 *     sub_1800DADD4 @ 0x1800DADD4 (sub_1800DADD4.c)
 *     sub_1800DAEC4 @ 0x1800DAEC4 (sub_1800DAEC4.c)
 *     sub_1800DB8E0 @ 0x1800DB8E0 (sub_1800DB8E0.c)
 *     sub_1800DBADC @ 0x1800DBADC (sub_1800DBADC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800DB0F0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        char a6,
        int a7,
        D3D_FEATURE_LEVEL a8,
        D3D_FEATURE_LEVEL a9,
        char a10)
{
  D3D_FEATURE_LEVEL *v13; // rdx
  int v14; // eax
  int v15; // ecx
  char v16; // si
  int DXGIFactory1; // esi
  char *v18; // rbx
  D3D_FEATURE_LEVEL *v19; // r14
  D3D_FEATURE_LEVEL v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  __int64 *v24; // rbx
  __int64 *v25; // rax
  D3D_FEATURE_LEVEL *v26; // rdi
  __int64 v27; // rdi
  unsigned int (__fastcall *v28)(__int64, _QWORD, __int64 *); // rbx
  __int64 v29; // r8
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // r8d
  float v34; // xmm0_4
  _QWORD *v35; // rbx
  __int64 **v36; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, ID3D11DeviceContext **); // rdi
  int v43; // [rsp+30h] [rbp-D0h]
  D3D_FEATURE_LEVEL v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  ID3D11DeviceContext *v45; // [rsp+58h] [rbp-A8h] BYREF
  D3D_FEATURE_LEVEL v46[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v47; // [rsp+68h] [rbp-98h] BYREF
  ID3D11DeviceContext *v48[2]; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  D3D_FEATURE_LEVEL *v50[2]; // [rsp+88h] [rbp-78h] BYREF
  D3D_FEATURE_LEVEL *v51; // [rsp+98h] [rbp-68h]
  __int128 v52; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v53[320]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v54[272]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v55; // [rsp+300h] [rbp+200h]
  int v56; // [rsp+320h] [rbp+220h]
  _OWORD v57[2]; // [rsp+330h] [rbp+230h] BYREF
  int v58; // [rsp+350h] [rbp+250h]
  char v59; // [rsp+354h] [rbp+254h] BYREF
  int v60; // [rsp+3D8h] [rbp+2D8h]
  char v61; // [rsp+3F8h] [rbp+2F8h]

  v47 = (__int64 *)a1;
  v52 = 0LL;
  *(_QWORD *)&v52 = sub_18005ED08();
  sub_18000E72C(a2);
  sub_18000E72C(a3);
  sub_18000E72C(a4);
  *(_OWORD *)v50 = 0LL;
  v13 = 0LL;
  v51 = 0LL;
  v14 = a10 & 2;
  v61 = a10 & 1;
  if ( v61 || v14 )
  {
    v15 = a8;
    if ( a8 < D3D_FEATURE_LEVEL_10_0 )
      goto LABEL_8;
  }
  else
  {
    v15 = a8;
  }
  if ( (a6 & 4) != 0 )
  {
    v16 = 1;
    if ( v15 < 45312 )
    {
LABEL_8:
      DXGIFactory1 = -2147024809;
LABEL_93:
      sub_18000E72C(a2);
      sub_18000E72C(a3);
      sub_18000E72C(a4);
      goto LABEL_94;
    }
  }
  else
  {
    v16 = 0;
  }
  v57[0] = _mm_load_si128((const __m128i *)&xmmword_18019B8E0);
  v57[1] = _mm_load_si128((const __m128i *)&xmmword_18019B8D0);
  v58 = 37120;
  v18 = (char *)v57;
  v19 = v50[1];
  do
  {
    v20 = *(_DWORD *)v18;
    v49 = v20;
    if ( v20 >= v15 && v20 <= a9 )
    {
      if ( v19 == v13 )
      {
        sub_1800DACE4((__int64 *)v50, (__int64)v19, &v49);
        v19 = v50[1];
        v15 = a8;
        v13 = v51;
      }
      else
      {
        *v19++ = v20;
        v50[1] = v19;
      }
    }
    v18 += 4;
  }
  while ( v18 != &v59 );
  v21 = (2 * (a6 & 1) + 32) | 0x40;
  if ( (a6 & 2) == 0 )
    v21 = 2 * (a6 & 1) + 32;
  v22 = v21 | 0x100;
  if ( !v16 )
    v22 = v21;
  v46[0] = a6 & 8;
  v23 = v22 | 0x800;
  if ( (a6 & 0x10) == 0 )
    v23 = v22;
  v49 = v23;
  v60 = a6 & 0x20;
  v24 = v47 + 1;
  v47 = v24;
  v25 = sub_1800163D0(v24);
  DXGIFactory1 = CreateDXGIFactory1(&stru_180199840, (void **)v25);
  if ( DXGIFactory1 < 0 )
    goto LABEL_93;
  if ( a5 )
  {
    if ( a5 != 1 )
    {
LABEL_92:
      DXGIFactory1 = -2147467259;
      goto LABEL_93;
    }
    v26 = v50[0];
  }
  else
  {
    v44[0] = 0;
    while ( 1 )
    {
      v27 = *v24;
      v28 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v24 + 96LL);
      sub_18000E72C(a2);
      if ( v28(v27, (unsigned int)v44[0], a2) == -2005270526 )
        break;
      DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 80LL))(*a2, v54);
      if ( DXGIFactory1 < 0 )
        goto LABEL_93;
      v29 = v56 & 2;
      if ( !v60 || (v56 & 2) == 0 )
      {
        v30 = v53;
        v31 = v54;
        v32 = 2LL;
        do
        {
          *v30 = *v31;
          v30[1] = v31[1];
          v30[2] = v31[2];
          v30[3] = v31[3];
          v30[4] = v31[4];
          v30[5] = v31[5];
          v30[6] = v31[6];
          v30 += 8;
          *(v30 - 1) = v31[7];
          v31 += 8;
          --v32;
        }
        while ( v32 );
        *v30 = *v31;
        v30[1] = v31[1];
        v30[2] = v31[2];
        *((_QWORD *)v30 + 6) = *((_QWORD *)v31 + 6);
        if ( !(unsigned __int8)sub_1800DBADC(v53, 0LL, v29, 128LL) )
        {
          if ( v55 < 0 )
            v34 = (float)(v55 & 1 | (unsigned int)((unsigned __int64)v55 >> 1))
                + (float)(v55 & 1 | (unsigned int)((unsigned __int64)v55 >> 1));
          else
            v34 = (float)(int)v55;
          *(float *)&v45 = v34;
          if ( v46[0] )
            *(float *)&v45 = v34 * -1.0;
          if ( v33 )
            LODWORD(v45) = -8388609;
          sub_1800DABC8((__int64 *)&v52, (__int64)v48, &v45, a2);
        }
      }
      ++v44[0];
      v24 = v47;
    }
    sub_18000E72C(a2);
    v35 = *(_QWORD **)v52;
    v26 = v50[0];
    while ( v35 != (_QWORD *)v52 )
    {
      sub_1800D5B0C(a2, v35 + 5);
      DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 80LL))(*a2, v54);
      if ( DXGIFactory1 < 0 )
        goto LABEL_93;
      sub_18000E72C(a3);
      sub_18000E72C(a4);
      *(_QWORD *)v46 = 0LL;
      v48[0] = 0LL;
      sub_18000E72C((__int64 *)v48);
      sub_18000E72C((__int64 *)v46);
      DXGIFactory1 = sub_1800DB8E0(
                       (IDXGIAdapter *)*a2,
                       D3D_DRIVER_TYPE_UNKNOWN,
                       v26,
                       v19 - v26,
                       v43,
                       (ID3D11Device **)v46,
                       v44,
                       v48);
      if ( DXGIFactory1 < 0 )
      {
        sub_18000E72C(a2);
        sub_18000E72C(a3);
        sub_18000E72C(a4);
      }
      else if ( v44[0] >= a8 )
      {
        if ( !v61
          || v44[0] >= D3D_FEATURE_LEVEL_11_0
          || (LODWORD(v45) = 0,
              (*(int (__fastcall **)(_QWORD, __int64, ID3D11DeviceContext **))(**(_QWORD **)v46 + 264LL))(
                *(_QWORD *)v46,
                4LL,
                &v45) >= 0)
          && (_DWORD)v45 )
        {
          DXGIFactory1 = sub_1800C2FAC((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v46, a3);
          if ( DXGIFactory1 < 0
            || (DXGIFactory1 = sub_1800DA924((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v48, a4),
                DXGIFactory1 < 0) )
          {
            sub_18000E72C((__int64 *)v48);
            v39 = (__int64 *)v46;
            goto LABEL_67;
          }
          sub_18000E72C((__int64 *)v48);
          sub_18000E72C((__int64 *)v46);
          break;
        }
      }
      sub_18000E72C((__int64 *)v48);
      sub_18000E72C((__int64 *)v46);
      v36 = (__int64 **)v35[2];
      if ( *((_BYTE *)v36 + 25) )
      {
        for ( i = v35[1]; !*(_BYTE *)(i + 25) && v35 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v35 = (_QWORD *)i;
        v35 = (_QWORD *)i;
      }
      else
      {
        v35 = (_QWORD *)v35[2];
        for ( j = *v36; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v35 = j;
      }
    }
    if ( v60 || *a2 && *a3 && *a4 )
      goto LABEL_87;
    v50[1] = v26;
    v46[0] = D3D_FEATURE_LEVEL_10_0;
    if ( v26 == v51 )
    {
      sub_1800DADD4((__int64 *)v50, (__int64)v26, v46);
      v19 = v50[1];
      v26 = v50[0];
    }
    else
    {
      *v26 = D3D_FEATURE_LEVEL_10_0;
      v19 = v26 + 1;
      v50[1] = v26 + 1;
    }
    sub_18000E72C(a2);
    sub_18000E72C(a3);
    sub_18000E72C(a4);
  }
  *(_QWORD *)v44 = 0LL;
  v45 = 0LL;
  sub_18000E72C((__int64 *)&v45);
  sub_18000E72C((__int64 *)v44);
  DXGIFactory1 = sub_1800DB8E0(0LL, D3D_DRIVER_TYPE_WARP, v26, v19 - v26, v43, (ID3D11Device **)v44, v46, &v45);
  if ( DXGIFactory1 < 0 )
    goto LABEL_77;
  v47 = 0LL;
  DXGIFactory1 = sub_1800DA980((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v44, (__int64 *)&v47);
  if ( DXGIFactory1 < 0 )
  {
LABEL_79:
    sub_18000E72C((__int64 *)&v47);
LABEL_77:
    sub_18000E72C((__int64 *)&v45);
    v39 = (__int64 *)v44;
LABEL_67:
    sub_18000E72C(v39);
    goto LABEL_93;
  }
  v48[0] = 0LL;
  v40 = (__int64)v47;
  v41 = *(__int64 (__fastcall **)(__int64, ID3D11DeviceContext **))(*v47 + 56);
  sub_18000E72C((__int64 *)v48);
  DXGIFactory1 = v41(v40, v48);
  if ( DXGIFactory1 < 0
    || (DXGIFactory1 = sub_1800C3008((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v48, a2), DXGIFactory1 < 0)
    || (DXGIFactory1 = sub_1800C2FAC((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v44, a3), DXGIFactory1 < 0)
    || (DXGIFactory1 = sub_1800DA924((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v45, a4), DXGIFactory1 < 0)
    || (DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 80LL))(*a2, v54), DXGIFactory1 < 0) )
  {
    sub_18000E72C((__int64 *)v48);
    goto LABEL_79;
  }
  sub_18000E72C((__int64 *)v48);
  sub_18000E72C((__int64 *)&v47);
  sub_18000E72C((__int64 *)&v45);
  sub_18000E72C((__int64 *)v44);
LABEL_87:
  if ( !*a2 || !*a3 || !*a4 )
    goto LABEL_92;
  sub_1800DAAB8(*a2);
  sub_1800DA9DC(*a3);
  if ( DXGIFactory1 < 0 )
    goto LABEL_93;
LABEL_94:
  sub_18001B880((__int64)v50);
  sub_1800DAEC4((void **)&v52, (__int64)&v52);
  return (unsigned int)DXGIFactory1;
}
