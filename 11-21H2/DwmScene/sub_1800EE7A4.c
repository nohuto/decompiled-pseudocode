/*
 * XREFs of sub_1800EE7A4 @ 0x1800EE7A4
 * Callers:
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18005D638 @ 0x18005D638 (sub_18005D638.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E3B1C @ 0x1800E3B1C (sub_1800E3B1C.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800EE7A4(__int64 a1, int *a2)
{
  __int64 *v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int *v8; // rsi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int128 *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // r14
  __int64 *v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // rax
  int v35; // r15d
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 result; // rax
  __int64 v45; // rdx
  int *v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+58h] [rbp-A8h] BYREF
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int128 v57; // [rsp+78h] [rbp-88h] BYREF
  __int128 v58; // [rsp+88h] [rbp-78h] BYREF
  __int128 v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v63[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v64[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v67; // [rsp+100h] [rbp+0h] BYREF
  int v68; // [rsp+110h] [rbp+10h] BYREF
  __int64 v69; // [rsp+114h] [rbp+14h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  __int64 v71; // [rsp+120h] [rbp+20h]
  _QWORD v72[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v73[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v74[3]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v75; // [rsp+160h] [rbp+60h]
  _QWORD v76[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v77[2]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v78[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v79[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v80[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v81[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v82[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v83[2]; // [rsp+200h] [rbp+100h] BYREF
  char *v84; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int64 v85; // [rsp+238h] [rbp+138h]
  char v86[8]; // [rsp+240h] [rbp+140h] BYREF
  int v87; // [rsp+248h] [rbp+148h]
  _QWORD pExceptionObject[7]; // [rsp+270h] [rbp+170h] BYREF

  v82[2] = a2;
  v4 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v63[0] = v4;
  v5 = sub_180017558(v4, v76);
  v6 = *v5;
  v7 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  *(_QWORD *)&v83[0] = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v6;
  *((_QWORD *)&v83[0] + 1) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v7;
  sub_180010910((__int64)v83);
  sub_180010910((__int64)v76);
  v8 = a2 + 2;
  v9 = *a2;
  v59 = 0LL;
  v10 = *(_QWORD *)(a1 + 136);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 136);
  }
  *(_QWORD *)&v59 = *(_QWORD *)(a1 + 128);
  *((_QWORD *)&v59 + 1) = v10;
  v50 = 4;
  v51 = v9;
  v11 = *((_QWORD *)a2 + 8);
  if ( !v11 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int128 *, int *, int *))(*(_QWORD *)v11 + 16LL))(v11, &v59, &v51, &v50);
  sub_180010910((__int64)&v59);
  v12 = sub_18005E29C(*(_QWORD *)(a1 + 128), v77, *(_DWORD *)(a1 + 88));
  v13 = *v12;
  v14 = v12[1];
  *v12 = 0LL;
  v12[1] = 0LL;
  v72[0] = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v13;
  v72[1] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v14;
  sub_180010910((__int64)v72);
  sub_180010910((__int64)v77);
  v65 = 0LL;
  v15 = *(_QWORD *)(a1 + 80);
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 8);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16);
      if ( v17 == v16 )
      {
        v65 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180020FCC(v64, (__int64 *)&v65);
  sub_180010910((__int64)&v65);
  if ( *((_BYTE *)a2 + 4) )
  {
    v18 = sub_180017558(v4, v78);
    v19 = *v18;
    v20 = v18[1];
    *v18 = 0LL;
    v18[1] = 0LL;
    v73[0] = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = v19;
    v73[1] = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 152) = v20;
    sub_180010910((__int64)v73);
    sub_180010910((__int64)v78);
    sub_18002BCC0(*(_QWORD *)(a1 + 144), 2, 0);
    v21 = *a2;
    v57 = 0LL;
    v22 = *(_QWORD *)(a1 + 152);
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
      v22 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)&v57 = *(_QWORD *)(a1 + 144);
    *((_QWORD *)&v57 + 1) = v22;
    v52 = 256;
    v53 = v21;
    v23 = *((_QWORD *)a2 + 8);
    if ( !v23 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, int *, int *))(*(_QWORD *)v23 + 16LL))(v23, &v57, &v53, &v52);
    v24 = &v57;
  }
  else
  {
    if ( !*((_BYTE *)a2 + 5) )
      goto LABEL_41;
    v25 = sub_180017558(v4, v79);
    v26 = *v25;
    v27 = v25[1];
    *v25 = 0LL;
    v25[1] = 0LL;
    v74[0] = *(_QWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 192) = v26;
    v74[1] = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 200) = v27;
    sub_180010910((__int64)v74);
    sub_180010910((__int64)v79);
    sub_18002BCC0(*(_QWORD *)(a1 + 192), 2, 0);
    v28 = *a2;
    v58 = 0LL;
    v29 = *(_QWORD *)(a1 + 200);
    if ( v29 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
      v29 = *(_QWORD *)(a1 + 200);
    }
    *(_QWORD *)&v58 = *(_QWORD *)(a1 + 192);
    *((_QWORD *)&v58 + 1) = v29;
    v54 = 1024;
    v55 = v28;
    v30 = *((_QWORD *)a2 + 8);
    if ( !v30 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, int *, int *))(*(_QWORD *)v30 + 16LL))(v30, &v58, &v55, &v54);
    v24 = &v58;
  }
  sub_180010910((__int64)v24);
  if ( *((_BYTE *)a2 + 5) )
  {
    v31 = (__int64 *)(a1 + 192);
    if ( sub_1800122B0((_QWORD *)(a1 + 192)) )
    {
      sub_18005E29C(*(_QWORD *)(a1 + 144), &v67, *(_DWORD *)(a1 + 88));
      if ( *((_QWORD *)&v67 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL));
      v75 = v67;
      v32 = (__int64 *)sub_180018704((__int64)v80);
      sub_1800E6288(*v32, &v56);
      sub_180010910((__int64)v80);
      v33 = v56;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v56 + 80LL))(v56, v86);
      v71 = 0LL;
      v68 = 47;
      v69 = 4LL;
      v70 = v87;
      v49 = 0LL;
      v34 = sub_1800DA968(v64[0], &v60);
      v35 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64 *))(*(_QWORD *)*v34 + 56LL))(
              *v34,
              v33,
              &v68,
              &v49);
      v36 = v60;
      if ( v60 )
      {
        v60 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
      sub_1800DD668(v64[0], v35);
      if ( v35 < 0 )
      {
        sub_1800113D0(v83, "Failed to create ShaderResourceView for stencil buffer");
        v47 = sub_1800113D0(
                v76,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
        sub_180079B60(pExceptionObject, (__int64)v47, v48, (const char *)v83, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v37 = sub_18002B9EC(a1, (__int64 *)&v84);
      if ( (unsigned __int64)v37[3] >= 0x10 )
        v37 = (__int64 *)*v37;
      sub_180011AC0(v49, (const char *)v37);
      if ( v85 >= 0x10 )
        sub_180010884(v84, v85 + 1);
      v38 = sub_180016ED0(v64[0], v81);
      sub_180020FCC(&v66, v38);
      sub_180010910((__int64)v81);
      v61 = v49;
      if ( v49 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
      v62 = v33;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
      sub_1800E3B1C((_QWORD *)v66, (char *)&v62, (char *)&v61, 0x400u);
      v39 = sub_180017558(v63[0], v82);
      v40 = *v39;
      v41 = v39[1];
      *v39 = 0LL;
      v39[1] = 0LL;
      v63[0] = (__int64 *)*v31;
      *v31 = v40;
      v63[1] = *(__int64 **)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v41;
      sub_180010910((__int64)v63);
      sub_180010910((__int64)v82);
      sub_18002BCC0(*v31, 2, 0);
      v42 = *v31;
      if ( *((_QWORD *)&v66 + 1) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v66 + 1) + 8LL));
        v33 = v56;
      }
      v83[0] = v66;
      sub_18005D638(v42, v83);
      sub_180010910((__int64)v83);
      sub_180010910((__int64)&v66);
      v43 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      sub_180010910((__int64)&v67);
    }
  }
LABEL_41:
  result = sub_180010910((__int64)v64);
  v46 = (int *)*((_QWORD *)v8 + 7);
  if ( v46 )
  {
    LOBYTE(v45) = v46 != v8;
    result = (*(__int64 (__fastcall **)(int *, __int64))(*(_QWORD *)v46 + 32LL))(v46, v45);
    *((_QWORD *)v8 + 7) = 0LL;
  }
  return result;
}
