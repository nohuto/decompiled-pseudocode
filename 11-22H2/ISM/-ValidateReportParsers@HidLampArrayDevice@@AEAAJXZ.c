/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x180101E34
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x180100D1C (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@JPEBGGGG@Z @ 0x180064620 (-LogLampArrayHidReportFailure@LampArrayTelemetry@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@@details@wil@@QEAA_NXZ @ 0x180064BF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry@@.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180064C2C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_J@Z @ 0x180064C94 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@_J@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800D4488 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800D44AC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800D44AC.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800D537C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x1800D7788 (-c_str@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800F3600 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800FED4C (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800FF0CC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x1800FF1D0 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x1800FF23C (--1-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  int v3; // edi
  char v4; // al
  unsigned __int8 v5; // si
  unsigned __int64 v6; // r14
  char IsEnabled; // al
  char *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // r9
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int8 *v21; // rcx
  __int64 v22; // r9
  _DWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  _QWORD *v27; // rsi
  _QWORD *v28; // rdi
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  void *v32; // rax
  _QWORD *v33; // rax
  void *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  const char *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rsi
  _QWORD *v43; // rdi
  _QWORD *v44; // rbx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  void *v47; // rax
  _QWORD *v48; // rax
  void *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  _QWORD *v55; // rsi
  _QWORD *v56; // rdi
  _QWORD *v57; // rbx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  void *v60; // rax
  _QWORD *v61; // rax
  void *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  _QWORD *v68; // rsi
  _QWORD *v69; // rdi
  _QWORD *v70; // rbx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  void *v73; // rax
  _QWORD *v74; // rax
  void *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rcx
  _QWORD *v81; // r15
  _QWORD *v82; // r14
  _QWORD *v83; // rsi
  _QWORD *v84; // rdi
  _QWORD *v85; // rbx
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  void *v88; // rax
  _QWORD *v89; // rax
  void *v90; // rax
  _QWORD *v91; // rax
  void *v92; // rax
  _QWORD *v93; // rax
  void *v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rcx
  __int64 v100; // r10
  _QWORD *v101; // rax
  const char **v102; // rdx
  __int64 v103; // r9
  _DWORD *v104; // rcx
  __int64 v105; // r9
  __int64 v106; // r9
  __int64 v107; // r9
  char *v109; // [rsp+30h] [rbp-D8h]
  __int64 v110; // [rsp+38h] [rbp-D0h]
  BOOL v111; // [rsp+38h] [rbp-D0h]
  BOOL v112; // [rsp+40h] [rbp-C8h]
  BOOL v113; // [rsp+48h] [rbp-C0h]
  int v114; // [rsp+48h] [rbp-C0h]
  BOOL v115; // [rsp+50h] [rbp-B8h]
  BOOL v116; // [rsp+58h] [rbp-B0h]
  char *v117; // [rsp+68h] [rbp-A0h]
  __int64 v118; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 v119[16]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v120[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v121[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v122[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v123[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v124[4]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v125[4]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v126[4]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v127[4]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v128[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v129[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v130[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v131[4]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v132[4]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v133[4]; // [rsp+248h] [rbp+140h] BYREF
  _QWORD v134[4]; // [rsp+268h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  v2 = *((_QWORD *)this + 72);
  v3 = 0;
  if ( !v2
    || !*((_QWORD *)this + 73)
    || !*((_QWORD *)this + 74)
    || !*((_QWORD *)this + 75)
    || !*((_QWORD *)this + 76)
    || (v4 = 0, !*((_QWORD *)this + 77)) )
  {
    v4 = 1;
  }
  if ( !v4 )
  {
    v117 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(6uLL);
    *(_DWORD *)v117 = 0;
    *((_WORD *)v117 + 2) = 0;
    v118 = 0LL;
    std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v118);
    *v117 = *(_BYTE *)(*((_QWORD *)this + 72) + 16LL);
    v117[1] = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
    v117[2] = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
    v117[3] = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
    v117[4] = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
    v117[5] = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
    std::_Sort_unchecked<unsigned char *,std::less<void>>((__int64)v117, (unsigned __int8 *)v117 + 6, 6LL, 0);
    v5 = 0;
    v6 = 0LL;
    if ( v117 + 6 != v117 )
    {
      do
      {
        IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl);
        v8 = v117;
        if ( IsEnabled )
        {
          if ( v5 != v117[v6] )
            goto LABEL_15;
          v9 = std::to_string(v121, v5);
          v10 = std::string::string(v120, (__int64)"One or more LampArray HID reports have duplicate IDs: ");
          std::operator+<char>((__int64)v119, (__int64)v10, (__int64)v9);
          std::string::~string((__int64)v120);
          std::string::~string((__int64)v121);
          LampArrayTelemetry::GetInstance(v12, v11, v13);
          LampArrayTelemetry::LogLampArrayHidReportFailure(
            v14,
            v119,
            2147942487LL,
            (const WCHAR *)this + 12,
            *((_WORD *)this + 269),
            *((_WORD *)this + 270),
            *((_WORD *)this + 271));
          std::string::~string((__int64)v119);
          v8 = v117;
        }
        if ( v5 == v8[v6] )
        {
          LODWORD(v109) = v5;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x39E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x80070057LL,
            (int)"Reports have duplicate Id:%d",
            v109);
          goto LABEL_55;
        }
LABEL_15:
        v5 = v8[v6++];
      }
      while ( v6 < v117 + 6 - v8 );
    }
    v15 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_LampArrayHidTelemetry>::GetImpl'::`2'::impl);
    v16 = *((_QWORD *)this + 72);
    v17 = *(int *)(v16 + 56);
    v18 = v15 == 0;
    v19 = *((_QWORD *)this + 74);
    if ( !v18 )
    {
      if ( v17 != *(_QWORD *)(v19 + 56)
        || v17 != *(_QWORD *)(*((_QWORD *)this + 75) + 56LL)
        || (_DWORD)v17 != *(_DWORD *)(*((_QWORD *)this + 76) + 192LL)
        || (v20 = (_QWORD *)*((_QWORD *)this + 77), v17 != v20[16]) )
      {
        v81 = std::to_string(v134, *(_QWORD *)(*((_QWORD *)this + 77) + 128LL));
        v82 = std::to_string(v133, *(_DWORD *)(*((_QWORD *)this + 76) + 192LL));
        v83 = std::to_string(v132, *(_QWORD *)(*((_QWORD *)this + 75) + 56LL));
        v84 = std::to_string(v131, *(_QWORD *)(*((_QWORD *)this + 74) + 56LL));
        v85 = std::to_string(v130, *(_QWORD *)(*((_QWORD *)this + 72) + 56LL));
        v86 = std::string::string(v129, (__int64)"LampCount logical max is not the same across reports.");
        v87 = std::operator+<char>(v120, v86, (__int64)" LampArrayAttributes:");
        v88 = (void *)std::operator+<char>((__int64)v121, (__int64)v87, (__int64)v85);
        v89 = std::operator+<char>(v122, v88, (__int64)", LampAttributesRequest:");
        v90 = (void *)std::operator+<char>((__int64)v123, (__int64)v89, (__int64)v84);
        v91 = std::operator+<char>(v124, v90, (__int64)", LampAttributesResponse:");
        v92 = (void *)std::operator+<char>((__int64)v125, (__int64)v91, (__int64)v83);
        v93 = std::operator+<char>(v126, v92, (__int64)", LampMultiUpdate:");
        v94 = (void *)std::operator+<char>((__int64)v127, (__int64)v93, (__int64)v82);
        v95 = std::operator+<char>(v128, v94, (__int64)", LampRangeUpdate:");
        std::operator+<char>((__int64)v119, (__int64)v95, (__int64)v81);
        std::string::~string((__int64)v128);
        std::string::~string((__int64)v127);
        std::string::~string((__int64)v126);
        std::string::~string((__int64)v125);
        std::string::~string((__int64)v124);
        std::string::~string((__int64)v123);
        std::string::~string((__int64)v122);
        std::string::~string((__int64)v121);
        std::string::~string((__int64)v120);
        std::string::~string((__int64)v129);
        std::string::~string((__int64)v130);
        std::string::~string((__int64)v131);
        std::string::~string((__int64)v132);
        std::string::~string((__int64)v133);
        std::string::~string((__int64)v134);
        LampArrayTelemetry::GetInstance(v97, v96, v98);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v99,
          v119,
          2147942487LL,
          (const WCHAR *)this + 12,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v40 = (const char *)std::string::c_str(v119);
        v41 = 958LL;
        goto LABEL_30;
      }
      v21 = (unsigned __int8 *)*((_QWORD *)this + 75);
      v22 = v21[632];
      v23 = (_DWORD *)*((_QWORD *)this + 76);
      if ( (_DWORD)v22 != v23[56] || v22 != v20[34] )
      {
        v68 = std::to_string(v120, *(_QWORD *)(*((_QWORD *)this + 77) + 272LL));
        v69 = std::to_string(v121, *(_DWORD *)(*((_QWORD *)this + 76) + 224LL));
        v70 = std::to_string(v122, *(_QWORD *)(*((_QWORD *)this + 75) + 632LL));
        v71 = std::string::string(v123, (__int64)"RedChannel logical max is not the same across reports.");
        v72 = std::operator+<char>(v124, v71, (__int64)" LampAttributesResponse:");
        v73 = (void *)std::operator+<char>((__int64)v125, (__int64)v72, (__int64)v70);
        v74 = std::operator+<char>(v126, v73, (__int64)", LampMultiUpdate:");
        v75 = (void *)std::operator+<char>((__int64)v127, (__int64)v74, (__int64)v69);
        v76 = std::operator+<char>(v128, v75, (__int64)", LampRangeUpdate:");
        std::operator+<char>((__int64)v119, (__int64)v76, (__int64)v68);
        std::string::~string((__int64)v128);
        std::string::~string((__int64)v127);
        std::string::~string((__int64)v126);
        std::string::~string((__int64)v125);
        std::string::~string((__int64)v124);
        std::string::~string((__int64)v123);
        std::string::~string((__int64)v122);
        std::string::~string((__int64)v121);
        std::string::~string((__int64)v120);
        LampArrayTelemetry::GetInstance(v78, v77, v79);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v80,
          v119,
          2147942487LL,
          (const WCHAR *)this + 12,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v40 = (const char *)std::string::c_str(v119);
        v41 = 981LL;
        goto LABEL_30;
      }
      v24 = v21[704];
      if ( (_DWORD)v24 != v23[64] || v24 != v20[43] )
      {
        v55 = std::to_string(v120, v20[43]);
        v56 = std::to_string(v121, *(_DWORD *)(*((_QWORD *)this + 76) + 256LL));
        v57 = std::to_string(v122, *(_QWORD *)(*((_QWORD *)this + 75) + 704LL));
        v58 = std::string::string(v123, (__int64)"GreenChannel logical max is not the same across reports.");
        v59 = std::operator+<char>(v124, v58, (__int64)" LampAttributesResponse:");
        v60 = (void *)std::operator+<char>((__int64)v125, (__int64)v59, (__int64)v57);
        v61 = std::operator+<char>(v126, v60, (__int64)", LampMultiUpdate:");
        v62 = (void *)std::operator+<char>((__int64)v127, (__int64)v61, (__int64)v56);
        v63 = std::operator+<char>(v128, v62, (__int64)", LampRangeUpdate:");
        std::operator+<char>((__int64)v119, (__int64)v63, (__int64)v55);
        std::string::~string((__int64)v128);
        std::string::~string((__int64)v127);
        std::string::~string((__int64)v126);
        std::string::~string((__int64)v125);
        std::string::~string((__int64)v124);
        std::string::~string((__int64)v123);
        std::string::~string((__int64)v122);
        std::string::~string((__int64)v121);
        std::string::~string((__int64)v120);
        LampArrayTelemetry::GetInstance(v65, v64, v66);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v67,
          v119,
          2147942487LL,
          (const WCHAR *)this + 12,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v40 = (const char *)std::string::c_str(v119);
        v41 = 1004LL;
        goto LABEL_30;
      }
      v25 = v21[776];
      if ( (_DWORD)v25 != v23[72] || v25 != v20[52] )
      {
        v42 = std::to_string(v120, v20[52]);
        v43 = std::to_string(v121, *(_DWORD *)(*((_QWORD *)this + 76) + 288LL));
        v44 = std::to_string(v122, *(_QWORD *)(*((_QWORD *)this + 75) + 776LL));
        v45 = std::string::string(v123, (__int64)"BlueChannel logical max is not the same across reports.");
        v46 = std::operator+<char>(v124, v45, (__int64)" LampAttributesResponse:");
        v47 = (void *)std::operator+<char>((__int64)v125, (__int64)v46, (__int64)v44);
        v48 = std::operator+<char>(v126, v47, (__int64)", LampMultiUpdate:");
        v49 = (void *)std::operator+<char>((__int64)v127, (__int64)v48, (__int64)v43);
        v50 = std::operator+<char>(v128, v49, (__int64)", LampRangeUpdate:");
        std::operator+<char>((__int64)v119, (__int64)v50, (__int64)v42);
        std::string::~string((__int64)v128);
        std::string::~string((__int64)v127);
        std::string::~string((__int64)v126);
        std::string::~string((__int64)v125);
        std::string::~string((__int64)v124);
        std::string::~string((__int64)v123);
        std::string::~string((__int64)v122);
        std::string::~string((__int64)v121);
        std::string::~string((__int64)v120);
        LampArrayTelemetry::GetInstance(v52, v51, v53);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v54,
          v119,
          2147942487LL,
          (const WCHAR *)this + 12,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v40 = (const char *)std::string::c_str(v119);
        v41 = 1027LL;
        goto LABEL_30;
      }
      v26 = v21[848];
      if ( (_DWORD)v26 != v23[80] || v26 != v20[61] )
      {
        v27 = std::to_string(v128, v20[61]);
        v28 = std::to_string(v127, *(_DWORD *)(*((_QWORD *)this + 76) + 320LL));
        v29 = std::to_string(v126, *(_QWORD *)(*((_QWORD *)this + 75) + 848LL));
        v30 = std::string::string(v125, (__int64)"GainChannel logical max is not the same across reports.");
        v31 = std::operator+<char>(v124, v30, (__int64)" LampAttributesResponse:");
        v32 = (void *)std::operator+<char>((__int64)v123, (__int64)v31, (__int64)v29);
        v33 = std::operator+<char>(v122, v32, (__int64)", LampMultiUpdate:");
        v34 = (void *)std::operator+<char>((__int64)v120, (__int64)v33, (__int64)v28);
        v35 = std::operator+<char>(v121, v34, (__int64)", LampRangeUpdate:");
        std::operator+<char>((__int64)v119, (__int64)v35, (__int64)v27);
        std::string::~string((__int64)v121);
        std::string::~string((__int64)v120);
        std::string::~string((__int64)v122);
        std::string::~string((__int64)v123);
        std::string::~string((__int64)v124);
        std::string::~string((__int64)v125);
        std::string::~string((__int64)v126);
        std::string::~string((__int64)v127);
        std::string::~string((__int64)v128);
        LampArrayTelemetry::GetInstance(v37, v36, v38);
        LampArrayTelemetry::LogLampArrayHidReportFailure(
          v39,
          v119,
          2147942487LL,
          (const WCHAR *)this + 12,
          *((_WORD *)this + 269),
          *((_WORD *)this + 270),
          *((_WORD *)this + 271));
        v40 = (const char *)std::string::c_str(v119);
        v41 = 1050LL;
LABEL_30:
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)v41,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)0x80070057LL,
          (int)"%hs",
          v40);
        std::string::~string((__int64)v119);
        goto LABEL_55;
      }
LABEL_48:
      std::vector<unsigned char>::~vector<unsigned char>();
      return 0LL;
    }
    v100 = *(_QWORD *)(v19 + 56);
    if ( v17 == v100
      && v17 == *(_QWORD *)(*((_QWORD *)this + 75) + 56LL)
      && (_DWORD)v17 == *(_DWORD *)(*((_QWORD *)this + 76) + 192LL)
      && (v101 = (_QWORD *)*((_QWORD *)this + 77), v17 == v101[16]) )
    {
      v102 = (const char **)*((_QWORD *)this + 75);
      v103 = *((unsigned __int8 *)v102 + 632);
      v104 = (_DWORD *)*((_QWORD *)this + 76);
      if ( (_DWORD)v103 == v104[56] && v103 == v101[34] )
      {
        v105 = *((unsigned __int8 *)v102 + 704);
        if ( (_DWORD)v105 == v104[64] && v105 == v101[43] )
        {
          v106 = *((unsigned __int8 *)v102 + 776);
          if ( (_DWORD)v106 == v104[72] && v106 == v101[52] )
          {
            v107 = *((unsigned __int8 *)v102 + 848);
            if ( (_DWORD)v107 == v104[80] && v107 == v101[61] )
              goto LABEL_48;
            LODWORD(v110) = v104[80];
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x44E,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)0x80070057LL,
              (int)"GainChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
              v102[106],
              v110,
              v101[61]);
          }
          else
          {
            LODWORD(v110) = v104[72];
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x445,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
              (const char *)0x80070057LL,
              (int)"BlueChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
              v102[97],
              v110,
              v101[52]);
          }
        }
        else
        {
          LODWORD(v110) = v104[64];
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x43C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x80070057LL,
            (int)"GreenChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
            v102[88],
            v110,
            v101[43]);
        }
      }
      else
      {
        LODWORD(v110) = v104[56];
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x433,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)0x80070057LL,
          (int)"RedChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
          v102[79],
          v110,
          *(_QWORD *)(*((_QWORD *)this + 77) + 272LL));
      }
    }
    else
    {
      v114 = *(_DWORD *)(*((_QWORD *)this + 76) + 192LL);
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x42A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"LampCount is not the same across reports. LampArrayAttributes:%d, LampAttributesRequest:%d, LampAttributesR"
             "esponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
        *(const char **)(v16 + 56),
        v100,
        *(_QWORD *)(*((_QWORD *)this + 75) + 56LL),
        v114,
        *(_QWORD *)(*((_QWORD *)this + 77) + 128LL));
    }
LABEL_55:
    std::vector<unsigned char>::~vector<unsigned char>();
    return 2147942487LL;
  }
  LOBYTE(v3) = v2 == 0;
  v116 = *((_QWORD *)this + 77) == 0LL;
  v115 = *((_QWORD *)this + 76) == 0LL;
  v113 = *((_QWORD *)this + 75) == 0LL;
  v112 = *((_QWORD *)this + 74) == 0LL;
  v111 = *((_QWORD *)this + 73) == 0LL;
  LODWORD(v109) = v3;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x37E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
    (const char *)0x80070057LL,
    (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, Lam"
         "pAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
    v109,
    v111,
    v112,
    v113,
    v115,
    v116);
  return 2147942487LL;
}
