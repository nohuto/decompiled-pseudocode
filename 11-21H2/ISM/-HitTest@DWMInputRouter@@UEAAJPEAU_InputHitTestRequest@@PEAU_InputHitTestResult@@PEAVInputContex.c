/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800173C0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017350 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180018430 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180029FAC (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18003462C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18004DDD0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18004E0F0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x18004E484 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800CDF40 (--$_Destroy_range@V-$allocator@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ??$_Insert_or_assign@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x180199668 (--$_Insert_or_assign@AEBKAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr.c)
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x18019A240 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18019AEDC (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  struct _InputHitTestRequest *v7; // r14
  unsigned int v9; // edi
  struct IInputSiteHierarchyManager *v10; // rbx
  struct InputSystemServerConnection *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // r12d
  __int64 v17; // rsi
  __int128 v18; // xmm6
  __int128 v19; // xmm7
  __int128 v20; // xmm8
  __int128 v21; // xmm9
  __int64 **v22; // r13
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // esi
  __int64 *v26; // r13
  int v27; // ebx
  unsigned int v28; // esi
  int v29; // edx
  struct InputContext *v30; // rcx
  HANDLE v31; // r13
  _QWORD *v32; // rbx
  char *v33; // r13
  char v34; // si
  __int64 **v35; // rax
  __int64 *v36; // rsi
  unsigned int v37; // ebx
  void *v38; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 (__fastcall *v45)(_QWORD, GUID *, __int64 *); // rax
  int v46; // eax
  __int64 *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v54)(_QWORD, GUID *, __int64 *); // rax
  int v55; // eax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rax
  HANDLE CurrentProcess; // rsi
  HANDLE v60; // rax
  const char *v61; // r9
  __int64 *InitialTargetFromHitTestResult; // rax
  struct InputContext *v63; // rdx
  __int64 *v64; // rsi
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  struct IInputSiteHierarchyManager **v68; // rax
  struct IInputSiteHierarchyManager *v69; // rcx
  int v70; // eax
  struct InputSystemServerConnection **v71; // rax
  struct InputSystemServerConnection *v72; // rcx
  int v73; // eax
  int v74; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  HANDLE v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  int dwDesiredAccess; // [rsp+28h] [rbp-E0h]
  __int64 v84; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v85[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v86[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v87; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-A0h] BYREF
  struct InputContext *v89; // [rsp+70h] [rbp-98h]
  __int64 v90; // [rsp+78h] [rbp-90h]
  _QWORD v91[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall *v92)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h]
  struct _InputHitTestRequest *v93; // [rsp+98h] [rbp-70h]
  DWMInputRouter *v94; // [rsp+A0h] [rbp-68h]
  __int64 (__fastcall ***v95)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp-60h]
  struct IInputTarget **v96; // [rsp+B0h] [rbp-58h]
  struct IInputBuffer *v97; // [rsp+B8h] [rbp-50h]
  int v98; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v99; // [rsp+CCh] [rbp-3Ch]
  __int128 v100; // [rsp+D4h] [rbp-34h]
  __int128 v101; // [rsp+E4h] [rbp-24h]
  __int128 v102; // [rsp+F4h] [rbp-14h]
  __int128 v103; // [rsp+104h] [rbp-4h]
  __int128 v104; // [rsp+114h] [rbp+Ch]
  __int64 v105; // [rsp+124h] [rbp+1Ch]
  int v106; // [rsp+12Ch] [rbp+24h]
  int v107; // [rsp+130h] [rbp+28h]
  int v108; // [rsp+134h] [rbp+2Ch]
  __int64 v109; // [rsp+138h] [rbp+30h]
  __int128 v110; // [rsp+140h] [rbp+38h]
  _BYTE v111[8]; // [rsp+158h] [rbp+50h] BYREF
  HANDLE hSourceHandle; // [rsp+160h] [rbp+58h]
  __int128 v113; // [rsp+168h] [rbp+60h]
  __int128 v114; // [rsp+178h] [rbp+70h]
  __int128 v115; // [rsp+188h] [rbp+80h]
  __int128 v116; // [rsp+198h] [rbp+90h]
  __int64 v117; // [rsp+1A8h] [rbp+A0h]
  char v118; // [rsp+1B0h] [rbp+A8h]
  int v119; // [rsp+1B4h] [rbp+ACh]
  __int128 v120; // [rsp+1B8h] [rbp+B0h]
  __int64 v121; // [rsp+1C8h] [rbp+C0h]
  _DWORD v122[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v123; // [rsp+1E8h] [rbp+E0h]
  int v124; // [rsp+1F0h] [rbp+E8h]
  int v125; // [rsp+1F4h] [rbp+ECh]
  int v126; // [rsp+1F8h] [rbp+F0h]
  __int16 v127; // [rsp+1FCh] [rbp+F4h]
  __int16 v128; // [rsp+1FEh] [rbp+F6h]
  int v129; // [rsp+200h] [rbp+F8h]
  __int64 v130; // [rsp+204h] [rbp+FCh]
  int v131; // [rsp+20Ch] [rbp+104h]
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  v89 = a4;
  v7 = a2;
  v93 = a2;
  v94 = this;
  v97 = a5;
  v96 = a6;
  v9 = 0;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0;
  v110 = 0LL;
  v98 = *(_DWORD *)a2;
  v99 = *(_QWORD *)((char *)a2 + 20);
  v107 = *((_DWORD *)a2 + 14);
  v108 = *((_DWORD *)a2 + 15);
  v109 = *((_QWORD *)a2 + 8);
  v10 = ISMStatics::s_inputSiteHierarchyManager;
  if ( !ISMStatics::s_inputSiteHierarchyManager )
  {
    v68 = (struct IInputSiteHierarchyManager **)InputSiteHierarchyManager::Create(&v88);
    v69 = *v68;
    *v68 = 0LL;
    ISMStatics::s_inputSiteHierarchyManager = v69;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v88);
    v10 = ISMStatics::s_inputSiteHierarchyManager;
  }
  v11 = ISMStatics::s_inputSystemBamoConnection;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v84 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v84);
    v70 = CoreUICreate(&v84);
    if ( v70 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v70,
        dwDesiredAccess);
    v71 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((int)v86);
    v72 = *v71;
    *v71 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v72;
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(v86);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v84);
    v11 = ISMStatics::s_inputSystemBamoConnection;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v11 + 29) + 8LL) + 152LL))(*((_QWORD *)v11 + 29) + 8LL);
  HitTestHelper::HitTestRequestWithRetry(v111, &v98, *((_QWORD *)this + 23), v12, v10);
  if ( !v111[0] )
  {
    v9 = -2147467259;
    v33 = (char *)hSourceHandle;
LABEL_41:
    v17 = *((_QWORD *)&v120 + 1);
    goto LABEL_42;
  }
  v15 = *(_DWORD *)v7;
  v16 = 2;
  v17 = *((_QWORD *)&v120 + 1);
  *(_QWORD *)v86 = *((_QWORD *)&v120 + 1);
  if ( v15 == 4 )
  {
    v85[1] = 2;
  }
  else
  {
    v73 = v15 - 2;
    if ( v73 )
    {
      v74 = v73 - 1;
      if ( v74 )
      {
        if ( v74 == 2 )
          v85[1] = 32;
        else
          v85[1] = 0;
      }
      else
      {
        v85[1] = 16;
      }
    }
    else
    {
      v85[1] = 8;
      if ( (unsigned __int8)DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList(
                              32LL,
                              *((_QWORD *)&v120 + 1) - 24LL,
                              v85) )
      {
        *((_DWORD *)a3 + 26) = v85[0];
        goto LABEL_114;
      }
    }
  }
  *(_QWORD *)a3 = v117;
  v18 = v113;
  *((_OWORD *)a3 + 1) = v113;
  v19 = v114;
  *((_OWORD *)a3 + 2) = v114;
  v20 = v115;
  *((_OWORD *)a3 + 3) = v115;
  v21 = v116;
  *((_OWORD *)a3 + 4) = v116;
  *((_DWORD *)a3 + 20) = v119;
  v22 = (__int64 **)(v17 - 24);
  v88 = v17 - 24;
  v85[0] = 0;
  InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v84, v17 - 24);
  v23 = v84;
  if ( v84 )
  {
    if ( !*(_BYTE *)(v84 + 480) )
      std::_Throw_bad_optional_access();
    v85[0] = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v84 + 48));
    v23 = v84;
  }
  if ( v23 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  LODWORD(v87) = 0;
  v24 = 0;
  v25 = 0;
  v26 = *v22;
  v91[0] = *(_QWORD *)(v88 + 8);
  if ( v26 == (__int64 *)v91[0] )
  {
LABEL_11:
    v24 = 1;
  }
  else
  {
    do
    {
      v40 = *v26;
      v41 = 0LL;
      v84 = 0LL;
      v42 = *(_QWORD *)(v40 + 488);
      v90 = v42;
      v43 = *(_QWORD *)(v40 + 496);
      if ( v42 != v43 )
      {
        v44 = v43;
        while ( 1 )
        {
          v95 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v42 + 8);
          v45 = **v95;
          v92 = v45;
          if ( v41 )
          {
            v84 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
            v46 = v92(v95, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v84);
          }
          else
          {
            v46 = v45(v95, &GUID_4753c172_9138_4064_8603_1556e98a010f, &v84);
          }
          if ( v46 >= 0 )
            break;
          v42 = v90 + 16;
          v90 = v42;
          if ( v42 == v44 )
            break;
          v41 = v84;
        }
        v41 = v84;
        v7 = v93;
      }
      if ( v41 )
      {
        if ( !v24 )
        {
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 24LL))(v41);
          v41 = v84;
        }
        if ( !v25 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
          v41 = v84;
        }
        if ( v24 && v25 )
        {
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v84);
          goto LABEL_14;
        }
      }
      v56 = v24;
      LODWORD(v90) = v24;
      if ( v41 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        v56 = v90;
      }
      ++v26;
    }
    while ( v26 != (__int64 *)v91[0] );
    v24 = v56;
    if ( !v56 )
      goto LABEL_11;
  }
  if ( !v25 )
    v25 = 2;
