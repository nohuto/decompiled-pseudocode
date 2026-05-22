/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F410 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000EE10 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x18001FE50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180020610 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18003234C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180039474 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18004DFC0 (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18005F358 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800E7574 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x1800E7DB8 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18013F7C8 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ??$As@UIActivationConfigurationInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActivationConfigurationInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013F848 (--$As@UIActivationConfigurationInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801583BC (-GetInputSiteForContainer@@YA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV-$vector@V-$ComPtr@VInp.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801B1008 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$_Insert_or_assign@KAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1801B7878 (--$_Insert_or_assign@KAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr@UI.c)
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x1801B85A0 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x1801B8B40 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801B98FC (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  struct _InputHitTestResult *v6; // r12
  struct _InputHitTestRequest *v7; // r14
  unsigned int v9; // r15d
  struct IInputSiteHierarchyManager *v10; // rbx
  struct InputSystemServerConnection *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // edi
  __int64 v17; // rbx
  __int64 **v18; // r13
  __int64 v19; // rcx
  int v20; // ebx
  int v21; // esi
  __int64 *v22; // r13
  int v23; // ebx
  unsigned int v24; // esi
  int v25; // edx
  struct InputContext *v26; // rcx
  HANDLE v27; // r13
  _QWORD *v28; // rbx
  char *v29; // r13
  __int64 v30; // rcx
  void *v31; // rax
  void *v32; // rsi
  _QWORD **v33; // rax
  _QWORD *v34; // rsi
  unsigned int v35; // ebx
  __int64 v36; // rbx
  struct IInputSiteHierarchyManager **v38; // rax
  struct IInputSiteHierarchyManager *v39; // rcx
  int v40; // eax
  struct InputSystemServerConnection **v41; // rax
  struct InputSystemServerConnection *v42; // rcx
  int v43; // eax
  int v44; // eax
  HANDLE v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r12
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 *v53; // rbx
  HANDLE CurrentProcess; // rsi
  HANDLE v55; // rax
  const char *v56; // r9
  __int64 InitialTargetFromHitTestResult; // rax
  struct InputContext *v58; // r13
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  int dwDesiredAccess; // [rsp+20h] [rbp-E0h]
  unsigned int v68; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-B8h] BYREF
  int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-A0h] BYREF
  int v73; // [rsp+68h] [rbp-98h]
  struct InputContext *v74; // [rsp+70h] [rbp-90h]
  __int64 *v75; // [rsp+78h] [rbp-88h] BYREF
  DWMInputRouter *v76; // [rsp+80h] [rbp-80h]
  __int64 v77[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _InputHitTestRequest *v78; // [rsp+A0h] [rbp-60h]
  struct IInputTarget **v79; // [rsp+A8h] [rbp-58h]
  struct IInputBuffer *v80; // [rsp+B0h] [rbp-50h]
  int v81; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v82; // [rsp+C4h] [rbp-3Ch]
  __int128 v83; // [rsp+CCh] [rbp-34h]
  __int128 v84; // [rsp+DCh] [rbp-24h]
  __int128 v85; // [rsp+ECh] [rbp-14h]
  __int128 v86; // [rsp+FCh] [rbp-4h]
  __int128 v87; // [rsp+10Ch] [rbp+Ch]
  __int64 v88; // [rsp+11Ch] [rbp+1Ch]
  int v89; // [rsp+124h] [rbp+24h]
  int v90; // [rsp+128h] [rbp+28h]
  int v91; // [rsp+12Ch] [rbp+2Ch]
  __int64 v92; // [rsp+130h] [rbp+30h]
  __int128 v93; // [rsp+138h] [rbp+38h]
  char v94[8]; // [rsp+150h] [rbp+50h] BYREF
  HANDLE hSourceHandle; // [rsp+158h] [rbp+58h]
  __int128 v96; // [rsp+160h] [rbp+60h]
  __int128 v97; // [rsp+170h] [rbp+70h]
  __int128 v98; // [rsp+180h] [rbp+80h]
  __int128 v99; // [rsp+190h] [rbp+90h]
  __int64 v100; // [rsp+1A0h] [rbp+A0h]
  char v101; // [rsp+1A8h] [rbp+A8h]
  int v102; // [rsp+1ACh] [rbp+ACh]
  void *v103; // [rsp+1B0h] [rbp+B0h]
  __int64 v104; // [rsp+1B8h] [rbp+B8h]
  __int64 v105; // [rsp+1C0h] [rbp+C0h]
  _DWORD v106[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v107; // [rsp+1E0h] [rbp+E0h]
  int v108; // [rsp+1E8h] [rbp+E8h]
  int v109; // [rsp+1ECh] [rbp+ECh]
  int v110; // [rsp+1F0h] [rbp+F0h]
  __int16 v111; // [rsp+1F4h] [rbp+F4h]
  __int16 v112; // [rsp+1F6h] [rbp+F6h]
  int v113; // [rsp+1F8h] [rbp+F8h]
  __int64 v114; // [rsp+1FCh] [rbp+FCh]
  int v115; // [rsp+204h] [rbp+104h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v74 = a4;
  v6 = a3;
  v77[0] = (__int64)a3;
  v7 = a2;
  v78 = a2;
  v76 = this;
  v80 = a5;
  v79 = a6;
  v9 = 0;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0;
  v93 = 0LL;
  v81 = *(_DWORD *)a2;
  v82 = *(_QWORD *)((char *)a2 + 20);
  v90 = *((_DWORD *)a2 + 14);
  v91 = *((_DWORD *)a2 + 15);
  v92 = *((_QWORD *)a2 + 8);
  v10 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v38 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v72);
    v39 = *v38;
    *v38 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v39;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v72);
    v10 = ISMStatics::s_inputSiteHierarchyManager;
  }
  v11 = ISMStatics::s_inputSystemBamoConnection;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v69 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v69);
    v40 = CoreUICreate(&v69);
    if ( v40 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v40,
        dwDesiredAccess);
    v41 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((int)&v71);
    v42 = *v41;
    *v41 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v42;
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v71);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v69);
    v11 = ISMStatics::s_inputSystemBamoConnection;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v11 + 31) + 8LL) + 152LL))(*((_QWORD *)v11 + 31) + 8LL);
  HitTestHelper::HitTestRequestWithRetry(v94, &v81, *((_QWORD *)this + 23), v12, v10);
  if ( v94[0] )
  {
    v15 = *(_DWORD *)v7;
    v16 = 2;
    v17 = v104;
    v72 = v104;
    if ( v15 == 4 )
    {
      v70 = 2;
    }
    else
    {
      v43 = v15 - 2;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          if ( v44 == 2 )
            v70 = 32;
          else
            v70 = 0;
        }
        else
        {
          v70 = 16;
        }
      }
      else
      {
        v70 = 8;
        if ( (unsigned __int8)DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList(32LL, v104 - 24, &v68) )
        {
          *((_DWORD *)v6 + 26) = v68;
          goto LABEL_59;
        }
      }
    }
    *(_QWORD *)v6 = v100;
    *((_OWORD *)v6 + 1) = v96;
    *((_OWORD *)v6 + 2) = v97;
    *((_OWORD *)v6 + 3) = v98;
    *((_OWORD *)v6 + 4) = v99;
    *((_DWORD *)v6 + 20) = v102;
    v18 = (__int64 **)(v17 - 24);
    v68 = 0;
    InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v69, v17 - 24);
    v19 = v69;
    if ( v69 )
    {
      if ( !*(_BYTE *)(v69 + 480) )
        std::_Throw_bad_optional_access();
      v68 = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v69 + 48));
      v19 = v69;
    }
    if ( v19 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v71 = 0;
    v20 = 0;
    v21 = 0;
    v22 = *v18;
    v75 = *(__int64 **)(v72 - 16);
    if ( v22 == v75 )
      goto LABEL_11;
    do
    {
      v46 = *v22;
      v47 = 0LL;
      v69 = 0LL;
      v48 = *(_QWORD *)(v46 + 488);
      v49 = *(_QWORD *)(v46 + 496);
      if ( v48 != v49 )
      {
        v50 = v48;
        v51 = v49;
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IActivationConfigurationInputObjectProxy>(v50 + 8, &v69) >= 0 )
            break;
          v50 += 16LL;
        }
        while ( v50 != v51 );
        v47 = v69;
        v7 = v78;
        v6 = (struct _InputHitTestResult *)v77[0];
      }
      if ( v47 )
      {
        if ( !v20 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 24LL))(v47);
          v47 = v69;
        }
        if ( !v21 )
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
        if ( v20 && v21 )
        {
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v69);
          goto LABEL_14;
        }
      }
      v73 = v20;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v69);
      ++v22;
    }
    while ( v22 != v75 );
    if ( !v20 )
