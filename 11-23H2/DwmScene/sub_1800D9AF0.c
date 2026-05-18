/*
 * XREFs of sub_1800D9AF0 @ 0x1800D9AF0
 * Callers:
 *     sub_1800D99A0 @ 0x1800D99A0 (sub_1800D99A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18001071C @ 0x18001071C (sub_18001071C.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180024944 @ 0x180024944 (sub_180024944.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     sub_18002CA44 @ 0x18002CA44 (sub_18002CA44.c)
 *     sub_18006EE5C @ 0x18006EE5C (sub_18006EE5C.c)
 *     sub_18006F930 @ 0x18006F930 (sub_18006F930.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C9D74 @ 0x1800C9D74 (sub_1800C9D74.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800CC258 @ 0x1800CC258 (sub_1800CC258.c)
 *     sub_1800CCAE4 @ 0x1800CCAE4 (sub_1800CCAE4.c)
 *     sub_1800D58A0 @ 0x1800D58A0 (sub_1800D58A0.c)
 *     sub_1800D5B0C @ 0x1800D5B0C (sub_1800D5B0C.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     sub_1800D8A34 @ 0x1800D8A34 (sub_1800D8A34.c)
 *     sub_1800D8A90 @ 0x1800D8A90 (sub_1800D8A90.c)
 *     sub_1800D97D0 @ 0x1800D97D0 (sub_1800D97D0.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_1800D9AF0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  double v6; // xmm0_8
  char v7; // r12
  int v8; // eax
  ULONG_PTR v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v14; // rbx
  int v15; // eax
  ULONG_PTR v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v18; // rbx
  int v19; // eax
  ULONG_PTR v20; // rbx
  int v21; // eax
  ULONG_PTR v22; // rbx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, bool, __int64 *); // rsi
  int v25; // eax
  ULONG_PTR v26; // rbx
  __int64 v27; // r14
  __int64 (__fastcall *v28)(__int64, __int64, _OWORD *, __int64); // rsi
  __int64 v29; // rbx
  int v30; // eax
  ULONG_PTR v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int128 *, _QWORD, __int64); // rsi
  __int64 v33; // rbx
  int v34; // eax
  ULONG_PTR v35; // rbx
  __int64 v36; // rbx
  int v37; // ecx
  __int64 (__fastcall *v38)(__int64, _DWORD *, _QWORD, __int64); // rsi
  int v39; // eax
  ULONG_PTR v40; // rbx
  __int64 (__fastcall *v41)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v42; // rbx
  int v43; // eax
  ULONG_PTR v44; // rbx
  __int64 (__fastcall *v45)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v46; // rbx
  int v47; // eax
  ULONG_PTR v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rsi
  int v53; // ebx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // r12
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // edi
  __int64 v61; // rbx
  __int64 v62; // r12
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  __int64 *v65; // r9
  _QWORD *v66; // rax
  __int64 (__fastcall ***v67)(_QWORD, void *, __int64 *); // rcx
  __int64 result; // rax
  char v69; // [rsp+48h] [rbp-C0h]
  char v70; // [rsp+49h] [rbp-BFh]
  char v71; // [rsp+4Ah] [rbp-BEh]
  __int64 v72; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v74[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+70h] [rbp-98h] BYREF
  __int64 (__fastcall ***v76)(_QWORD, void *, __int64 *); // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v77; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v78; // [rsp+88h] [rbp-80h] BYREF
  __int64 v79; // [rsp+90h] [rbp-78h] BYREF
  __int64 v80; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v81[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v82; // [rsp+ACh] [rbp-5Ch]
  int v83; // [rsp+B0h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v87; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-30h]
  __int64 v89; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v90; // [rsp+E8h] [rbp-20h]
  __int64 v91; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v92; // [rsp+F8h] [rbp-10h]
  __int64 v93; // [rsp+100h] [rbp-8h] BYREF
  __int64 v94; // [rsp+108h] [rbp+0h]
  __int128 v95; // [rsp+110h] [rbp+8h]
  unsigned __int64 v96; // [rsp+120h] [rbp+18h]
  __int64 v97; // [rsp+128h] [rbp+20h]
  _DWORD v98[6]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v99; // [rsp+148h] [rbp+40h] BYREF
  __int64 v100; // [rsp+150h] [rbp+48h]
  __int64 v101; // [rsp+158h] [rbp+50h] BYREF
  __int64 v102; // [rsp+160h] [rbp+58h]
  __int64 v103; // [rsp+168h] [rbp+60h] BYREF
  __int64 v104; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v105[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v106; // [rsp+190h] [rbp+88h]
  _OWORD v107[2]; // [rsp+198h] [rbp+90h] BYREF
  EXCEPTION_RECORD v108; // [rsp+1B8h] [rbp+B0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+258h] [rbp+150h] BYREF
  EXCEPTION_RECORD v110; // [rsp+2F8h] [rbp+1F0h] BYREF
  EXCEPTION_RECORD v111; // [rsp+398h] [rbp+290h] BYREF
  EXCEPTION_RECORD v112; // [rsp+438h] [rbp+330h] BYREF
  EXCEPTION_RECORD v113; // [rsp+4D8h] [rbp+3D0h] BYREF
  EXCEPTION_RECORD v114; // [rsp+578h] [rbp+470h] BYREF
  EXCEPTION_RECORD v115; // [rsp+618h] [rbp+510h] BYREF
  EXCEPTION_RECORD v116; // [rsp+6B8h] [rbp+5B0h] BYREF
  EXCEPTION_RECORD v117; // [rsp+758h] [rbp+650h] BYREF
  _DWORD v118[5]; // [rsp+7F8h] [rbp+6F0h] BYREF
  __int64 v119; // [rsp+80Ch] [rbp+704h]
  int v120; // [rsp+814h] [rbp+70Ch]
  __int64 v121; // [rsp+818h] [rbp+710h]
  int v122; // [rsp+820h] [rbp+718h]
  __int128 v123; // [rsp+828h] [rbp+720h] BYREF
  _BYTE v124[20]; // [rsp+838h] [rbp+730h]
  __int64 v125; // [rsp+84Ch] [rbp+744h]
  __int128 v126; // [rsp+858h] [rbp+750h] BYREF
  __int128 v127; // [rsp+868h] [rbp+760h]
  void *retaddr; // [rsp+8E0h] [rbp+7D8h]

  v77 = a2;
  sub_1800D97D0((__int64)a1, &v101);
  sub_1800C589C(v101, &v86);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a2 + 32LL))(
    *a2,
    &v76);
  v6 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v71 = v7;
  v74[0] = (v7 != 0) + 1LL;
  *(_BYTE *)(*a3 + 1) = v7;
  v75 = 0LL;
  v8 = sub_1800D8A34(&v76, &v75);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18001145C(v75, "CameraBackBuffer");
  v69 = 0;
  v70 = 0;
  v10 = (__int64 *)(*a3 + 8);
  v11 = v86;
  if ( *v10 != v75 )
  {
    sub_1800CCAE4(v10, &v75);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*a3 + 8) + 80LL))(*(_QWORD *)(*a3 + 8), &v126);
    v12 = v127;
    v81[1] = (v7 != 0) + 4;
    v81[2] = 0;
    v83 = 1;
    v82 = 0;
    v81[0] = v127;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v11 + 72LL);
    v14 = *a3;
    sub_18000E72C((__int64 *)(*a3 + 48));
    v15 = v13(v11, *(_QWORD *)(*a3 + 8), v81, v14 + 48);
    v16 = v15;
    if ( v15 < 0 )
    {
      memset(&v110, 0, sizeof(v110));
      v110.ExceptionCode = -532265403;
      v110.ExceptionAddress = retaddr;
      v110.NumberParameters = 1;
      v110.ExceptionInformation[0] = v16;
      RaiseFailFastException(&v110, 0LL, 0);
    }
    if ( v7 )
    {
      v82 = 1;
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v11 + 72LL);
      v18 = *a3;
      sub_18000E72C((__int64 *)(*a3 + 96));
      v19 = v17(v11, *(_QWORD *)(*a3 + 8), v81, v18 + 96);
      v20 = v19;
      if ( v19 < 0 )
      {
        memset(&v111, 0, sizeof(v111));
        v111.ExceptionCode = -532265403;
        v111.ExceptionAddress = retaddr;
        v111.NumberParameters = 1;
        v111.ExceptionInformation[0] = v20;
        RaiseFailFastException(&v111, 0LL, 0);
      }
    }
    else
    {
      sub_1800D5B0C((__int64 *)(*a3 + 96), (__int64 *)(*a3 + 48));
    }
    *(_QWORD *)&v95 = v12 | 0x100000000LL;
    DWORD2(v95) = LODWORD(v6);
    HIDWORD(v95) = LODWORD(v6);
    LODWORD(v96) = 3;
    v97 = 0LL;
    v107[0] = v95;
    v107[1] = v96;
    v73 = 0LL;
    v21 = sub_1800D8A90(&v76, &v73);
    v22 = v21;
    if ( v21 < 0 )
    {
      memset(&v112, 0, sizeof(v112));
      v112.ExceptionCode = -532265403;
      v112.ExceptionAddress = retaddr;
      v112.NumberParameters = 1;
      v112.ExceptionInformation[0] = v22;
      RaiseFailFastException(&v112, 0LL, 0);
    }
    sub_1800C9D74(v73, "DxgiBackBuffer");
    v72 = 0LL;
    v23 = v73;
    v24 = *(__int64 (__fastcall **)(__int64, bool, __int64 *))(*(_QWORD *)v73 + 96LL);
    sub_18000E72C(&v72);
    v25 = v24(v23, v7 != 0, &v72);
    v26 = v25;
    if ( v25 < 0 )
    {
      memset(&v108, 0, sizeof(v108));
      v108.ExceptionCode = -532265403;
      v108.ExceptionAddress = retaddr;
      v108.NumberParameters = 1;
      v108.ExceptionInformation[0] = v26;
      RaiseFailFastException(&v108, 0LL, 0);
    }
    sub_1800C9D74(v72, "DxgiSurface");
    v27 = a1[66];
    v28 = *(__int64 (__fastcall **)(__int64, __int64, _OWORD *, __int64))(*(_QWORD *)v27 + 496LL);
    v29 = *a3;
    sub_18000E72C((__int64 *)(*a3 + 32));
    v30 = v28(v27, v72, v107, v29 + 32);
    v31 = v30;
    if ( v30 < 0 )
    {
      memset(&v114, 0, sizeof(v114));
      v114.ExceptionCode = -532265403;
      v114.ExceptionAddress = retaddr;
      v114.NumberParameters = 1;
      v114.ExceptionInformation[0] = v31;
      RaiseFailFastException(&v114, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[66] + 592LL))(a1[66], *(_QWORD *)(*a3 + 32));
    *(_QWORD *)(*a3 + 40) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*v77 + 24LL))(
                                         *v77,
                                         &v78);
    v123 = v126;
    *(_OWORD *)v124 = v127;
    *(_QWORD *)&v124[12] = 3LL;
    v125 = 0x20000LL;
    HIDWORD(v123) = 1;
    sub_18000E72C((__int64 *)(*a3 + 16));
    v32 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v11 + 40LL);
    v33 = *a3;
    sub_18000E72C((__int64 *)(*a3 + 16));
    v34 = v32(v11, &v123, 0LL, v33 + 16);
    v35 = v34;
    if ( v34 < 0 )
    {
      memset(&v115, 0, sizeof(v115));
      v115.ExceptionCode = -532265403;
      v115.ExceptionAddress = retaddr;
      v115.NumberParameters = 1;
      v115.ExceptionInformation[0] = v35;
      RaiseFailFastException(&v115, 0LL, 0);
    }
    sub_18001145C(*(_QWORD *)(*a3 + 16), "BackBufferStaging");
    sub_18000E72C((__int64 *)(*a3 + 56));
    sub_18000E72C((__int64 *)(*a3 + 104));
    v69 = 1;
    sub_18000E72C(&v72);
    sub_18000E72C(&v73);
  }
  v36 = *a3;
  if ( sub_1800CC258((_QWORD *)(*a3 + 56)) || sub_1800CC258((_QWORD *)(v36 + 104)) )
  {
    v37 = *(_DWORD *)(v36 + 44);
    v118[0] = *(_DWORD *)(v36 + 40);
    v118[1] = v37;
    v118[2] = 1;
    v118[3] = (v7 != 0) + 1;
    v118[4] = 55;
    v119 = 1LL;
    v120 = 0;
    v121 = 64LL;
    v122 = 0;
    v38 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64))(*(_QWORD *)v11 + 40LL);
    sub_18000E72C((__int64 *)(v36 + 24));
    v39 = v38(v11, v118, 0LL, v36 + 24);
    v40 = v39;
    if ( v39 < 0 )
    {
      memset(&v116, 0, sizeof(v116));
      v116.ExceptionCode = -532265403;
      v116.ExceptionAddress = retaddr;
      v116.NumberParameters = 1;
      v116.ExceptionInformation[0] = v40;
      RaiseFailFastException(&v116, 0LL, 0);
    }
    sub_18001145C(*(_QWORD *)(*a3 + 24), "BackBuffer_DepthStencilTexture");
    sub_1800D58A0(v98, (v7 != 0) + 3);
    v98[5] = 1;
    v41 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v11 + 80LL);
    v42 = *a3;
    sub_18000E72C((__int64 *)(*a3 + 56));
    v43 = v41(v11, *(_QWORD *)(*a3 + 24), v98, v42 + 56);
    v44 = v43;
    if ( v43 < 0 )
    {
      memset(&v117, 0, sizeof(v117));
      v117.ExceptionCode = -532265403;
      v117.ExceptionAddress = retaddr;
      v117.NumberParameters = 1;
      v117.ExceptionInformation[0] = v44;
      RaiseFailFastException(&v117, 0LL, 0);
    }
    sub_18001145C(*(_QWORD *)(*a3 + 56), "BackBuffer_DepthStencilView_LeftEye");
    if ( v7 )
    {
      v98[4] = 1;
      v45 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v11 + 80LL);
      v46 = *a3;
      sub_18000E72C((__int64 *)(*a3 + 104));
      v47 = v45(v11, *(_QWORD *)(*a3 + 24), v98, v46 + 104);
      v48 = v47;
      if ( v47 < 0 )
      {
        memset(&v113, 0, sizeof(v113));
        v113.ExceptionCode = -532265403;
        v113.ExceptionAddress = retaddr;
        v113.NumberParameters = 1;
        v113.ExceptionInformation[0] = v48;
        RaiseFailFastException(&v113, 0LL, 0);
      }
      sub_18001145C(*(_QWORD *)(*a3 + 104), "BackBuffer_DepthStencilView_RightEye");
    }
    else
    {
      sub_1800D5B0C((__int64 *)(*a3 + 104), (__int64 *)(*a3 + 56));
    }
    v70 = 1;
  }
  v49 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v105);
  sub_180011C50(v49, &v99);
  if ( v106 )
    sub_180010574(v106);
  v50 = v99;
  v51 = sub_180026618(v99);
  v52 = v51;
  v85 = v51;
  if ( v69 )
  {
    v53 = 0;
    v54 = 0LL;
    v55 = v74[0];
    v56 = v51;
    do
    {
      sub_18001071C(v50, &v91);
      v78 = (_QWORD *)_RTDynamicCast(
                        v91,
                        0LL,
                        &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                        1);
      v57 = *a3;
      LODWORD(v73) = *(_DWORD *)(*a3 + 44);
      LODWORD(v72) = *(_DWORD *)(v57 + 40);
      v79 = *(_QWORD *)(v57 + 16);
      sub_180011520(&v79);
      v80 = *(_QWORD *)(*a3 + 8);
      sub_180011520(&v80);
      v58 = *(_QWORD *)(v54 + *a3 + 48);
      v84 = v58;
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
      sub_1800CB76C(v78, &v84, &v80, &v79, v72, v73);
      sub_18001085C(v56, &v89);
      sub_180028284(v89, &v91);
      sub_1800124F8((__int64 *)(*a3 + 64 + 48LL * v53), &v89);
      if ( v90 )
        sub_180010530(v90);
      if ( v92 )
        sub_180010530(v92);
      ++v53;
      v54 += 48LL;
      --v55;
    }
    while ( v55 );
    if ( !v71 )
      sub_1800124F8((__int64 *)(*a3 + 64), (_QWORD *)(*a3 + 112));
    (*(void (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
    LOBYTE(v59) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 360LL))(a1, v59);
    v52 = v85;
  }
  if ( v70 )
  {
    v60 = 0;
    v61 = 0LL;
    v62 = v74[0];
    do
    {
      sub_18006EE5C(v50, &v93);
      v78 = (_QWORD *)_RTDynamicCast(
                        v93,
                        0LL,
                        &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                        1);
      v74[0] = *(_QWORD *)(*a3 + 24);
      sub_180011520(v74);
      v63 = *(_QWORD **)(v61 + *a3 + 56);
      v77 = v63;
      if ( v63 )
        (*(void (__fastcall **)(_QWORD *))(*v63 + 8LL))(v63);
      sub_1800D5D0C(v78, (__int64 *)&v77, v74);
      sub_180024944(v52, &v87);
      v64 = sub_18001246C(&v103, &v93);
      sub_18006F930(v65, v64, 5);
      v66 = sub_18001246C(&v104, &v87);
      sub_18002CA44((__int64)a1, v66);
      sub_1800124F8((__int64 *)(*a3 + 80 + 48LL * v60), &v87);
      if ( v88 )
        sub_180010530(v88);
      if ( v94 )
        sub_180010530(v94);
      ++v60;
      v61 += 48LL;
      --v62;
    }
    while ( v62 );
    if ( !v71 )
      sub_1800124F8((__int64 *)(*a3 + 80), (_QWORD *)(*a3 + 128));
  }
  if ( v100 )
    sub_180010530(v100);
  sub_18000E72C(&v75);
  v67 = v76;
  if ( v76 )
  {
    v76 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v67)[2])(v67);
  }
  result = sub_18000E72C(&v86);
  if ( v102 )
    return sub_180010530(v102);
  return result;
}
