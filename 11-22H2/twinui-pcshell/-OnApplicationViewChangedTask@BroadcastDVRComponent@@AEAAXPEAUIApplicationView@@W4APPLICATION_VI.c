/*
 * XREFs of ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___::Run @ 0x18009BDB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace@U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@1@@Z @ 0x18003CC8C (--$_Emplace@U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActi.c)
 *     ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x180049C48 (-CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z @ 0x180083340 (-BroadcastDVRComponent_OnApplicationViewChanged_NewApp@GameDVRTraceProvider@@SAXPEAX0_N11PEBG@Z.c)
 *     ??$make_shared@UBroadcastDVRActiveAppInfo@@$$V@std@@YA?AV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@XZ @ 0x1800840F8 (--$make_shared@UBroadcastDVRActiveAppInfo@@$$V@std@@YA-AV-$shared_ptr@UBroadcastDVRActiveAppInfo.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?4$$T$$T$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU?$pair@$$T$$T@1@@Z @ 0x18009C4AC (--$-4$$T$$T$0A@@-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRA.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Find_lower_bound@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@@1@AEBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x18009D0B0 (--$_Find_lower_bound@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@V-$Co.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009D394 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@AEBU01@@Z @ 0x1801B9934 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppIn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z @ 0x1803AAF3C (--$-0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803D12D8 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1803D12D8.c)
 *     ??$ActivateInstance@UIPresenceWriter@Internal@PresenceServer@GameBar@Gaming@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPresenceWriter@Internal@PresenceServer@GameBar@Gaming@1@@Z @ 0x1803D13BC (--$ActivateInstance@UIPresenceWriter@Internal@PresenceServer@GameBar@Gaming@Windows@@@Foundation.c)
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D52DC (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 *     ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x1803D7480 (-GameExit@BroadcastDVRTraceProvider@@SAXXZ.c)
 *     ?NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803D97D4 (-NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1803D9C5C (-OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATIO.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall BroadcastDVRComponent::OnApplicationViewChangedTask(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rbx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rdx
  HWND v12; // rdi
  _QWORD *v13; // rax
  std::_Ref_count_base *v14; // r14
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  void *v22; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  int *v24; // rdi
  std::_Ref_count_base *v25; // rcx
  std::_Ref_count_base *v26; // rbx
  std::_Ref_count_base *v27; // rdi
  __int64 v28; // rbx
  std::_Ref_count_base *v29; // rcx
  __int64 v30; // r8
  std::_Ref_count_base *v31; // rbx
  _BYTE *v32; // rdi
  void *v33; // rbx
  __int64 v34; // r8
  std::_Ref_count_base *v35; // rbx
  int v36; // r10d
  int v37; // ecx
  int v38; // r8d
  int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // r9
  __int64 v42; // r11
  int v43; // eax
  int v44; // r10d
  int v45; // edx
  int v46; // r9d
  unsigned int v47; // ecx
  __int64 v48; // r9
  int v49; // r10d
  int v50; // r8d
  int v51; // edx
  unsigned int v52; // ecx
  __int64 v53; // r9
  __int64 v54; // rbx
  int v55; // eax
  int v56; // r8d
  unsigned int v57; // r10d
  int v58; // ecx
  int v59; // edx
  int v60; // ecx
  unsigned int v61; // edx
  bool v62; // r10
  __int64 v63; // r9
  int v64; // [rsp+20h] [rbp-148h]
  int v65; // [rsp+20h] [rbp-148h]
  BOOL v66; // [rsp+20h] [rbp-148h]
  bool v67; // [rsp+40h] [rbp-128h] BYREF
  bool v68; // [rsp+41h] [rbp-127h] BYREF
  char v69; // [rsp+42h] [rbp-126h] BYREF
  bool v70[5]; // [rsp+43h] [rbp-125h] BYREF
  std::_Ref_count_base *v71[2]; // [rsp+48h] [rbp-120h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-110h] BYREF
  HWND hWnd; // [rsp+60h] [rbp-108h] BYREF
  void *v74; // [rsp+68h] [rbp-100h] BYREF
  struct IApplicationView *v75; // [rsp+70h] [rbp-F8h] BYREF
  DWORD dwProcessId; // [rsp+78h] [rbp-F0h] BYREF
  __int16 v77; // [rsp+80h] [rbp-E8h] BYREF
  int v78; // [rsp+83h] [rbp-E5h]
  int v79; // [rsp+88h] [rbp-E0h]
  __int64 v80; // [rsp+90h] [rbp-D8h]
  __int64 v81; // [rsp+98h] [rbp-D0h]
  HSTRING string; // [rsp+A0h] [rbp-C8h]
  struct IApplicationView *v83; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v84; // [rsp+B0h] [rbp-B8h] BYREF
  std::_Ref_count_base *v85; // [rsp+B8h] [rbp-B0h]
  __int64 v86; // [rsp+C0h] [rbp-A8h] BYREF
  struct IApplicationView *v87; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-98h] BYREF
  std::_Ref_count_base *v89; // [rsp+D8h] [rbp-90h]
  struct IApplicationView *v90; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v91; // [rsp+E8h] [rbp-80h]
  __int64 v92; // [rsp+F8h] [rbp-70h] BYREF
  std::_Ref_count_base *v93; // [rsp+100h] [rbp-68h]
  _BYTE v94[16]; // [rsp+108h] [rbp-60h] BYREF
  HSTRING v95; // [rsp+118h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v75 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v75);
  *(_OWORD *)v71 = 0LL;
  hWnd = 0LL;
  v74 = 0LL;
  v68 = 0;
  if ( a3 != 7 && a3 )
  {
    if ( a3 == 9 )
    {
      if ( a2 == *(struct IApplicationView **)(a1 + 280) )
      {
        std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v71, a1 + 288);
        v35 = v71[0];
        if ( (GetWindowLongW(*((HWND *)v71[0] + 1), -16) & 0x20000000) != 0 && *(_QWORD *)v35 )
        {
          v36 = *((_DWORD *)v35 + 14);
          v67 = (v36 & 2) != 0;
          v37 = (*((_BYTE *)v35 + 16) != 0) | 0x40;
          if ( !*((_BYTE *)v35 + 18) )
            v37 = *((_BYTE *)v35 + 16) != 0;
          v38 = v37 | 2;
          if ( (v36 & 8) == 0 )
            v38 = v37;
          v39 = v38 | 4;
          if ( (v36 & 0x10) == 0 )
            v39 = v38;
          v40 = v39 | 8;
          if ( (v36 & 0x20) == 0 )
            v40 = v39;
          v41 = v40 | 0x10;
          if ( (v36 & 0x40) == 0 )
            v41 = v40;
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 3LL, v35, v41, 0, &v67);
          std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
        }
        else if ( !WindowsIsStringEmpty(*((HSTRING *)v35 + 6)) )
        {
          v42 = *((_QWORD *)v35 + 8);
          if ( v42 )
          {
            v66 = *((_BYTE *)v35 + 19) == 0;
            v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v42 + 48LL))(
                    v42,
                    *(_QWORD *)v35,
                    2LL,
                    *((_QWORD *)v35 + 6));
            if ( v43 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xBDA,
                (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v43,
                v66);
          }
        }
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      if ( a2 != *(struct IApplicationView **)(a1 + 304) )
        goto LABEL_8;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(a1 + 328, a1 + 304);
      std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(a1 + 336, a1 + 312);
      v6 = a1 + 304;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_8;
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::_Find_lower_bound<Microsoft::WRL::ComPtr<IApplicationView>>(
        a1 + 264,
        &v83);
      v26 = v85;
      if ( *((_BYTE *)v85 + 25)
        || (unsigned __int64)a2 < *((_QWORD *)v85 + 4)
        || v85 == *(std::_Ref_count_base **)(a1 + 264) )
      {
        goto LABEL_8;
      }
      std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v71, (char *)v85 + 40);
      v27 = v71[0];
      if ( *((_BYTE *)v71[0] + 20) )
        --*(_DWORD *)(a1 + 460);
      v28 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
              a1 + 264,
              v26);
      v29 = *(std::_Ref_count_base **)(v28 + 48);
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v28 + 32);
      std::_Deallocate<16,0>(v28, 56LL);
      if ( *((_BYTE *)v27 + 16) )
      {
        v44 = *((_DWORD *)v27 + 14);
        v67 = (v44 & 2) != 0;
        v45 = (*((_BYTE *)v27 + 18) != 0 ? 65 : 1) | 2;
        if ( (v44 & 8) == 0 )
          v45 = *((_BYTE *)v27 + 18) != 0 ? 65 : 1;
        v46 = v45 | 4;
        if ( (v44 & 0x10) == 0 )
          v46 = v45;
        v47 = v46 | 8;
        if ( (v44 & 0x20) == 0 )
          v47 = v46;
        v48 = v47 | 0x10;
        if ( (v44 & 0x40) == 0 )
          v48 = v47;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v27, v48, 0, &v67);
        BroadcastDVRTraceProvider::GameExit();
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      if ( a2 == *(struct IApplicationView **)(a1 + 280) )
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
      if ( a2 != *(struct IApplicationView **)(a1 + 304) )
        goto LABEL_8;
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        a1 + 328,
        a1 + 304);
      v6 = a1 + 304;
    }
    std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(v6);
LABEL_8:
    v7 = v71[1];
LABEL_9:
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
      {
        v31 = v71[1];
        (**(void (__fastcall ***)(std::_Ref_count_base *))v71[1])(v71[1]);
        std::_Ref_count_base::_Decwref(v31);
      }
    }
    return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v75);
  }
  v9 = *(__int64 **)(a1 + 264);
  v10 = (__int64 *)v9[1];
  v11 = v9;
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( v10[4] < (unsigned __int64)a2 )
    {
      v10 = (__int64 *)v10[2];
    }
    else
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
    }
  }
  if ( v11 != v9 && !*((_BYTE *)v11 + 25) && (unsigned __int64)a2 >= v11[4] )
  {
    std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v71, v11 + 5);
    v14 = v71[0];
    if ( (*((_BYTE *)v71[0] + 56) & 1) != 0 || !*(_QWORD *)v71[0] )
    {
      v32 = (char *)v71[0] + 16;
      v69 = *((_BYTE *)v71[0] + 16);
      pv = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(a1, a2, (__int64)v71[0] + 16, (char *)&v68, &hWnd, &v74, &pv);
      *(_QWORD *)v14 = hWnd;
      *((_QWORD *)v14 + 1) = v74;
      v33 = pv;
      if ( pv )
      {
        v34 = -1LL;
        do
          ++v34;
        while ( *((_WORD *)pv + v34) );
        std::wstring::assign((char *)v14 + 72, pv);
      }
      if ( v69 && !*v32 )
      {
        v49 = *((_DWORD *)v14 + 14);
        v67 = (v49 & 2) != 0;
        v50 = (*((_BYTE *)v14 + 18) != 0 ? 0x40 : 0) | 2;
        if ( (v49 & 8) == 0 )
          v50 = *((_BYTE *)v14 + 18) != 0 ? 0x40 : 0;
        v51 = v50 | 4;
        if ( (v49 & 0x10) == 0 )
          v51 = v50;
        v52 = v51 | 8;
        if ( (v49 & 0x20) == 0 )
          v52 = v51;
        *v32 = 1;
        v53 = v52 | 0x10;
        if ( (v49 & 0x40) == 0 )
          v53 = v52;
        LOBYTE(v64) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v14, v53, v64, &v67);
        *v32 = 0;
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      *((_DWORD *)v14 + 14) &= ~4u;
      *((_DWORD *)v14 + 14) |= 4 * v68;
      if ( v33 )
        CoTaskMemFree(v33);
    }
    goto LABEL_37;
  }
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0LL;
  v81 = 0LL;
  string = 0LL;
  pv = 0LL;
  BroadcastDVRComponent::EvaluateIfViewIsGame(a1, a2, (__int64)&v77, (char *)&v68, &hWnd, &v74, &pv);
  v67 = 1;
  v12 = hWnd;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v13 = std::make_shared<BroadcastDVRActiveAppInfo,>(&v92);
  std::shared_ptr<KBViewInfo>::operator=(v71, v13);
  if ( v93 )
    std::_Ref_count_base::_Decref(v93);
  v14 = v71[0];
  *(_QWORD *)v71[0] = v12;
  *((_QWORD *)v14 + 1) = v74;
  v15 = GameConfigInfo::CopyTo((GameConfigInfo *)&v77, (std::_Ref_count_base *)((char *)v14 + 16));
  if ( v15 >= 0 )
  {
    *((_DWORD *)v14 + 14) ^= (*((_DWORD *)v14 + 14) ^ (4 * v68)) & 4;
    v16 = *((_DWORD *)v14 + 14) & 0xFFFFFFFD;
    *((_DWORD *)v14 + 14) = v16;
    v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(32 * *(_BYTE *)(a1 + 451))) & 0x20;
    *((_DWORD *)v14 + 14) = v17;
    v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(*(_BYTE *)(a1 + 452) << 6)) & 0x40;
    *((_DWORD *)v14 + 14) = v18;
    v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
    *((_DWORD *)v14 + 14) = v19;
    *((_DWORD *)v14 + 14) = (v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(16 * *(_BYTE *)(a1 + 450))) & 0x10) & 0xFFFFFE7F | 0x80;
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool *))(*(_QWORD *)a1 + 112LL))(a1, dwProcessId, &v67);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB44,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v20,
        v65);
    v21 = v67 ? 0x80 : 0;
    *((_DWORD *)v14 + 14) &= ~0x80u;
    *((_DWORD *)v14 + 14) |= v21;
    *((_DWORD *)v14 + 15) = 0;
    if ( *((_BYTE *)v14 + 16) && !WindowsIsStringEmpty(*((HSTRING *)v14 + 6)) )
    {
      v54 = *(_QWORD *)Windows::Internal::StringReference::StringReference(
                         &v95,
                         L"Windows.Gaming.GameBar.PresenceServer.Internal.PresenceWriter");
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v14 + 8);
      v55 = Windows::Foundation::ActivateInstance<Windows::Gaming::GameBar::PresenceServer::Internal::IPresenceWriter>(
              v54,
              (char *)v14 + 64);
      if ( v55 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB4E,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v55,
          v65);
      v12 = hWnd;
    }
    v22 = pv;
    if ( pv )
    {
      v30 = -1LL;
      do
        ++v30;
      while ( *((_WORD *)pv + v30) );
      std::wstring::assign((char *)v14 + 72, pv);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v14 + 6), 0LL);
    GameDVRTraceProvider::BroadcastDVRComponent_OnApplicationViewChanged_NewApp(
      v12,
      v74,
      *((_BYTE *)v14 + 16),
      *((_BYTE *)v14 + 17),
      v68,
      StringRawBuffer);
    if ( *((_BYTE *)v14 + 20) )
    {
      ++*(_DWORD *)(a1 + 460);
      if ( *(_BYTE *)(a1 + 448) )
      {
        v70[0] = (*((_DWORD *)v14 + 14) & 2) != 0;
        LOBYTE(v64) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 32LL, v14, 0LL, v64, v70);
      }
    }
    v83 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v83);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v84,
      v71);
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::_Emplace<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>>(
      (_QWORD *)(a1 + 264),
      (__int64)v94);
    if ( v85 )
      std::_Ref_count_base::_Decref(v85);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v83);
    if ( v22 )
      CoTaskMemFree(v22);
    if ( string )
      WindowsDeleteString(string);
LABEL_37:
    v24 = (int *)((char *)v14 + 56);
    *((_DWORD *)v14 + 14) &= ~1u;
    v90 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v90);
    v7 = v71[1];
    if ( v71[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v71[1] + 2);
      v7 = v71[1];
      v14 = v71[0];
    }
    v90 = 0LL;
    v86 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 304) = a2;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v86);
    v91 = 0LL;
    *(_QWORD *)(a1 + 312) = v14;
    v25 = *(std::_Ref_count_base **)(a1 + 320);
    *(_QWORD *)(a1 + 320) = v7;
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v90);
    if ( *((_BYTE *)v14 + 16) )
    {
      BroadcastDVRComponent::OnApplicationViewChangedGameMode(a1, a2, a3);
      v87 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v87);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v88,
        v71);
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        a1 + 280,
        &v87);
      if ( v89 )
        std::_Ref_count_base::_Decref(v89);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v87);
      if ( *(_QWORD *)v14 )
      {
        v56 = *v24;
        v57 = (unsigned int)*v24 >> 1;
        v69 = (*v24 & 2) != 0;
        v58 = (*((_BYTE *)v14 + 16) != 0) | 0x40;
        if ( !*((_BYTE *)v14 + 18) )
          v58 = *((_BYTE *)v14 + 16) != 0;
        v59 = v58 | 2;
        if ( (v56 & 8) == 0 )
          v59 = v58;
        v60 = v59 | 4;
        if ( (v56 & 0x10) == 0 )
          v60 = v59;
        v61 = v60 | 8;
        if ( (v56 & 0x20) == 0 )
          v61 = v60;
        v62 = (v57 & 1) == 0;
        v63 = v61 | 0x10;
        if ( (v56 & 0x40) == 0 )
          v63 = v61;
        LOBYTE(v64) = v62;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2LL, v14, v63, v64, &v69);
        if ( v69 )
          *v24 |= 2u;
        if ( (*v24 & 0x104) == 0 )
          BroadcastDVRComponent::AddGameToMruList((BroadcastDVRComponent *)a1, v14);
      }
      if ( (*(_BYTE *)v24 & 4) == 0 )
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 1);
    }
    goto LABEL_9;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xB34,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)v15,
    v65);
  if ( pv )
    CoTaskMemFree(pv);
  if ( string )
    WindowsDeleteString(string);
  if ( v71[1] )
    std::_Ref_count_base::_Decref(v71[1]);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v75);
}