LABEL_11:
      v20 = 1;
    if ( !v21 )
      v21 = 2;
LABEL_14:
    if ( v20 == 2 )
    {
      v23 = 1;
    }
    else if ( v20 == 3 )
    {
      v23 = 2;
    }
    else
    {
      v23 = v71;
    }
    if ( v21 == 1 )
      v23 |= 4u;
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( ((1LL << gdwDeviceFamily) & 0x1C000) != 0 && (v23 & 2) != 0 )
    {
      v23 &= ~2u;
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      v24 = v68;
      if ( ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, v68) )
        v23 |= 1u;
    }
    else
    {
      v24 = v68;
    }
    *((_QWORD *)v6 + 11) = v24;
    *((_DWORD *)v6 + 24) = v23;
    if ( v70 )
    {
      v106[3] = 0;
      v112 = 0;
      v115 = 0;
      v109 = *(_DWORD *)v7;
      switch ( v109 )
      {
        case 4:
          v25 = 2;
          break;
        case 2:
          v25 = 8;
          break;
        case 3:
          v25 = 16;
          break;
        case 5:
          v25 = 0x1000000;
          if ( !*((_DWORD *)v7 + 4) )
            v25 = 32;
          break;
        default:
          v25 = 0;
          break;
      }
      v106[0] = v25;
      v106[1] = *((_DWORD *)v7 + 8);
      v106[2] = *((_DWORD *)v7 + 10);
      v107 = *((_QWORD *)v7 + 6);
      v108 = *((_DWORD *)v7 + 15);
      v114 = *(_QWORD *)((char *)v7 + 20);
      v110 = *((_DWORD *)v7 + 1);
      v111 = *((_WORD *)v7 + 4);
      v113 = *((_DWORD *)v7 + 3);
      if ( v25 == 2 )
        v113 = 1;
      v26 = v74;
      *((_DWORD *)v74 + 24) = v23;
      *((_QWORD *)v26 + 11) = *((_QWORD *)v6 + 11);
      v27 = hSourceHandle;
      if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        GetInputSiteForContainer(&v75, v72 - 24);
        v53 = v75;
        if ( v75 )
        {
          v101 = 0;
          v102 = 0;
          *((_DWORD *)v6 + 20) = 0;
        }
        CurrentProcess = GetCurrentProcess();
        v55 = GetCurrentProcess();
        if ( !DuplicateHandle(v55, v27, CurrentProcess, (LPHANDLE)v6 + 1, 0, 0, 2u) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x631,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            v56);
        InitialTargetFromHitTestResult = DWMInputRouter::GetInitialTargetFromHitTestResult(
                                           (_DWORD)v76,
                                           (unsigned int)v77,
                                           v106[0],
                                           (unsigned int)v94,
                                           0LL);
        v58 = v74;
        Microsoft::WRL::ComPtr<IInputTarget>::operator=((char *)v74 + 16, InitialTargetFromHitTestResult);
        Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v77);
        if ( v70 != 2 && v70 != 32 )
        {
          v71 = v113;
          std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long,Microsoft::WRL::ComPtr<IInputTarget> &>(
            (char *)v58 + 24,
            v77,
            &v71,
            (char *)v58 + 16);
        }
        if ( v53 )
          (*(void (__fastcall **)(__int64 *))(*v53 + 16))(v53);
        v72 = v104;
        v27 = hSourceHandle;
      }
      v28 = operator new(0x78uLL);
      *(_BYTE *)v28 = v94[0];
      v28[1] = v27;
      v29 = 0LL;
      hSourceHandle = 0LL;
      *((_OWORD *)v28 + 1) = v96;
      *((_OWORD *)v28 + 2) = v97;
      *((_OWORD *)v28 + 3) = v98;
      *((_OWORD *)v28 + 4) = v99;
      v28[10] = v100;
      *((_BYTE *)v28 + 88) = v101;
      *((_DWORD *)v28 + 23) = v102;
      v30 = v105;
      v105 = 0LL;
      v104 = 0LL;
      v31 = v103;
      v32 = 0LL;
      v103 = 0LL;
      v28[12] = v31;
      v28[13] = v72;
      v28[14] = v30;
      v33 = (_QWORD **)((char *)v74 + 176);
      if ( (__int64 **)((char *)v74 + 176) == &v75 )
      {
        std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)(v28 + 12));
        v66 = v28[1];
        if ( (unsigned __int64)(v66 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          NtCloseCompositionInputSink(v66, v63, v64, v65);
        operator delete(v28, 0x78uLL);
      }
      else
      {
        v34 = *v33;
        *v33 = v28;
        if ( v34 )
        {
          std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)(v34 + 12));
          v62 = v34[1];
          if ( (unsigned __int64)(v62 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            NtCloseCompositionInputSink(v62, v59, v60, v61);
          operator delete(v34, 0x78uLL);
        }
        v32 = v103;
      }
      v68 = 0;
      if ( ContextualProcessorManager::OnHitTest(
             *((ContextualProcessorManager **)v76 + 32),
             (struct HitTestInfo *)v106,
             v74,
             v80,
             v79,
             (enum ContextualProcessorState *)&v68) < 0 )
        v35 = 0;
      else
        v35 = v68;
      if ( v101 && (*(_DWORD *)v7 != 4 || (*((_BYTE *)v7 + 56) & 1) != 0) )
      {
        v16 = 3;
      }
      else
      {
        if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) == 0 || *(_DWORD *)v7 != 4 )
        {
          if ( v35 )
          {
            if ( v35 == 3 )
              v16 = 1;
          }
          else
          {
            v16 = 0;
          }
        }
      }
      *((_DWORD *)v6 + 25) = v16;
      v36 = 0LL;
      goto LABEL_40;
    }
LABEL_59:
    *((_DWORD *)v6 + 25) = 0;
    v45 = hSourceHandle;
    hSourceHandle = 0LL;
    *((_QWORD *)v6 + 1) = v45;
    HitTestResult::~HitTestResult((HitTestResult *)v94);
    return 0LL;
  }
  v9 = -2147467259;
  v36 = v105;
  v29 = (char *)hSourceHandle;
  v32 = v103;
LABEL_40:
  if ( v32 )
  {
    std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(v32, v104);
    std::_Deallocate<16,0>(v32, 8 * ((v36 - (__int64)v32) >> 3));
  }
  if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v29, v29 - 1, v13, v14);
  return v9;
}
