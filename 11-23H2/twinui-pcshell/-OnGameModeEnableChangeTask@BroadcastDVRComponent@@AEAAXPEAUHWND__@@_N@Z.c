/*
 * XREFs of ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803DA03C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___::Run @ 0x1803DB550 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29434eac48e771f96d62fc3fdb3bf30f___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z @ 0x180049C48 (-CopyTo@GameConfigInfo@@QEAAJPEAU1@@Z.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1803D9538 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1803DC8C0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x1803DCFE0 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall BroadcastDVRComponent::OnGameModeEnableChangeTask(
        BroadcastDVRComponent *this,
        HWND hWnd,
        unsigned __int8 a3)
{
  int v3; // r15d
  struct IApplicationView *v6; // rbx
  struct BroadcastDVRActiveAppInfo *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  int v10; // eax
  HANDLE v11; // rax
  const char *v12; // r9
  char *v13; // rbx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-39h]
  LPVOID pv; // [rsp+40h] [rbp-19h] BYREF
  void *v19; // [rsp+48h] [rbp-11h] BYREF
  HWND v20; // [rsp+50h] [rbp-9h] BYREF
  struct BroadcastDVRActiveAppInfo *v21; // [rsp+58h] [rbp-1h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp+7h]
  __int16 v23; // [rsp+68h] [rbp+Fh] BYREF
  int v24; // [rsp+6Bh] [rbp+12h]
  int v25; // [rsp+70h] [rbp+17h]
  __int64 v26; // [rsp+78h] [rbp+1Fh]
  __int64 v27; // [rsp+80h] [rbp+27h]
  HSTRING string; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 *dwProcessId; // [rsp+C0h] [rbp+67h] BYREF
  struct IApplicationView *v31; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = a3;
  v6 = (struct IApplicationView *)*((_QWORD *)this + 38);
  v31 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v21,
    (_QWORD *)this + 39);
  v7 = v21;
  if ( v21 && *((_BYTE *)v21 + 16) && (*(HWND *)v21 == hWnd || *((HWND *)v21 + 1) == hWnd) )
  {
LABEL_10:
    *((_DWORD *)v7 + 6) = 2 * v3 + 1;
    if ( (_BYTE)v3 )
    {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      string = 0LL;
      LOBYTE(dwProcessId) = 0;
      pv = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(
        (__int64)this,
        v6,
        (__int64)&v23,
        (char *)&dwProcessId,
        &v20,
        &v19,
        &pv);
      v10 = GameConfigInfo::CopyTo((GameConfigInfo *)&v23, (struct BroadcastDVRActiveAppInfo *)((char *)v7 + 16));
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAE8,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v10);
      BroadcastDVRComponent::EvaluateAppForGameMode(this, v6, (HWND *)v7);
      if ( pv )
        CoTaskMemFree(pv);
      if ( string )
        WindowsDeleteString(string);
      goto LABEL_28;
    }
    GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
    if ( !(_DWORD)dwProcessId )
      goto LABEL_28;
    pv = 0LL;
    v11 = OpenProcess(0x1000u, 0, (DWORD)dwProcessId);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &pv,
      v11);
    v13 = (char *)pv;
    if ( pv )
    {
      v14 = RmGameModeDisableForRegisteredProcess(pv);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        v16 = 2807LL;
LABEL_23:
        wil::details::in1diag3::_Log_NtStatus(
          v15,
          (void *)v16,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v14,
          v17);
        goto LABEL_26;
      }
      v14 = RmGameModeUnregisterProcess(v13);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        v16 = 2811LL;
        goto LABEL_23;
      }
      *((_DWORD *)this + 114) = 0;
      std::vector<Windows::Internal::String>::clear((char *)this + 352);
    }
    else
    {
      wil::details::in1diag3::Log_GetLastError(
        retaddr,
        (void *)0xB05,
        (__int64)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        v12);
    }
LABEL_26:
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v13);
    goto LABEL_28;
  }
  v8 = (__int64 *)**((_QWORD **)this + 33);
  dwProcessId = v8;
  while ( v8 != *((__int64 **)this + 33) )
  {
    v9 = v8 + 4;
    std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(&v21, v8 + 5);
    v7 = v21;
    if ( *(HWND *)v21 == hWnd )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v31, v9);
      v6 = v31;
      goto LABEL_10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&dwProcessId);
    v8 = dwProcessId;
  }
LABEL_28:
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v31);
}
