/*
 * XREFs of sub_18004B9DC @ 0x18004B9DC
 * Callers:
 *     sub_18008A4C0 @ 0x18008A4C0 (sub_18008A4C0.c)
 *     sub_18008C990 @ 0x18008C990 (sub_18008C990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180013B3C @ 0x180013B3C (sub_180013B3C.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_18004A294 @ 0x18004A294 (sub_18004A294.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_18004A3CC @ 0x18004A3CC (sub_18004A3CC.c)
 *     sub_18004A498 @ 0x18004A498 (sub_18004A498.c)
 *     sub_18004A564 @ 0x18004A564 (sub_18004A564.c)
 *     sub_18004A62C @ 0x18004A62C (sub_18004A62C.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180069D0C @ 0x180069D0C (sub_180069D0C.c)
 *     sub_18008FB1C @ 0x18008FB1C (sub_18008FB1C.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 */

// Hidden C++ exception states: #wind=36
__int64 __fastcall sub_18004B9DC(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 *v32; // rax
  __int64 *v33; // rax
  __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r8
  _DWORD v46[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v47; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v49; // [rsp+60h] [rbp-A0h]
  __int128 v50; // [rsp+68h] [rbp-98h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-78h] BYREF
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __m128i v54; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v55[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v56[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57[4]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v58[32]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v59[32]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v60[32]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v61[32]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v62[32]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v63[32]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v64[32]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v65[4]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v66[4]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v67[4]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v68[4]; // [rsp+258h] [rbp+158h] BYREF
  _QWORD v69[4]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v70[4]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v71[4]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v72[4]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v73[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v74[4]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v75[4]; // [rsp+338h] [rbp+238h] BYREF
  __int64 v76[4]; // [rsp+358h] [rbp+258h] BYREF
  __int64 v77[4]; // [rsp+378h] [rbp+278h] BYREF
  __int64 v78[4]; // [rsp+398h] [rbp+298h] BYREF
  __int64 v79[4]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v80[4]; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v81[4]; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v82[4]; // [rsp+418h] [rbp+318h] BYREF
  __int64 v83[4]; // [rsp+438h] [rbp+338h] BYREF
  __int64 v84[4]; // [rsp+458h] [rbp+358h] BYREF
  __int64 v85[4]; // [rsp+478h] [rbp+378h] BYREF
  _QWORD v86[4]; // [rsp+498h] [rbp+398h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+4B8h] [rbp+3B8h] BYREF
  _BYTE v88[64]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _BYTE v89[64]; // [rsp+530h] [rbp+430h] BYREF
  _BYTE v90[64]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v91[64]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v92[64]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _BYTE v93[64]; // [rsp+630h] [rbp+530h] BYREF
  _BYTE v94[64]; // [rsp+670h] [rbp+570h] BYREF
  _BYTE v95[64]; // [rsp+6B0h] [rbp+5B0h] BYREF
  _BYTE v96[64]; // [rsp+6F0h] [rbp+5F0h] BYREF
  _BYTE v97[64]; // [rsp+730h] [rbp+630h] BYREF
  _BYTE v98[64]; // [rsp+770h] [rbp+670h] BYREF
  _BYTE v99[64]; // [rsp+7B0h] [rbp+6B0h] BYREF
  _BYTE v100[64]; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int128 v101; // [rsp+830h] [rbp+730h]
  __int128 v102; // [rsp+840h] [rbp+740h]
  int v103; // [rsp+850h] [rbp+750h]
  float *v104; // [rsp+858h] [rbp+758h]
  __int128 v105; // [rsp+860h] [rbp+760h]
  _BYTE v106[64]; // [rsp+870h] [rbp+770h] BYREF
  _BYTE v107[64]; // [rsp+8B0h] [rbp+7B0h] BYREF
  _BYTE v108[64]; // [rsp+8F0h] [rbp+7F0h] BYREF
  _BYTE v109[64]; // [rsp+930h] [rbp+830h] BYREF
  _BYTE v110[64]; // [rsp+970h] [rbp+870h] BYREF
  _BYTE v111[64]; // [rsp+9B0h] [rbp+8B0h] BYREF
  _BYTE v112[64]; // [rsp+9F0h] [rbp+8F0h] BYREF
  _BYTE v113[64]; // [rsp+A30h] [rbp+930h] BYREF
  _BYTE v114[64]; // [rsp+A70h] [rbp+970h] BYREF
  _BYTE v115[64]; // [rsp+AB0h] [rbp+9B0h] BYREF
  _BYTE v116[64]; // [rsp+AF0h] [rbp+9F0h] BYREF
  _BYTE v117[64]; // [rsp+B30h] [rbp+A30h] BYREF
  _BYTE v118[64]; // [rsp+B70h] [rbp+A70h] BYREF
  _BYTE v119[64]; // [rsp+BB0h] [rbp+AB0h] BYREF
  _BYTE v120[64]; // [rsp+BF0h] [rbp+AF0h] BYREF
  _BYTE v121[64]; // [rsp+C30h] [rbp+B30h] BYREF

  v49 = a2;
  sub_180056524(a1, &v48, 2LL);
  v50 = xmmword_1801BD9A0;
  v3 = sub_18001875C(v55, (__int64)&qword_1801F5DB8);
  sub_18004A3CC((__int64)v88, (__int64)v3, v4, &v50);
  v51 = xmmword_1801BD900;
  v5 = sub_18001875C(v56, (__int64)&qword_1801F5CD8);
  sub_18004A3CC((__int64)v89, (__int64)v5, v6, &v51);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD9C0);
  v7 = sub_18001875C(v57, (__int64)&qword_1801F4C58);
  sub_18004A498((__int64)v90, (__int64)v7, v8, (__int128 *)si128.m128i_i8);
  v9 = sub_180013B3C(v58, (__int64)&qword_1801F4C78, &qword_1801F5E18);
  sub_18004A62C((__int64)v91, (__int64)v9);
  v10 = sub_180013B3C(v59, (__int64)&qword_1801F4C98, &qword_1801F5E18);
  sub_18004A62C((__int64)v92, (__int64)v10);
  v11 = sub_180013B3C(v60, (__int64)&qword_1801F4CB8, &qword_1801F5E18);
  sub_18004A62C((__int64)v93, (__int64)v11);
  v12 = sub_180013B3C(v61, (__int64)&qword_1801F4CD8, &qword_1801F5E18);
  sub_18004A62C((__int64)v94, (__int64)v12);
  v13 = sub_180013B3C(v62, (__int64)&qword_1801F4CF8, &qword_1801F5E18);
  sub_18004A62C((__int64)v95, (__int64)v13);
  v14 = sub_180013B3C(v63, (__int64)&qword_1801F4D18, &qword_1801F5E18);
  sub_18004A62C((__int64)v96, (__int64)v14);
  v15 = sub_180013B3C(v64, (__int64)&qword_1801F4D38, &qword_1801F5E18);
  sub_18004A62C((__int64)v97, (__int64)v15);
  v16 = sub_18001875C(v65, (__int64)&qword_1801F4D58);
  sub_18004A344((__int64)v98, (__int64)v16, 0);
  v17 = sub_18001875C(v66, (__int64)&qword_1801F4D78);
  sub_18004A344((__int64)v99, (__int64)v17, 0);
  v18 = sub_18001875C(v67, (__int64)&qword_1801F5D18);
  sub_18004A564((__int64)v100, (__int64)v18, v19, 1.0);
  v20 = sub_18001875C(v68, (__int64)&qword_1801F5DF8);
  *(_QWORD *)&v47 = v20;
  v102 = 0LL;
  v101 = *(_OWORD *)v20;
  v102 = *((_OWORD *)v20 + 1);
  v20[2] = 0LL;
  v20[3] = 15LL;
  *(_BYTE *)v20 = 0;
  v103 = 1;
  v46[0] = 0;
  v104 = 0LL;
  v105 = 0LL;
  v104 = (float *)sub_180011088(4uLL);
  *(_QWORD *)&v105 = v104;
  *((_QWORD *)&v105 + 1) = v104 + 1;
  *(_QWORD *)&v105 = sub_18004A294(v104, v21, v46);
  if ( (int)*v104 )
  {
    sub_1800113D0(
      v86,
      "Shader integer has default value is outside the currently supported range (must be exactly representable as float).");
    v44 = sub_1800113D0(
            v69,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\Inc\\NativeRenderer\\R"
            "esources\\ShaderDefinitions.h");
    sub_18003F4DC(pExceptionObject, (__int64)v44, v45, (__int64)v86, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v22 = v20[3];
  if ( v22 >= 0x10 )
    sub_180010884((char *)*v20, v22 + 1);
  v20[2] = 0LL;
  v20[3] = 15LL;
  *(_BYTE *)v20 = 0;
  v23 = sub_18001875C(v70, (__int64)&qword_1801F5D58);
  sub_18004A564((__int64)v106, (__int64)v23, v24, 0.5);
  v25 = sub_18001875C(v71, (__int64)&qword_1801F4D98);
  sub_18004A344((__int64)v107, (__int64)v25, 5);
  v53 = 0LL;
  v26 = sub_18001875C(v72, (__int64)&qword_1801F5DD8);
  sub_18004A3CC((__int64)v108, (__int64)v26, v27, &v53);
  v54 = _mm_load_si128((const __m128i *)&xmmword_1801BD9C0);
  v28 = sub_18001875C(v73, (__int64)&qword_1801F5CF8);
  sub_18004A498((__int64)v109, (__int64)v28, v29, (__int128 *)v54.m128i_i8);
  v30 = sub_18001875C(v74, (__int64)&Src);
  sub_18004A62C((__int64)v110, (__int64)v30);
  v31 = sub_18001875C(v75, (__int64)&qword_1801F5CB8);
  sub_18004A62C((__int64)v111, (__int64)v31);
  v32 = sub_18001875C(v76, (__int64)&qword_1801F5D38);
  sub_18004A62C((__int64)v112, (__int64)v32);
  v33 = sub_18001875C(v77, (__int64)&qword_1801F5D78);
  sub_18004A62C((__int64)v113, (__int64)v33);
  v34 = sub_18001875C(v78, (__int64)&qword_1801F5C78);
  sub_18004A62C((__int64)v114, (__int64)v34);
  v35 = sub_18001875C(v79, (__int64)&qword_1801F4C78);
  sub_18004A344((__int64)v115, (__int64)v35, 8);
  v36 = sub_18001875C(v80, (__int64)&qword_1801F4C98);
  sub_18004A344((__int64)v116, (__int64)v36, 8);
  v37 = sub_18001875C(v81, (__int64)&qword_1801F4CB8);
  sub_18004A344((__int64)v117, (__int64)v37, 8);
  v38 = sub_18001875C(v82, (__int64)&qword_1801F4CD8);
  sub_18004A344((__int64)v118, (__int64)v38, 8);
  v39 = sub_18001875C(v83, (__int64)&qword_1801F4D18);
  sub_18004A344((__int64)v119, (__int64)v39, 8);
  v40 = sub_18001875C(v84, (__int64)&qword_1801F4CF8);
  sub_18004A344((__int64)v120, (__int64)v40, 8);
  v41 = sub_18001875C(v85, (__int64)&qword_1801F4D38);
  sub_18004A344((__int64)v121, (__int64)v41, 8);
  sub_18008FB1C(v48, v88, 30LL, 0LL);
  sub_180090304(v48);
  v42 = *a2;
  v47 = 0LL;
  if ( *((_QWORD *)&v48 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL));
  v47 = v48;
  sub_180069D0C(v42, &v47);
  sub_18000B4C0((__int64)v88, 64LL, 30LL);
  sub_180010910((__int64)&v48);
  return sub_180010910((__int64)a2);
}
