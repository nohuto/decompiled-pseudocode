/*
 * XREFs of ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180528ED8
 * Callers:
 *     ?OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x1800AD118 (-OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD7D6 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x1805275E0 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 *     ?OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180527680 (-OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1805283C0 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUDismissShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528A9C (-OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18014B4E8 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x180521718 (--B-$ComPtrRef@V-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI.c)
 *     ?InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x180524E08 (-InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18052E3E8 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessChangeRequest(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4)
{
  int v7; // eax
  int v8; // ebx
  int v9; // r15d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, char *, int *, unsigned int *, __int64 *); // rbx
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  bool v17; // al
  int v19; // [rsp+20h] [rbp-38h]
  __int64 *v20; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  unsigned int v22; // [rsp+90h] [rbp+38h] BYREF
  int v23; // [rsp+98h] [rbp+40h] BYREF
  char v24; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+50h] BYREF

  if ( a3 == *(_DWORD *)(a1 + 480) )
  {
    v7 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9E9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = a2 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9F6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        a4);
    v9 = 3;
  }
  else
  {
    v9 = 2;
  }
  v24 = 0;
  LOBYTE(v23) = 0;
  v22 = 0;
  v25 = 0LL;
  v10 = *(_QWORD *)(a1 + 120);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, char *, int *, unsigned int *, __int64 *))(*(_QWORD *)v10 + 304LL);
  v20 = &v25;
  v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *(&v20);
  v13 = v11(v10, 11LL, &v24, &v23, &v22, v12);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = 2558LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v25);
    return v15;
  }
  if ( v9 == 2 )
  {
    v17 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown((KeyboardHosting::TabTipAdapter *)a1, a3);
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference((KeyboardHosting::TabTipAdapter *)a1, a3, v17);
  }
  LOBYTE(v19) = v23;
  LOBYTE(v14) = v24;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 32)
                                                                                            + 560LL))(
          *(_QWORD *)(a1 + 32),
          v25,
          v22,
          v14,
          v19,
          v9,
          a3);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = 2573LL;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v25);
  return 0LL;
}
