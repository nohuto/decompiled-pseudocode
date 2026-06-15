/*
 * XREFs of ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180038870
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180039494 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ??0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x18003C994 (--0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CC64C (--1-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX0@Z@wil@@@wi.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800D0814 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800D32C8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x180159220 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ??$?0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z @ 0x1801592D0 (--$-0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801593E0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIInsp.c)
 *     wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___ @ 0x180159E68 (wil--details--lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___--_lambda_call__lambda_43b7.c)
 *     _lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator() @ 0x18015A348 (_lambda_43b71e22d5bb22f0043b8e015b635e1d_--operator().c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015CA5C (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall AtmosCheck::PerformLicenseCheckInternalLegacy(AtmosCheck *this, bool *a2)
{
  AtmosCheck *v3; // r13
  unsigned int v4; // esi
  char v5; // r15
  int *v6; // rax
  int *v7; // r14
  __int64 v8; // rbx
  AtmosCheck::EndpointSpecificSpatialTechInfo *v9; // rdi
  int v10; // eax
  const WCHAR *v11; // r8
  PVOID Reserved1; // rbx
  __int64 v13; // rcx
  HRESULT ActivationFactory; // ebx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, HSTRING, __int64 *); // rdi
  __int64 v17; // rcx
  int v18; // eax
  HANDLE v19; // rax
  _OWORD *v20; // rax
  __int64 v21; // r14
  __int128 *p_Src; // rdi
  unsigned __int64 v23; // r15
  SIZE_T v24; // rbx
  HANDLE v25; // rax
  void *v26; // rax
  _BYTE *p_hstringHeader; // rdi
  HSTRING v28; // r9
  char *v29; // rbx
  char *v30; // rsi
  signed __int64 v31; // rdi
  HSTRING_HEADER *v32; // rdx
  __int64 v33; // rbx
  unsigned __int64 j; // rcx
  unsigned __int64 v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  _QWORD *v38; // rdi
  _QWORD *v39; // rdx
  __int128 *v40; // rcx
  unsigned __int64 v41; // rdx
  HSTRING v42; // rcx
  __int64 v43; // r8
  _DWORD *v44; // rdx
  _DWORD *v45; // rcx
  __int64 v46; // r12
  struct _RTL_CRITICAL_SECTION *v47; // rbx
  HANDLE v48; // rax
  _OWORD *v49; // rax
  __int64 v50; // r14
  __int128 *v51; // rdi
  unsigned __int64 v52; // r15
  SIZE_T v53; // rbx
  HANDLE v54; // rax
  void *v55; // rax
  _BYTE *v56; // rdi
  HSTRING v57; // r9
  char *v58; // rax
  unsigned __int16 *v59; // rsi
  unsigned __int16 *v60; // rbx
  signed __int64 v61; // rdi
  HSTRING_HEADER *v62; // rdx
  __int64 v63; // rbx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rbx
  _QWORD *v69; // rdi
  _QWORD *v70; // rdx
  __int128 *v71; // rcx
  unsigned __int64 v72; // rdx
  HSTRING v73; // rcx
  char *v74; // rsi
  void *v75; // rbx
  HANDLE v76; // rax
  _QWORD *v77; // rbx
  HSTRING v78; // rcx
  char **v79; // rbx
  char *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  HANDLE ProcessHeap; // rax
  char *v85; // rcx
  unsigned int v86; // ebx
  unsigned int i; // edx
  __int64 v88; // rdi
  __int64 v89; // r8
  __int64 v90; // rbx
  __int64 (__fastcall *v91)(__int64, _QWORD, __int64 *); // rdi
  __int64 v92; // rbx
  __int64 (__fastcall *v93)(__int64, __int64 *); // rdi
  __int64 v94; // rbx
  __int64 (__fastcall *v95)(__int64, __int64 *); // rdi
  AtmosCheck *v96; // rcx
  __int64 v97; // r9
  __int64 v98; // rbx
  __int64 (__fastcall *v99)(__int64, AtmosCheck **); // rdi
  AtmosCheck *v100; // rbx
  __int64 (__fastcall *v101)(AtmosCheck *, GUID *, struct _RTL_CRITICAL_SECTION **); // rdi
  struct _RTL_CRITICAL_SECTION *v102; // rbx
  __int64 (__fastcall *v103)(struct _RTL_CRITICAL_SECTION *, _QWORD, char **); // rdi
  const unsigned __int16 (*v104)[14]; // rdx
  _QWORD *v105; // rax
  char *v106; // rbx
  __int64 (__fastcall *v107)(char *, GUID *, __int64 *); // rdi
  __int64 v108; // rbx
  __int64 (__fastcall *v109)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v110; // rax
  int (__fastcall ***v111)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v112)(_QWORD, GUID *, __int64 *); // rdi
  unsigned int v113; // r14d
  void *v114; // rbx
  __int64 v115; // rbx
  __int64 (__fastcall *v116)(__int64, _QWORD, __int64 *); // rdi
  _QWORD *v117; // rax
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  __int64 (__fastcall **v120)(); // rax
  __int64 v121; // r8
  UINT32 v122; // ebx
  const WCHAR *v123; // rax
  UINT32 v124; // ebx
  const WCHAR *v125; // rax
  int v126; // eax
  __int64 v127; // rbx
  __int64 (__fastcall *v128)(__int64, _QWORD, __int64 *); // rdi
  _QWORD *v129; // rax
  UINT32 v130; // ebx
  const WCHAR *v131; // rax
  __int64 (__fastcall **v132)(); // rax
  __int64 v133; // r8
  UINT32 v134; // ebx
  const WCHAR *v135; // rax
  UINT32 v136; // ebx
  const WCHAR *v137; // rax
  void *v138; // rdi
  HANDLE v139; // rax
  void *v140; // rdi
  HANDLE v141; // rax
  HANDLE v142; // rax
  HANDLE v143; // rax
  HANDLE v144; // rax
  HANDLE v145; // rax
  HANDLE v146; // rax
  HANDLE v147; // rax
  HANDLE v148; // rax
  HANDLE v149; // rax
  HANDLE v150; // rax
  HANDLE v151; // rax
  HANDLE v152; // rax
  HANDLE v153; // rax
  HANDLE v154; // rax
  HANDLE v155; // rax
  HANDLE v156; // rax
  HANDLE v157; // rax
  LPVOID v158; // rax
  LPVOID v159; // rcx
  unsigned int v160; // edi
  unsigned int *k; // rsi
  __int64 v162; // r14
  __int64 v163; // rdx
  HSTRING v164; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v165; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v166; // [rsp+50h] [rbp-B0h] BYREF
  int (__fastcall ***v167)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v168; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v169; // [rsp+68h] [rbp-98h] BYREF
  __int64 v170; // [rsp+70h] [rbp-90h] BYREF
  int v171; // [rsp+78h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v172; // [rsp+80h] [rbp-80h] BYREF
  AtmosCheck *v173; // [rsp+88h] [rbp-78h] BYREF
  char *v174; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v175; // [rsp+98h] [rbp-68h] BYREF
  __int64 v176; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v177; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v178; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID lpMem; // [rsp+B8h] [rbp-48h]
  int pvData; // [rsp+C0h] [rbp-40h] BYREF
  DWORD pcbData; // [rsp+C4h] [rbp-3Ch] BYREF
  HSTRING v182; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v183; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v184; // [rsp+E0h] [rbp-20h]
  char v185; // [rsp+F0h] [rbp-10h]
  __int64 v186; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v187; // [rsp+100h] [rbp+0h] BYREF
  LPVOID pv; // [rsp+108h] [rbp+8h] BYREF
  int v189; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v190; // [rsp+114h] [rbp+14h] BYREF
  HSTRING string; // [rsp+118h] [rbp+18h] BYREF
  int *v192; // [rsp+120h] [rbp+20h] BYREF
  char v193[8]; // [rsp+128h] [rbp+28h] BYREF
  __int64 (__fastcall **v194)(); // [rsp+130h] [rbp+30h] BYREF
  AtmosCheck *v195; // [rsp+138h] [rbp+38h]
  __int64 (__fastcall ***v196)(); // [rsp+198h] [rbp+98h]
  AtmosCheck *v197; // [rsp+1A0h] [rbp+A0h]
  HSTRING_HEADER v198; // [rsp+1A8h] [rbp+A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v200; // [rsp+1D8h] [rbp+D8h]
  __int128 Src; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v202; // [rsp+1F0h] [rbp+F0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+200h] [rbp+100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp+120h] BYREF
  void *v205; // [rsp+230h] [rbp+130h]
  int v206; // [rsp+238h] [rbp+138h]
  int v207; // [rsp+23Ch] [rbp+13Ch]
  const char *v208; // [rsp+240h] [rbp+140h]
  __int64 v209; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v3 = this;
  v197 = this;
  v4 = 0;
  string = 0LL;
  memset(&v198, 0, sizeof(v198));
  v187 = 0LL;
  v186 = 0LL;
  pv = 0LL;
  v182 = 0LL;
  v5 = 0;
  v178 = 0;
  *a2 = 0;
  v171 = 0;
  *(_QWORD *)&Src = &string;
  *((_QWORD *)&Src + 1) = &v182;
  *(_QWORD *)&v202 = &pv;
  *((_QWORD *)&v202 + 1) = &v178;
  v183 = Src;
  v184 = v202;
  v185 = 1;
  v6 = (int *)operator new[](0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  lpMem = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0xA8uLL);
    v8 = 7LL;
    v9 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)v7;
    do
    {
      AtmosCheck::EndpointSpecificSpatialTechInfo::EndpointSpecificSpatialTechInfo(v9);
      v9 = (AtmosCheck::EndpointSpecificSpatialTechInfo *)((char *)v9 + 24);
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v7 = 0LL;
    lpMem = 0LL;
  }
  v192 = v7;
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42A,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>(&v192);
    wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___(&v183);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v186);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v187);
    return 2147942414LL;
  }
  *(_BYTE *)v7 = 1;
  v7[1] = -2147023728;
  *((_BYTE *)v7 + 24) = 1;
  v7[7] = -2147023728;
  *((_BYTE *)v7 + 48) = 1;
  v7[13] = -2147023728;
  *((_BYTE *)v7 + 72) = 0;
  v7[19] = -2147023728;
  *((_BYTE *)v7 + 96) = 1;
  v7[25] = -2147023728;
  *((_BYTE *)v7 + 120) = 0;
  v7[31] = -2147023728;
  *((_BYTE *)v7 + 144) = 1;
  v7[37] = -2147023728;
  v10 = *((_DWORD *)v3 + 48);
  if ( v10 == 5 || (unsigned int)(v10 - 11) <= 1 )
    v5 = 1;
  v11 = L"AudioDGLicenseResult";
  if ( *((_BYTE *)v3 + 100) )
    v11 = L"AudioSrvLicenseResult";
  pcbData = 4;
  pvData = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
    v11,
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  if ( pvData < 0 )
  {
    v7[1] = pvData;
    v7[7] = pvData;
    v7[13] = pvData;
    v7[19] = pvData;
    goto LABEL_26;
  }
  if ( WindowsCreateStringReference(
         L"Windows.Internal.StateRepository.ApplicationExtension",
         0x35u,
         (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
         (HSTRING *)&hstringHeader) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  Reserved1 = hstringHeader.Reserved.Reserved1;
  v13 = v187;
  if ( v187 )
  {
    v187 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  ActivationFactory = RoGetActivationFactory(Reserved1, &GUID_b94b62a2_4012_4b7e_a395_f21cc665fd12, &v187);
  if ( ActivationFactory < 0 )
    goto LABEL_131;
  ActivationFactory = WindowsCreateStringReference(L"windows.mediaPlayback", 0x15u, &v198, &string);
  if ( ActivationFactory < 0 )
    goto LABEL_131;
  v15 = v187;
  v16 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v187 + 144LL);
  v17 = v186;
  if ( v186 )
  {
    v186 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  ActivationFactory = v16(v15, string, &v186);
  if ( ActivationFactory < 0
    || (ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v186 + 56LL))(v186, &v190),
        v171 = ActivationFactory,
        ActivationFactory < 0) )
  {
LABEL_131:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7);
    v185 = 0;
    lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator()(&v183);
    goto LABEL_121;
  }
  if ( (unsigned int)dword_1801CD2B8 > 5 )
  {
    v208 = "Retrieved media app list";
    v209 = 25LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1801CD2C0;
    UserData.Size = *(unsigned __int16 *)off_1801CD2C0;
    UserData.Reserved = 2;
    v205 = &unk_1801991C7;
    v206 = 23;
    v207 = 1;
    pcbData = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  if ( v190 )
  {
    while ( 1 )
    {
      v169 = 0LL;
      v170 = 0LL;
      v168 = 0LL;
      v167 = 0LL;
      v166 = 0LL;
      v165 = 0LL;
      pcbData = 0;
      v85 = (char *)pv;
      if ( pv )
      {
        v86 = 0;
        for ( i = v178; v86 < i; ++v86 )
        {
          v88 = 8LL * v86;
          v89 = *(_QWORD *)&v85[v88];
          if ( v89 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v89 + 16LL))(*(_QWORD *)&v85[v88]);
            *(_QWORD *)((char *)pv + v88) = 0LL;
            v85 = (char *)pv;
            i = v178;
          }
        }
        CoTaskMemFree(v85);
        pv = 0LL;
      }
      v178 = 0;
      v90 = v186;
      v91 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v186 + 48LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      ActivationFactory = v91(v90, v4, &v169);
      if ( ActivationFactory < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        if ( v7 )
        {
          v157 = GetProcessHeap();
          HeapFree(v157, 0, v7);
        }
        goto LABEL_254;
      }
      v92 = v169;
      v93 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v169 + 96LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      ActivationFactory = v93(v92, &v170);
      if ( ActivationFactory < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        if ( v7 )
        {
          v156 = GetProcessHeap();
          HeapFree(v156, 0, v7);
        }
        goto LABEL_254;
      }
      v94 = v170;
      v95 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v170 + 96LL);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      ActivationFactory = v95(v94, &v168);
      if ( ActivationFactory < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        if ( v7 )
        {
          v155 = GetProcessHeap();
          HeapFree(v155, 0, v7);
        }
        goto LABEL_254;
      }
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v168 + 176LL))(v168, &v182);
      if ( ActivationFactory < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        if ( v7 )
        {
          v154 = GetProcessHeap();
          HeapFree(v154, 0, v7);
        }
        goto LABEL_254;
      }
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v168 + 1120LL))(v168, &pcbData);
      v171 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        if ( v7 )
        {
          v153 = GetProcessHeap();
          HeapFree(v153, 0, v7);
        }
        goto LABEL_254;
      }
      if ( pcbData == 3 || v5 )
        break;
LABEL_183:
      WindowsDeleteString(v182);
      v182 = 0LL;
      if ( v7[1] >= 0 && v7[7] >= 0 && v7[13] >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( ++v4 >= v190 )
        goto LABEL_23;
    }
    v173 = 0LL;
    v172 = 0LL;
    v174 = 0LL;
    v177 = 0LL;
    v176 = 0LL;
    AtmosCheck::Trace(v96, "Checking capabilities", 0LL, v97);
    v98 = v169;
    v99 = *(__int64 (__fastcall **)(__int64, AtmosCheck **))(*(_QWORD *)v169 + 776LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
    ActivationFactory = v99(v98, &v173);
    if ( ActivationFactory < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v152 = GetProcessHeap();
        HeapFree(v152, 0, v7);
      }
      goto LABEL_254;
    }
    v100 = v173;
    v101 = **(__int64 (__fastcall ***)(AtmosCheck *, GUID *, struct _RTL_CRITICAL_SECTION **))v173;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
    ActivationFactory = v101(v100, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v172);
    if ( ActivationFactory < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v151 = GetProcessHeap();
        HeapFree(v151, 0, v7);
      }
      goto LABEL_254;
    }
    v102 = v172;
    v103 = *(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, _QWORD, char **))&v172->DebugInfo[1].Type;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
    v105 = (_QWORD *)Windows::Internal::StringReference::StringReference((HSTRING *)&EventDescriptor, v104);
    ActivationFactory = v103(v102, *v105, &v174);
    if ( ActivationFactory < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v150 = GetProcessHeap();
        HeapFree(v150, 0, v7);
      }
      goto LABEL_254;
    }
    v106 = v174;
    v107 = **(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v174;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
    ActivationFactory = v107(v106, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v177);
    if ( ActivationFactory < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v149 = GetProcessHeap();
        HeapFree(v149, 0, v7);
      }
      goto LABEL_254;
    }
    v108 = v177;
    v109 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v177 + 48LL);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
    v110 = (_QWORD *)Windows::Internal::StringReference::StringReference((HSTRING *)&EventDescriptor, L"Codec");
    ActivationFactory = v109(v108, *v110, &v167);
    if ( ActivationFactory < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v148 = GetProcessHeap();
        HeapFree(v148, 0, v7);
      }
      goto LABEL_254;
    }
    v111 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v167;
    v112 = **v167;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
    if ( v112(v111, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v176) >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v176 + 48LL))(v176, &v189);
      v171 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
        if ( v7 )
        {
          v144 = GetProcessHeap();
          HeapFree(v144, 0, v7);
        }
        goto LABEL_254;
      }
      if ( v189 == 1037 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v176 + 304LL))(
                              v176,
                              &v178,
                              &pv);
        v171 = ActivationFactory;
        if ( ActivationFactory < 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
          if ( v7 )
          {
            v143 = GetProcessHeap();
            HeapFree(v143, 0, v7);
          }
          goto LABEL_254;
        }
        v113 = 0;
        if ( v178 )
        {
          v114 = lpMem;
          while ( 1 )
          {
            v164 = 0LL;
            v175 = *((_QWORD *)pv + v113);
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v175);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
            v171 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                     &v175,
                     &v166);
            if ( v171 < 0 )
            {
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v175);
              if ( v164 )
                WindowsDeleteString(v164);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
              if ( v114 )
              {
                v142 = GetProcessHeap();
                HeapFree(v142, 0, v114);
              }
              v185 = 0;
              lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator()(&v183);
              goto LABEL_120;
            }
            v115 = v166;
            v116 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v166 + 48LL);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
            v117 = (_QWORD *)Windows::Internal::StringReference::StringReference((HSTRING *)&EventDescriptor, L"@Name");
            ActivationFactory = v116(v115, *v117, &v165);
            if ( ActivationFactory < 0 )
            {
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v175);
              if ( v164 )
                WindowsDeleteString(v164);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
              v140 = lpMem;
              if ( lpMem )
              {
                v141 = GetProcessHeap();
                HeapFree(v141, 0, v140);
              }
              goto LABEL_254;
            }
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v165 + 152LL))(v165, &v164);
            v171 = ActivationFactory;
            if ( ActivationFactory < 0 )
            {
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v175);
              if ( v164 )
                WindowsDeleteString(v164);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
              v138 = lpMem;
              if ( lpMem )
              {
                v139 = GetProcessHeap();
                HeapFree(v139, 0, v138);
              }
LABEL_254:
              v185 = 0;
              lambda_43b71e22d5bb22f0043b8e015b635e1d_::operator()(&v183);
              goto LABEL_121;
            }
            StringLen = WindowsGetStringLen(v164);
            StringRawBuffer = WindowsGetStringRawBuffer(v164, 0LL);
            if ( CompareStringOrdinal(StringRawBuffer, StringLen, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
              break;
            v122 = WindowsGetStringLen(v164);
            v123 = WindowsGetStringRawBuffer(v164, 0LL);
            if ( CompareStringOrdinal(v123, v122, L"atmosMatEncoder", -1, 1) == 2 )
            {
              v194 = off_180170E20;
              v195 = v3;
              v196 = &v194;
              v114 = lpMem;
              AtmosCheck::PerformLicenseCheckHelperLegacy(v3, v182, 1LL, v193, lpMem);
              *((_BYTE *)v3 + 320) = 1;
              *((_BYTE *)v3 + 272) = 1;
              *((_BYTE *)v3 + 368) = 1;
              *((_BYTE *)v3 + 416) = 1;
            }
            else
            {
              v124 = WindowsGetStringLen(v164);
              v125 = WindowsGetStringRawBuffer(v164, 0LL);
              v126 = CompareStringOrdinal(v125, v124, L"atmosHeadphonesEncoder", -1, 1);
              v114 = lpMem;
              if ( v126 == 2 )
              {
                v120 = off_180170DD0;
                v121 = 2LL;
                goto LABEL_165;
              }
            }
LABEL_166:
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v175);
            if ( v164 )
              WindowsDeleteString(v164);
            if ( ++v113 >= v178 )
              goto LABEL_169;
          }
          v120 = off_180170DF8;
          v114 = lpMem;
          v121 = 0LL;
LABEL_165:
          v194 = v120;
          v195 = v3;
          v196 = &v194;
          AtmosCheck::PerformLicenseCheckHelperLegacy(v3, v182, v121, v193, v114);
          goto LABEL_166;
        }
LABEL_169:
        v7 = (int *)lpMem;
      }
      goto LABEL_182;
    }
    v164 = 0LL;
    ActivationFactory = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
                          &v167,
                          &v166);
    if ( ActivationFactory < 0 )
    {
      if ( v164 )
        WindowsDeleteString(v164);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v147 = GetProcessHeap();
        HeapFree(v147, 0, v7);
      }
      goto LABEL_254;
    }
    v127 = v166;
    v128 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v166 + 48LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
    v129 = (_QWORD *)Windows::Internal::StringReference::StringReference((HSTRING *)&EventDescriptor, L"@Name");
    ActivationFactory = v128(v127, *v129, &v165);
    if ( ActivationFactory < 0 )
    {
      if ( v164 )
        WindowsDeleteString(v164);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v146 = GetProcessHeap();
        HeapFree(v146, 0, v7);
      }
      goto LABEL_254;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v165 + 152LL))(v165, &v164);
    v171 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      if ( v164 )
        WindowsDeleteString(v164);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v165);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v166);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v167);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v168);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v170);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v169);
      if ( v7 )
      {
        v145 = GetProcessHeap();
        HeapFree(v145, 0, v7);
      }
      goto LABEL_254;
    }
    v130 = WindowsGetStringLen(v164);
    v131 = WindowsGetStringRawBuffer(v164, 0LL);
    if ( CompareStringOrdinal(v131, v130, L"atmosDolbyDigitalPlusDecoder", -1, 1) == 2 )
    {
      v132 = off_180170DF8;
      v133 = 0LL;
    }
    else
    {
      v134 = WindowsGetStringLen(v164);
      v135 = WindowsGetStringRawBuffer(v164, 0LL);
      if ( CompareStringOrdinal(v135, v134, L"atmosMatEncoder", -1, 1) == 2 )
      {
        v194 = off_180170E20;
        v195 = v3;
        v196 = &v194;
        AtmosCheck::PerformLicenseCheckHelperLegacy(v3, v182, 1LL, v193, v7);
        *((_BYTE *)v3 + 320) = 1;
        *((_BYTE *)v3 + 272) = 1;
        *((_BYTE *)v3 + 368) = 1;
        *((_BYTE *)v3 + 416) = 1;
        goto LABEL_180;
      }
      v136 = WindowsGetStringLen(v164);
      v137 = WindowsGetStringRawBuffer(v164, 0LL);
      if ( CompareStringOrdinal(v137, v136, L"atmosHeadphonesEncoder", -1, 1) != 2 )
      {
LABEL_180:
        if ( v164 )
          WindowsDeleteString(v164);
LABEL_182:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v176);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v177);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v174);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v172);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v173);
        goto LABEL_183;
      }
      v132 = off_180170DD0;
      v133 = 2LL;
    }
    v194 = v132;
    v195 = v3;
    v196 = &v194;
    AtmosCheck::PerformLicenseCheckHelperLegacy(v3, v182, v133, v193, v7);
    goto LABEL_180;
  }
LABEL_23:
  v18 = v7[7];
  if ( v18 < 0 && v7[13] >= 0 )
    v7[13] = v18;
LABEL_26:
  *((_BYTE *)v7 + 1) = 1;
  *((_BYTE *)v7 + 25) = 1;
  *((_BYTE *)v7 + 49) = 1;
  *((_BYTE *)v7 + 73) = 1;
  *((_BYTE *)v7 + 97) = 1;
  *((_BYTE *)v7 + 121) = 1;
  *((_BYTE *)v7 + 145) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 56));
  v173 = (AtmosCheck *)((char *)v3 + 56);
  *(_QWORD *)&Src = 0LL;
  *(_QWORD *)&v202 = 0LL;
  *((_QWORD *)&v202 + 1) = 7LL;
  v19 = GetProcessHeap();
  v20 = HeapAlloc(v19, 0, 0x40uLL);
  *(_QWORD *)&v202 = 24LL;
  *((_QWORD *)&v202 + 1) = 31LL;
  *v20 = *(_OWORD *)L"LegacyDefaultEndpointKey";
  v20[1] = *(_OWORD *)L"faultEndpointKey";
  v20[2] = *(_OWORD *)L"pointKey";
  *((_WORD *)v20 + 24) = 0;
  *(_QWORD *)&Src = v20;
  hstringHeader.Reserved.Reserved1 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v200 = 0LL;
  v21 = v202;
  p_Src = &Src;
  if ( *((_QWORD *)&v202 + 1) >= 8uLL )
    p_Src = v20;
  if ( (unsigned __int64)v202 < 8 )
  {
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *p_Src;
    v23 = 7LL;
    goto LABEL_35;
  }
  v23 = v202 | 7;
  if ( ((unsigned __int64)v202 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v23 = 0x7FFFFFFFFFFFFFFELL;
    v24 = -2LL;
  }
  else
  {
    if ( v23 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v24 = 2 * (v23 + 1);
    if ( v24 < 0x1000 )
    {
      if ( v24 )
      {
        v25 = GetProcessHeap();
        v26 = HeapAlloc(v25, 0, v24);
      }
      else
      {
        v26 = 0LL;
      }
      goto LABEL_34;
    }
  }
  v26 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v24);
LABEL_34:
  hstringHeader.Reserved.Reserved1 = v26;
  memcpy_0(v26, p_Src, 2 * v21 + 2);
LABEL_35:
  v200 = v23;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = v21;
  p_hstringHeader = &hstringHeader;
  v28 = (HSTRING)hstringHeader.Reserved.Reserved1;
  if ( v23 < 8 )
  {
    v29 = (char *)&hstringHeader;
    v30 = (char *)&hstringHeader + 2 * v21;
  }
  else
  {
    p_hstringHeader = hstringHeader.Reserved.Reserved1;
    v29 = (char *)hstringHeader.Reserved.Reserved1;
    v30 = (char *)hstringHeader.Reserved.Reserved1 + 2 * v21;
  }
  if ( v29 != v30 )
  {
    v31 = p_hstringHeader - v29;
    do
    {
      *(_WORD *)&v29[v31] = _o_towlower(*(unsigned __int16 *)v29);
      v29 += 2;
    }
    while ( v29 != v30 );
    v23 = v200;
    v21 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[16];
    v28 = (HSTRING)hstringHeader.Reserved.Reserved1;
  }
  v32 = &hstringHeader;
  if ( v23 >= 8 )
    v32 = (HSTRING_HEADER *)v28;
  v33 = 0xCBF29CE484222325uLL;
  for ( j = 0LL; j < 2 * v21; ++j )
    v33 = 0x100000001B3LL * ((unsigned __int8)v32->Reserved.Reserved2[j] ^ (unsigned __int64)v33);
  if ( v23 >= 8 )
  {
    v35 = 2 * v23 + 2;
    v175 = v35;
    v164 = v28;
    if ( v35 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned((void **)&v164, &v175);
      v35 = v175;
      v28 = v164;
    }
    operator delete(v28, v35);
  }
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v200 = 7LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  v36 = (_QWORD *)(16 * (*((_QWORD *)v3 + 82) & v33) + *((_QWORD *)v3 + 79));
  v37 = (_QWORD *)v36[1];
  if ( v37 == *((_QWORD **)v3 + 77) )
  {
LABEL_262:
    v37 = 0LL;
  }
  else
  {
    v38 = (_QWORD *)*v36;
    while ( 1 )
    {
      v39 = v37 + 2;
      if ( v37[5] >= 8uLL )
        v39 = (_QWORD *)*v39;
      v40 = &Src;
      if ( *((_QWORD *)&v202 + 1) >= 8uLL )
        v40 = (__int128 *)Src;
      if ( !(unsigned int)_o__wcsicmp(v40, v39) )
        break;
      if ( v37 == v38 )
        goto LABEL_262;
      v37 = (_QWORD *)v37[1];
    }
  }
  if ( !v37 )
    v37 = (_QWORD *)*((_QWORD *)v3 + 77);
  if ( *((_QWORD *)&v202 + 1) >= 8uLL )
  {
    v41 = 2LL * *((_QWORD *)&v202 + 1) + 2;
    v175 = v41;
    v42 = (HSTRING)Src;
    v164 = (HSTRING)Src;
    if ( v41 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned((void **)&v164, &v175);
      v41 = v175;
      v42 = v164;
    }
    operator delete(v42, v41);
  }
  *(_QWORD *)&v202 = 0LL;
  *((_QWORD *)&v202 + 1) = 7LL;
  LOWORD(Src) = 0;
  if ( v37 == *((_QWORD **)v3 + 77) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F5,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v173);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>(&v192);
    wil::details::lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___::_lambda_call__lambda_43b71e22d5bb22f0043b8e015b635e1d___(&v183);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v186);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v187);
    return 2147549183LL;
  }
  v43 = 0LL;
  v44 = (char *)lpMem + 4;
  v174 = (char *)lpMem + 4;
  v45 = (_DWORD *)(v37[6] + 4LL);
  while ( *v45 == *v44 )
  {
    ++v43;
    v45 += 6;
    v44 += 6;
    if ( v43 >= 7 )
      goto LABEL_66;
  }
  *a2 = 1;
LABEL_66:
  v46 = 0LL;
  v47 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 56);
  do
  {
    EnterCriticalSection(v47);
    v172 = v47;
    *(_QWORD *)&Src = 0LL;
    *(_QWORD *)&v202 = 0LL;
    *((_QWORD *)&v202 + 1) = 7LL;
    v48 = GetProcessHeap();
    v49 = HeapAlloc(v48, 0, 0x40uLL);
    *(_QWORD *)&v202 = 24LL;
    *((_QWORD *)&v202 + 1) = 31LL;
    *v49 = *(_OWORD *)L"LegacyDefaultEndpointKey";
    v49[1] = *(_OWORD *)L"faultEndpointKey";
    v49[2] = *(_OWORD *)L"pointKey";
    *((_WORD *)v49 + 24) = 0;
    *(_QWORD *)&Src = v49;
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    v200 = 0LL;
    v50 = v202;
    v51 = &Src;
    if ( *((_QWORD *)&v202 + 1) >= 8uLL )
      v51 = v49;
    if ( (unsigned __int64)v202 >= 8 )
    {
      v52 = v202 | 7;
      if ( ((unsigned __int64)v202 | 7) > 0x7FFFFFFFFFFFFFFELL )
      {
        v52 = 0x7FFFFFFFFFFFFFFELL;
        v53 = -2LL;
      }
      else
      {
        if ( v52 + 1 > 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_127;
        v53 = 2 * (v52 + 1);
        if ( v53 < 0x1000 )
        {
          if ( v53 )
          {
            v54 = GetProcessHeap();
            v55 = HeapAlloc(v54, 0, v53);
          }
          else
          {
            v55 = 0LL;
          }
LABEL_75:
          hstringHeader.Reserved.Reserved1 = v55;
          memcpy_0(v55, v51, 2 * v50 + 2);
          goto LABEL_76;
        }
      }
      if ( v53 + 39 < v53 )
LABEL_127:
        std::_Throw_bad_array_new_length();
      v158 = operator new(v53 + 39);
      v159 = v158;
      if ( !v158 )
      {
        _o__invalid_parameter_noinfo_noreturn();
LABEL_276:
        WindowsDeleteString(v78);
        *(_QWORD *)v53 = 0LL;
        goto LABEL_119;
      }
      v55 = (void *)(((unsigned __int64)v158 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v55 - 1) = v159;
      goto LABEL_75;
    }
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *v51;
    v52 = 7LL;
LABEL_76:
    v200 = v52;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = v50;
    v56 = &hstringHeader;
    v57 = (HSTRING)hstringHeader.Reserved.Reserved1;
    if ( v52 >= 8 )
      v56 = hstringHeader.Reserved.Reserved1;
    v58 = (char *)&hstringHeader;
    if ( v52 >= 8 )
      v58 = (char *)hstringHeader.Reserved.Reserved1;
    v59 = (unsigned __int16 *)&v58[2 * v50];
    v60 = (unsigned __int16 *)&hstringHeader;
    if ( v52 >= 8 )
      v60 = (unsigned __int16 *)hstringHeader.Reserved.Reserved1;
    if ( v60 != v59 )
    {
      v61 = v56 - (_BYTE *)v60;
      do
      {
        *(unsigned __int16 *)((char *)v60 + v61) = _o_towlower(*v60);
        ++v60;
      }
      while ( v60 != v59 );
      v52 = v200;
      v50 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[16];
      v57 = (HSTRING)hstringHeader.Reserved.Reserved1;
    }
    v62 = &hstringHeader;
    if ( v52 >= 8 )
      v62 = (HSTRING_HEADER *)v57;
    v63 = 0xCBF29CE484222325uLL;
    v64 = 0LL;
    if ( 2 * v50 )
    {
      do
        v63 = 0x100000001B3LL * ((unsigned __int8)v62->Reserved.Reserved2[v64++] ^ (unsigned __int64)v63);
      while ( v64 < 2 * v50 );
      v3 = v197;
    }
    if ( v52 >= 8 )
    {
      v65 = 2 * v52 + 2;
      v175 = v65;
      v164 = v57;
      if ( v65 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned((void **)&v164, &v175);
        v65 = v175;
        v57 = v164;
      }
      operator delete(v57, v65);
    }
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    v200 = 7LL;
    LOWORD(hstringHeader.Reserved.Reserved1) = 0;
    v66 = 2 * (v63 & *((_QWORD *)v3 + 82));
    v67 = *((_QWORD *)v3 + 79);
    v68 = *(_QWORD **)(v67 + 16 * (v63 & *((_QWORD *)v3 + 82)) + 8);
    if ( v68 == *((_QWORD **)v3 + 77) )
    {
LABEL_273:
      v68 = 0LL;
    }
    else
    {
      v69 = *(_QWORD **)(v67 + 8 * v66);
      while ( 1 )
      {
        v70 = v68 + 2;
        if ( v68[5] >= 8uLL )
          v70 = (_QWORD *)*v70;
        v71 = &Src;
        if ( *((_QWORD *)&v202 + 1) >= 8uLL )
          v71 = (__int128 *)Src;
        if ( !(unsigned int)_o__wcsicmp(v71, v70) )
          break;
        if ( v68 == v69 )
          goto LABEL_273;
        v68 = (_QWORD *)v68[1];
      }
    }
    if ( !v68 )
      v68 = (_QWORD *)*((_QWORD *)v3 + 77);
    if ( *((_QWORD *)&v202 + 1) >= 8uLL )
    {
      v72 = 2LL * *((_QWORD *)&v202 + 1) + 2;
      v175 = v72;
      v73 = (HSTRING)Src;
      v164 = (HSTRING)Src;
      if ( v72 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned((void **)&v164, &v175);
        v72 = v175;
        v73 = v164;
      }
      operator delete(v73, v72);
    }
    *(_QWORD *)&v202 = 0LL;
    *((_QWORD *)&v202 + 1) = 7LL;
    LOWORD(Src) = 0;
    if ( v68 == *((_QWORD **)v3 + 77) )
    {
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v172);
      v47 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 56);
    }
    else
    {
      v74 = v174;
      *(_BYTE *)(v46 + v68[6]) = v174[v46 - 4];
      *(_BYTE *)(v68[6] + v46 + 1) = v74[v46 - 3];
      *(_DWORD *)(v68[6] + v46 + 4) = *(_DWORD *)&v74[v46];
      *(_DWORD *)(v68[6] + v46 + 8) = *(_DWORD *)&v74[v46 + 4];
      *(_QWORD *)(v68[6] + v46 + 16) = *(_QWORD *)&v74[v46 + 12];
      v47 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 56);
      if ( v3 != (AtmosCheck *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 56));
    }
    v46 += 24LL;
  }
  while ( v46 < 168 );
  if ( v47 )
    LeaveCriticalSection(v47);
  v75 = lpMem;
  if ( lpMem )
  {
    v76 = GetProcessHeap();
    HeapFree(v76, 0, v75);
  }
  v77 = (_QWORD *)v183;
  if ( *(_QWORD *)v183 )
  {
    WindowsDeleteString(*(HSTRING *)v183);
    *v77 = 0LL;
  }
  v53 = *((_QWORD *)&v183 + 1);
  v78 = (HSTRING)**((_QWORD **)&v183 + 1);
  if ( **((_QWORD **)&v183 + 1) )
    goto LABEL_276;
LABEL_119:
  v79 = (char **)v184;
  v80 = *(char **)v184;
  if ( *(_QWORD *)v184 )
  {
    v160 = 0;
    for ( k = (unsigned int *)*((_QWORD *)&v184 + 1); v160 < *k; ++v160 )
    {
      v162 = 8LL * v160;
      v163 = *(_QWORD *)&v80[v162];
      if ( v163 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v163 + 16LL))(*(_QWORD *)&v80[v162]);
        *(_QWORD *)&(*v79)[v162] = 0LL;
        v80 = *v79;
      }
    }
    CoTaskMemFree(v80);
  }
LABEL_120:
  ActivationFactory = v171;
LABEL_121:
  v81 = v186;
  if ( v186 )
  {
    v186 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
  }
  v82 = v187;
  if ( v187 )
  {
    v187 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
  }
  return (unsigned int)ActivationFactory;
}
