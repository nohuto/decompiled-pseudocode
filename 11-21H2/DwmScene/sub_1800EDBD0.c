/*
 * XREFs of sub_1800EDBD0 @ 0x1800EDBD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18005B914 @ 0x18005B914 (sub_18005B914.c)
 *     sub_18005BABC @ 0x18005BABC (sub_18005BABC.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E0240 @ 0x1800E0240 (sub_1800E0240.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800ED5B0 @ 0x1800ED5B0 (sub_1800ED5B0.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 *     sub_1800EEF60 @ 0x1800EEF60 (sub_1800EEF60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_1800EDBD0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int16 v13; // cx
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rax
  int v21; // r8d
  int v22; // r15d
  int v23; // r8d
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  _QWORD *v31; // r9
  __int64 v32; // rax
  BOOL v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, __int64, int *, __int64); // r15
  __int64 *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rbx
  int v40; // eax
  __int64 *v41; // rax
  _BYTE *v42; // rdx
  _QWORD *v44; // rax
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // r8
  _QWORD *v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v52; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v56[4]; // [rsp+98h] [rbp-68h] BYREF
  int v57; // [rsp+B8h] [rbp-48h] BYREF
  int v58; // [rsp+BCh] [rbp-44h]
  __int128 v59; // [rsp+C0h] [rbp-40h]
  _QWORD v60[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v61[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v62[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v63[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v64[9]; // [rsp+110h] [rbp+10h] BYREF
  int v65; // [rsp+158h] [rbp+58h] BYREF
  char v66; // [rsp+15Ch] [rbp+5Ch]
  bool v67; // [rsp+15Dh] [rbp+5Dh]
  bool v68; // [rsp+15Eh] [rbp+5Eh]
  char v69[56]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v70; // [rsp+198h] [rbp+98h]
  int v71; // [rsp+1A0h] [rbp+A0h] BYREF
  char v72; // [rsp+1A4h] [rbp+A4h]
  bool v73; // [rsp+1A5h] [rbp+A5h]
  bool v74; // [rsp+1A6h] [rbp+A6h]
  char v75[56]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v76; // [rsp+1E0h] [rbp+E0h]
  _QWORD v77[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  char v78[40]; // [rsp+1F8h] [rbp+F8h] BYREF
  int v79; // [rsp+220h] [rbp+120h]
  char v80; // [rsp+224h] [rbp+124h]
  bool v81; // [rsp+225h] [rbp+125h]
  bool v82; // [rsp+226h] [rbp+126h]
  _BYTE v83[56]; // [rsp+228h] [rbp+128h] BYREF
  _BYTE *v84; // [rsp+260h] [rbp+160h]
  __int64 v85[4]; // [rsp+270h] [rbp+170h] BYREF
  char *v86[3]; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int64 v87; // [rsp+2A8h] [rbp+1A8h]
  char *v88; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned __int64 v89; // [rsp+2C8h] [rbp+1C8h]
  _QWORD pExceptionObject[7]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v91; // [rsp+358h] [rbp+258h] BYREF
  int v92; // [rsp+360h] [rbp+260h] BYREF

  v92 = a3;
  v91 = a2;
  v51 = 0LL;
  v7 = *(_QWORD *)(a1 + 80);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    while ( v8 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
      if ( v9 == v8 )
      {
        v51 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180010910((__int64)&v51);
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    sub_1800113D0(v85, "Invalid format for DepthBuffer");
    v46 = sub_1800113D0(
            v86,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_180079B60(pExceptionObject, (__int64)v46, v47, (const char *)v85, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v52 = 0LL;
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
      if ( v12 == v11 )
      {
        v52 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180020FCC(v54, (__int64 *)&v52);
  sub_180010910((__int64)&v52);
  v13 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v84 = 0LL;
  v79 = a4;
  v80 = HIBYTE(v13) & 1;
  v81 = (v13 & 0x400) != 0;
  v82 = (v13 & 0x200) != 0;
  v64[4] = a1;
  v64[5] = (__int64)&v91;
  v64[6] = (__int64)&v92;
  v64[7] = (__int64)&a5;
  v64[8] = (__int64)v54;
  sub_1800ED5B0((__int64)v83);
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v81 && a4 != 1 )
  {
    sub_1800113D0(v85, "Readable stencil requested for stencil-buffer format that does not support stencil");
    v44 = sub_1800113D0(
            v86,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v44, v45, (__int64)v85, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = (__int64 *)sub_18002850C(v51);
  v15 = sub_180017558(v14, v77);
  v16 = *v15;
  v17 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v60[0] = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v16;
  v60[1] = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v17;
  sub_180010910((__int64)v60);
  sub_180010910((__int64)v77);
  v18 = *(_QWORD *)(a1 + 128);
  v19 = sub_18002B9EC(a1, (__int64 *)&v88);
  v20 = (__int64 *)sub_18001DC84((__int64)v78, v19);
  sub_18002BC44(v18, v20);
  if ( v89 >= 0x10 )
    sub_180010884(v88, v89 + 1);
  sub_18002BCC0(*(_QWORD *)(a1 + 128), 1, 0);
  v22 = v21 + 2;
  sub_18002BCC0(*(_QWORD *)(a1 + 128), v21 + 2, v21);
  sub_18002BCC0(*(_QWORD *)(a1 + 128), v23 + 4, v23);
  if ( v80 || v81 || v82 )
  {
    sub_18005B914(v51, (__int64 *)&v48);
    v24 = (__int64)v48;
    v64[2] = 0LL;
    v64[3] = 15LL;
    LOBYTE(v64[0]) = 0;
    sub_180012190(v64, "DepthBuffer Readable Sampler", 0x1CuLL);
    sub_18002BC44(v24, v64);
    if ( v80 )
    {
      v25 = v49;
      if ( v49 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
        v25 = v49;
      }
      v61[0] = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 208) = v48;
      v61[1] = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 216) = v25;
      sub_180010910((__int64)v61);
    }
    if ( v81 )
    {
      v26 = v49;
      if ( v49 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
        v26 = v49;
      }
      v62[0] = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 240) = v48;
      v62[1] = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v26;
      sub_180010910((__int64)v62);
    }
    if ( v82 )
    {
      v27 = v49;
      if ( v49 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
        v27 = v49;
      }
      v63[0] = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(a1 + 224) = v48;
      v63[1] = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(a1 + 232) = v27;
      sub_180010910((__int64)v63);
    }
    v28 = sub_18001D684();
    if ( v28 )
    {
      *(_DWORD *)(v28 + 8) = 1;
      *(_DWORD *)(v28 + 12) = 1;
      *(_QWORD *)v28 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
      sub_18005BABC(v28 + 16);
    }
    else
    {
      v29 = 0LL;
    }
    v30 = v29 + 16;
    v56[0] = v29 + 16;
    v56[1] = v29;
    *(_DWORD *)(v29 + 16) = 0;
    *(_DWORD *)(v29 + 20) = v22;
    *(_DWORD *)(v29 + 24) = v22;
    *(_DWORD *)(v29 + 28) = v22;
    v31 = v48;
    v32 = *v48;
    v53 = 0LL;
    if ( v29 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
      v30 = v56[0];
    }
    *(_QWORD *)&v53 = v30;
    *((_QWORD *)&v53 + 1) = v29;
    (*(void (__fastcall **)(_QWORD *, __int128 *))(v32 + 48))(v31, &v53);
    sub_180010910((__int64)v56);
    sub_180010910((__int64)&v48);
  }
  v59 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v33 = v22;
  else
    v33 = (a5 & 8) != 0;
  v57 = sub_1800E0240(a4, v33);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v58 = 5;
    v65 = v79;
    v66 = v80;
    v67 = v81;
    v68 = v82;
    v70 = 0LL;
    if ( v84 )
      v70 = (**(__int64 (__fastcall ***)(_BYTE *, char *))v84)(v84, v69);
    sub_1800EEF60(a1, &v65);
  }
  else
  {
    v58 = 3;
    v71 = v79;
    v72 = v80;
    v73 = v81;
    v74 = v82;
    v76 = 0LL;
    if ( v84 )
      v76 = (**(__int64 (__fastcall ***)(_BYTE *, char *))v84)(v84, v75);
    sub_1800EE7A4(a1, &v71);
  }
  sub_1800DA968(v54[0], &v55);
  v34 = *(_QWORD *)(a1 + 104);
  if ( v34 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v34 + 8), 1u);
    v34 = *(_QWORD *)(a1 + 104);
  }
  v56[2] = *(_QWORD *)(a1 + 96);
  v56[3] = v34;
  sub_180018704((__int64)v85);
  sub_1800E6288(v85[0], &v50);
  v35 = v55;
  v36 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v55 + 80LL);
  v37 = (__int64 *)(a1 + 112);
  v38 = *(_QWORD *)(a1 + 112);
  if ( v38 )
  {
    *v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v39 = v50;
  v40 = v36(v35, v50, &v57, a1 + 112);
  sub_1800DD668(v54[0], v40);
  v41 = sub_18002B9EC(a1, (__int64 *)v86);
  if ( (unsigned __int64)v41[3] >= 0x10 )
    v41 = (__int64 *)*v41;
  sub_180011AC0(*v37, (const char *)v41);
  if ( v87 >= 0x10 )
    sub_180010884(v86[0], v87 + 1);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  sub_180010910((__int64)v85);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v84 )
  {
    v42 = v83;
    LOBYTE(v42) = v84 != v83;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v84 + 32LL))(v84, v42);
    v84 = 0LL;
  }
  return sub_180010910((__int64)v54);
}