LABEL_14:
  if ( v24 == 2 )
  {
    v27 = 1;
  }
  else if ( v24 == 3 )
  {
    v27 = 2;
  }
  else
  {
    v27 = (int)v87;
  }
  if ( v25 == 1 )
    v27 |= 4u;
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x1C000) != 0 && (v27 & 2) != 0 )
  {
    v27 &= ~2u;
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    v28 = v85[0];
    if ( ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, v85[0]) )
      v27 |= 1u;
  }
  else
  {
    v28 = v85[0];
  }
  *((_QWORD *)a3 + 11) = v28;
  *((_DWORD *)a3 + 24) = v27;
  if ( v85[1] )
  {
    v122[3] = 0;
    v128 = 0;
    v131 = 0;
    v125 = *(_DWORD *)v7;
    switch ( v125 )
    {
      case 4:
        v29 = 2;
        break;
      case 2:
        v29 = 8;
        break;
      case 3:
        v29 = 16;
        break;
      case 5:
        v29 = 0x1000000;
        if ( !*((_DWORD *)v7 + 4) )
          v29 = 32;
        break;
      default:
        v29 = 0;
        break;
    }
    v122[0] = v29;
    v122[1] = *((_DWORD *)v7 + 8);
    v122[2] = *((_DWORD *)v7 + 10);
    v123 = *((_QWORD *)v7 + 6);
    v124 = *((_DWORD *)v7 + 15);
    v130 = *(_QWORD *)((char *)v7 + 20);
    v126 = *((_DWORD *)v7 + 1);
    v127 = *((_WORD *)v7 + 4);
    v129 = *((_DWORD *)v7 + 3);
    if ( v29 == 2 )
      v129 = 1;
    v30 = v89;
    *((_DWORD *)v89 + 24) = v27;
    *((_QWORD *)v30 + 11) = *((_QWORD *)a3 + 11);
    v31 = hSourceHandle;
    if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v47 = *(__int64 **)v88;
      v87 = v47;
      v93 = *(struct _InputHitTestRequest **)(v88 + 8);
      if ( v47 == (__int64 *)v93 )
      {
LABEL_71:
        v57 = 0LL;
        v88 = 0LL;
        v58 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v48 = *v47;
          v49 = 0LL;
          v84 = 0LL;
          v50 = *(_QWORD *)(v48 + 488);
          v51 = *(_QWORD *)(v48 + 496);
          if ( v50 != v51 )
          {
            v52 = v51;
            while ( 1 )
            {
              v53 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v50 + 8);
              v54 = **v53;
              v91[0] = v54;
              if ( v49 )
              {
                v84 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
                v55 = ((__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))v91[0])(
                        v53,
                        &GUID_8ddffe9c_458e_6d51_c227_1374408f672c,
                        &v84);
              }
              else
              {
                v55 = v54(v53, &GUID_8ddffe9c_458e_6d51_c227_1374408f672c, &v84);
              }
              if ( v55 >= 0 )
                break;
              v50 += 16LL;
              if ( v50 == v52 )
                break;
              v49 = v84;
            }
            v31 = hSourceHandle;
            if ( v84 )
              break;
          }
          v47 = v87 + 1;
          v87 = v47;
          if ( v47 == (__int64 *)v93 )
            goto LABEL_71;
        }
        v88 = *v87;
        v57 = v88;
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v88);
        Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v84);
        v58 = v57;
      }
      if ( v58 )
      {
        v118 = 0;
        v119 = 0;
        *((_DWORD *)a3 + 20) = 0;
      }
      CurrentProcess = GetCurrentProcess();
      v60 = GetCurrentProcess();
      if ( !DuplicateHandle(v60, v31, CurrentProcess, (LPHANDLE)a3 + 1, 0, 0, 2u) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x610,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          v61);
      InitialTargetFromHitTestResult = (__int64 *)DWMInputRouter::GetInitialTargetFromHitTestResult(
                                                    (_DWORD)v94,
                                                    (unsigned int)v86,
                                                    v122[0],
                                                    (unsigned int)v111,
                                                    0LL);
      v63 = v89;
      v64 = (__int64 *)((char *)v89 + 16);
      v65 = 0LL;
      if ( v91 != InitialTargetFromHitTestResult )
      {
        v65 = *InitialTargetFromHitTestResult;
        *InitialTargetFromHitTestResult = 0LL;
      }
      v66 = *v64;
      *v64 = v65;
      if ( v66 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
        v63 = v89;
      }
      v67 = *(_QWORD *)v86;
      if ( *(_QWORD *)v86 )
      {
        *(_QWORD *)v86 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
        v63 = v89;
      }
      if ( v85[1] != 2 && v85[1] != 32 )
      {
        LODWORD(v87) = v129;
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long const &,Microsoft::WRL::ComPtr<IInputTarget> &>(
          (char *)v63 + 24,
          v91,
          &v87,
          v64);
      }
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      *(_QWORD *)v86 = *((_QWORD *)&v120 + 1);
      v21 = v116;
      v20 = v115;
      v19 = v114;
      v18 = v113;
      v31 = hSourceHandle;
    }
    v32 = operator new(0x78uLL);
    *(_BYTE *)v32 = v111[0];
    v32[1] = v31;
    v33 = 0LL;
    hSourceHandle = 0LL;
    *((_OWORD *)v32 + 1) = v18;
    *((_OWORD *)v32 + 2) = v19;
    *((_OWORD *)v32 + 3) = v20;
    *((_OWORD *)v32 + 4) = v21;
    v32[10] = v117;
    v34 = v118;
    *((_BYTE *)v32 + 88) = v118;
    *((_DWORD *)v32 + 23) = v119;
    v32[12] = v120;
    v32[13] = *(_QWORD *)v86;
    v32[14] = v121;
    v120 = 0LL;
    v121 = 0LL;
    v35 = (__int64 **)((char *)v89 + 176);
    if ( (_QWORD *)((char *)v89 + 176) == v91 )
    {
      std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)(v32 + 12));
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
        v32 + 1,
        v80,
        v81,
        v82);
      operator delete(v32, 0x78uLL);
    }
    else
    {
      v36 = *v35;
      *v35 = v32;
      if ( v36 )
      {
        std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)(v36 + 12));
        wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
          v36 + 1,
          v77,
          v78,
          v79);
        operator delete(v36, 0x78uLL);
      }
      v34 = v118;
    }
    v85[0] = 0;
    if ( ContextualProcessorManager::OnHitTest(
           *((ContextualProcessorManager **)v94 + 32),
           (struct HitTestInfo *)v122,
           v89,
           v97,
           v96,
           (enum ContextualProcessorState *)v85) < 0 )
      v37 = 0;
    else
      v37 = v85[0];
    if ( v34 && (*(_DWORD *)v7 != 4 || (*((_BYTE *)v7 + 56) & 1) != 0) )
    {
      v16 = 3;
    }
    else
    {
      if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( ((1LL << gdwDeviceFamily) & 0x1820) == 0 || *(_DWORD *)v7 != 4 )
      {
        if ( v37 )
        {
          if ( v37 == 3 )
            v16 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
    }
    *((_DWORD *)a3 + 25) = v16;
    goto LABEL_41;
  }
  v17 = *(_QWORD *)v86;
LABEL_114:
  v33 = 0LL;
  v76 = hSourceHandle;
  *((_DWORD *)a3 + 25) = 0;
  *((_QWORD *)a3 + 1) = v76;
LABEL_42:
  v38 = (void *)v120;
  if ( (_QWORD)v120 )
  {
    std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(v120, v17);
    std::_Deallocate<16,0>(v38, 8 * ((v121 - (__int64)v38) >> 3));
  }
  if ( (unsigned __int64)(v33 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v33, v33 - 1, v13, v14);
  return v9;
}
