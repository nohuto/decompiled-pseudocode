/*
 * XREFs of sub_1800C5D20 @ 0x1800C5D20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800163D0 @ 0x1800163D0 (sub_1800163D0.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001F1A8 @ 0x18001F1A8 (sub_18001F1A8.c)
 *     sub_1800203CC @ 0x1800203CC (sub_1800203CC.c)
 *     sub_180024750 @ 0x180024750 (sub_180024750.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180026CF0 @ 0x180026CF0 (sub_180026CF0.c)
 *     sub_1800271B4 @ 0x1800271B4 (sub_1800271B4.c)
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18002DADC @ 0x18002DADC (sub_18002DADC.c)
 *     sub_18002DB00 @ 0x18002DB00 (sub_18002DB00.c)
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 *     sub_18003212C @ 0x18003212C (sub_18003212C.c)
 *     sub_1800435A8 @ 0x1800435A8 (sub_1800435A8.c)
 *     sub_1800596EC @ 0x1800596EC (sub_1800596EC.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_1800883E0 @ 0x1800883E0 (sub_1800883E0.c)
 *     sub_1800C2E4C @ 0x1800C2E4C (sub_1800C2E4C.c)
 *     sub_1800C2EA4 @ 0x1800C2EA4 (sub_1800C2EA4.c)
 *     sub_1800C2FAC @ 0x1800C2FAC (sub_1800C2FAC.c)
 *     sub_1800C3008 @ 0x1800C3008 (sub_1800C3008.c)
 *     sub_1800C3908 @ 0x1800C3908 (sub_1800C3908.c)
 *     sub_1800C3AE8 @ 0x1800C3AE8 (sub_1800C3AE8.c)
 *     sub_1800C412C @ 0x1800C412C (sub_1800C412C.c)
 *     sub_1800C570C @ 0x1800C570C (sub_1800C570C.c)
 *     sub_1800C5934 @ 0x1800C5934 (sub_1800C5934.c)
 *     sub_1800C71AC @ 0x1800C71AC (sub_1800C71AC.c)
 *     sub_1800DB0B0 @ 0x1800DB0B0 (sub_1800DB0B0.c)
 *     sub_1800DBA80 @ 0x1800DBA80 (sub_1800DBA80.c)
 *     sub_1800DBB30 @ 0x1800DBB30 (sub_1800DBB30.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_1800C5D20(_QWORD *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rbx
  _QWORD *v3; // r14
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // r15
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rdi
  void (__fastcall *v8)(_QWORD, void *, __int64 *); // rbx
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rdi
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, const IID *, __int64 *); // rbx
  _QWORD *v13; // r12
  __int64 *v14; // rax
  int v15; // eax
  ULONG_PTR v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  void **v21; // rax
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  ULONG_PTR v27; // rbx
  _QWORD *v28; // rax
  unsigned __int64 v29; // r13
  int v30; // r14d
  int v31; // r15d
  __int64 v32; // rdx
  void **v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  IDXGIAdapter **v36; // rax
  _DWORD *v37; // r12
  HRESULT Device; // ebx
  IDXGIAdapter **v39; // rax
  __int64 v40; // rdx
  void **v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  const char *v44; // r9
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // r14
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  _QWORD *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r9
  _QWORD *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r9
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r9
  _QWORD *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 result; // rax
  int v67; // [rsp+40h] [rbp-C8h]
  int pFeatureLevel; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v70)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v72)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp-98h] BYREF
  __int64 v73; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-88h] BYREF
  __int64 v75; // [rsp+88h] [rbp-80h] BYREF
  __int64 v76; // [rsp+90h] [rbp-78h]
  void (__fastcall ***v77)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v84[18]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v85; // [rsp+118h] [rbp+10h] BYREF
  __int64 v86; // [rsp+120h] [rbp+18h]
  __int64 v87; // [rsp+128h] [rbp+20h] BYREF
  __int64 v88; // [rsp+138h] [rbp+30h] BYREF
  __int64 v89; // [rsp+140h] [rbp+38h]
  _QWORD v90[4]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v91[4]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v92[4]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v93[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v94[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v95[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+208h] [rbp+100h] BYREF
  EXCEPTION_RECORD v97; // [rsp+2A8h] [rbp+1A0h] BYREF
  _QWORD v98[4]; // [rsp+348h] [rbp+240h] BYREF
  void *v99[4]; // [rsp+368h] [rbp+260h] BYREF
  char v100[32]; // [rsp+388h] [rbp+280h] BYREF
  char v101[32]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v102[32]; // [rsp+3C8h] [rbp+2C0h] BYREF
  void *v103[4]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _QWORD v104[4]; // [rsp+408h] [rbp+300h] BYREF
  _BYTE v105[32]; // [rsp+428h] [rbp+320h] BYREF
  _QWORD v106[4]; // [rsp+448h] [rbp+340h] BYREF
  _QWORD v107[4]; // [rsp+468h] [rbp+360h] BYREF
  _BYTE v108[32]; // [rsp+488h] [rbp+380h] BYREF
  _QWORD v109[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  _QWORD v110[4]; // [rsp+4C8h] [rbp+3C0h] BYREF
  _OWORD v111[20]; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int128 v112; // [rsp+628h] [rbp+520h]
  _QWORD v113[90]; // [rsp+638h] [rbp+530h] BYREF
  __int64 v114[76]; // [rsp+908h] [rbp+800h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+B68h] [rbp+A60h] BYREF
  __m128i si128; // [rsp+B78h] [rbp+A70h]
  int v117; // [rsp+B88h] [rbp+A80h]
  void *retaddr; // [rsp+BC0h] [rbp+AB8h]

  v72 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[37];
  v2 = v72;
  sub_180011520((__int64 *)&v72);
  v3 = a1 + 532;
  if ( v2 )
    sub_1800C2FAC(&v72, a1 + 532);
  sub_18000E72C((__int64 *)&v72);
  v4 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
  if ( *v3 )
  {
    v71 = 0LL;
    v70 = 0LL;
    v5 = (*v4)[43];
    v6 = a1 + 533;
    sub_18000E72C(a1 + 533);
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, __int64 *), _QWORD *))v5)(v4, a1 + 533);
    v7 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
    v8 = **(void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
    sub_18000E72C(&v71);
    v8(v7, &unk_1801068E0, &v71);
    v9 = v71;
    v10 = *(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v71 + 56LL);
    sub_18000E72C((__int64 *)&v70);
    v10(v9, &v70);
    sub_1800C3008(&v70, a1 + 534);
    v11 = a1[534];
    v12 = *(void (__fastcall **)(__int64, const IID *, __int64 *))(*(_QWORD *)v11 + 48LL);
    v13 = a1 + 535;
    v14 = sub_1800163D0(a1 + 535);
    v12(v11, &stru_180199840, v14);
    sub_18000E72C((__int64 *)&v70);
    sub_18000E72C(&v71);
  }
  else
  {
    v111[0] = 0LL;
    v112 = 0LL;
    v15 = sub_1800DBA80(
            (unsigned int)v111,
            (unsigned int)(*((_DWORD *)a1 + 72) - 3) <= 1,
            *((_DWORD *)a1 + 81),
            *((_DWORD *)a1 + 82),
            *((_DWORD *)a1 + 79),
            *((_DWORD *)a1 + 80),
            *((_DWORD *)a1 + 83));
    v16 = v15;
    if ( v15 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v16;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v17 = v112;
    if ( (_QWORD)v112 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v112 + 8LL))(v112);
    v78 = 0LL;
    v77 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
    *v3 = v17;
    sub_18000E72C((__int64 *)&v77);
    sub_18000E72C(&v78);
    v18 = *((_QWORD *)&v112 + 1);
    if ( *((_QWORD *)&v112 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v112 + 1) + 8LL))(*((_QWORD *)&v112 + 1));
    v6 = a1 + 533;
    v80 = 0LL;
    v79 = a1[533];
    a1[533] = v18;
    sub_18000E72C(&v79);
    sub_18000E72C(&v80);
    v19 = *(_QWORD *)&v111[0];
    if ( *(_QWORD *)&v111[0] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v111[0] + 8LL))(*(_QWORD *)&v111[0]);
    v82 = 0LL;
    v81 = a1[534];
    a1[534] = v19;
    sub_18000E72C(&v81);
    sub_18000E72C(&v82);
    v20 = *((_QWORD *)&v111[0] + 1);
    if ( *((_QWORD *)&v111[0] + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v111[0] + 1) + 8LL))(*((_QWORD *)&v111[0] + 1));
    v13 = a1 + 535;
    v74 = 0LL;
    v83 = a1[535];
    a1[535] = v20;
    sub_18000E72C(&v83);
    sub_18000E72C((__int64 *)&v74);
    sub_1800DBB30(v111);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 224LL))(a1, *((unsigned int *)a1 + 94));
    sub_1800DB0B0(v111);
  }
  if ( sub_18001070C(a1 + 532) )
    *((_DWORD *)a1 + 1062) = 0;
  if ( (a1[48] & 0xFFFFFFFD) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v13 + 64LL))(*v13, a1[49], 0LL);
  *((_DWORD *)a1 + 1072) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 296LL))(*v3);
  *((_DWORD *)a1 + 60) = sub_1800C5934((__int64)a1);
  sub_18001145C(*v6, "DefaultImmediateContext");
  sub_180024750((__int64)a1, &v85);
  sub_18001246C(&v87, &v85);
  sub_1800C412C((__int64)&v75);
  v21 = (void **)sub_180010DD0(v94, (__int64)"Default");
  v22 = v75;
  sub_180029824(v75, v21);
  v23 = *v6;
  v73 = v23;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  if ( *(_QWORD *)(v22 + 144) != v23 )
  {
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v69 = *(_QWORD *)(v22 + 144);
    *(_QWORD *)(v22 + 144) = v23;
    sub_18000E72C((__int64 *)&v69);
  }
  sub_18000E72C(&v73);
  v24 = v76;
  if ( v76 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
    v24 = v76;
    v22 = v75;
  }
  a1[34] = v22;
  v25 = a1[35];
  a1[35] = v24;
  if ( v25 )
    sub_180010530(v25);
  v26 = sub_1800C570C((__int64)a1, &v72);
  v27 = (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v26 + 64LL))(*v26, a1 + 537);
  sub_18000E72C((__int64 *)&v72);
  if ( (v27 & 0x80000000) != 0LL )
  {
    memset(&v97, 0, sizeof(v97));
    v97.ExceptionCode = -532265403;
    v97.ExceptionAddress = retaddr;
    v97.NumberParameters = 1;
    v97.ExceptionInformation[0] = v27;
    RaiseFailFastException(&v97, 0LL, 0);
  }
  v28 = sub_18001E3BC(v104, (__int64)(a1 + 537));
  sub_18001F1A8(a1 + 575, (__int64)v28);
  sub_180013348((__int64)v104);
  sub_18003212C((char *)a1 + 80, (char *)a1 + 4600);
  v29 = a1[571] >> 20;
  v74 = a1[572] >> 20;
  v69 = a1[573] >> 20;
  sub_1800C71AC(a1);
  v30 = *((_DWORD *)a1 + 1072) / 4096;
  v31 = *((_DWORD *)a1 + 1072) / 256 % 16;
  sub_1800C3908(v100, v31);
  sub_1800C3908((char *)v99, v30);
  v33 = (void **)sub_1800C2E4C(v107, v32, v99);
  v34 = sub_18002DB00(v106, v33, "_");
  v35 = sub_18002DADC((__int64)v105, (__int64)v34, (__int64)v100);
  sub_18001F1A8((_OWORD *)a1 + 9, v35);
  sub_180013348((__int64)v105);
  sub_180013348((__int64)v106);
  sub_180013348((__int64)v107);
  sub_180013348((__int64)v99);
  sub_180013348((__int64)v100);
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&xmmword_18019B8E0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18019B8D0);
  v117 = 37120;
  v36 = (IDXGIAdapter **)sub_1800C570C((__int64)a1, &v71);
  v37 = (_DWORD *)a1 + 1073;
  Device = D3D11CreateDevice(
             *v36,
             D3D_DRIVER_TYPE_UNKNOWN,
             0LL,
             0,
             pFeatureLevels,
             9u,
             7u,
             0LL,
             (D3D_FEATURE_LEVEL *)a1 + 1073,
             0LL);
  sub_18000E72C(&v71);
  if ( Device == -2147024809 )
  {
    v39 = (IDXGIAdapter **)sub_1800C570C((__int64)a1, &v70);
    Device = D3D11CreateDevice(
               *v39,
               D3D_DRIVER_TYPE_UNKNOWN,
               0LL,
               0,
               &pFeatureLevels[3],
               6u,
               7u,
               0LL,
               (D3D_FEATURE_LEVEL *)a1 + 1073,
               0LL);
    sub_18000E72C((__int64 *)&v70);
  }
  if ( Device >= 0 )
  {
    v30 = *v37 / 4096;
    v31 = *v37 / 256 % 16;
    sub_1800C3908(v102, v31);
    sub_1800C3908((char *)v103, v30);
    v41 = (void **)sub_1800C2E4C(v110, v40, v103);
    v42 = sub_18002DB00(v109, v41, "_");
    v43 = sub_18002DADC((__int64)v108, (__int64)v42, (__int64)v102);
    sub_18001F1A8((_OWORD *)a1 + 11, v43);
    sub_180013348((__int64)v108);
    sub_180013348((__int64)v109);
    sub_180013348((__int64)v110);
    sub_180013348((__int64)v103);
    sub_180013348((__int64)v102);
  }
  sub_1800C3908(v101, *((_DWORD *)a1 + 1158));
  sub_18001F1A8((_OWORD *)a1 + 13, (__int64)v101);
  sub_180013348((__int64)v101);
  sub_18002E0A8(v98, a1 + 575);
  v44 = (const char *)v98;
  if ( v98[3] >= 0x10uLL )
    v44 = (const char *)v98[0];
  pFeatureLevel = v31;
  v67 = v30;
  v45 = v69;
  v46 = v74;
  sub_18001DB68(
    &stru_1801C84C8,
    3,
    "Adapter used %s -- memory %IuMB / %IuMB / %IuMB -- feature level %d_%d -- profile level %d",
    v44,
    v29,
    v74,
    v69,
    v67,
    pFeatureLevel,
    *((_DWORD *)a1 + 1158));
  if ( (unsigned __int8)sub_1800203CC((_QWORD *)a1[74]) )
  {
    v47 = (_QWORD *)a1[74];
    v48 = sub_180017648(v95, (__int64)v98);
    sub_1800C2EA4(v47, v49, 491, v50, (__int64)"MachineSpecs_AdapterName", v48);
    v51 = (_QWORD *)a1[74];
    sub_1800C3AE8((__int64)v90, v29);
    sub_1800C2EA4(v51, v52, 492, v53, (__int64)"MachineSpecs_AdapterVideoMemory", v90);
    v54 = (_QWORD *)a1[74];
    sub_1800C3AE8((__int64)v91, v46);
    sub_1800C2EA4(v54, v55, 493, v56, (__int64)"MachineSpecs_AdapterSystemMemory", v91);
    v57 = (_QWORD *)a1[74];
    sub_1800C3AE8((__int64)v92, v45);
    sub_1800C2EA4(v57, v58, 494, v59, (__int64)"MachineSpecs_AdapterSharedMemory", v92);
    v60 = (_QWORD *)a1[74];
    sub_180027C80((__int64)v93, *((_DWORD *)a1 + 1158));
    sub_1800C2EA4(v60, v61, 495, v62, (__int64)"MachineSpecs_AdapterProfileLevel", v93);
  }
  sub_1800596EC((__int64)v113);
  v63 = sub_180026618((__int64)a1);
  v64 = sub_1800435A8(v63, &v88);
  sub_180011020(v114, v64);
  if ( v89 )
    sub_180010530(v89);
  memset(v84, 0, sizeof(v84));
  *(_QWORD *)&v84[1] = 2LL;
  v84[3] = 0;
  v84[4] = 0;
  v84[5] = 0;
  LOBYTE(v84[6]) = 0;
  memset(&v84[7], 0, 32);
  v84[15] = 65793;
  LOBYTE(v84[16]) = 1;
  v84[17] = 3;
  sub_1800883E0(v114[0], (__int64)v84, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[34] + 40LL))(a1[34], v113);
  if ( (int)sub_1800C5934((__int64)a1) < 40960 )
    sub_1800271B4(v65);
  sub_180026CF0(a1);
  sub_180059AA0(v113);
  result = sub_180011B24((__int64)v98);
  if ( v24 )
    result = sub_180010530(v24);
  if ( v86 )
    return sub_180010530(v86);
  return result;
}
