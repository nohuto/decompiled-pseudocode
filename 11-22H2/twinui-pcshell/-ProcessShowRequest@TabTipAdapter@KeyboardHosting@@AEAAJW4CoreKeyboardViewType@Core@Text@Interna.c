/*
 * XREFs of ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18052906C
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x180528814 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18014B4E8 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x180521718 (--B-$ComPtrRef@V-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI.c)
 *     ?GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI@Z @ 0x180522964 (-GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@T.c)
 *     ?InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x180524E08 (-InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180524F38 (-LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Inter.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18052E3E8 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequest(__int64 a1, unsigned int a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, char *, int *, unsigned int *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  bool v13; // al
  int v15; // [rsp+20h] [rbp-40h]
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v20; // [rsp+98h] [rbp+38h] BYREF
  char v21; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp+48h] BYREF

  KeyboardHosting::TabTipAdapter::LogForegroundAppInfo(a1, a2);
  if ( !a2 )
  {
    v4 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x98A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)a1, 1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v21 = 0;
    LOBYTE(v20) = 0;
    v16 = 0;
    v17 = 0LL;
    v7 = *(_QWORD *)(a1 + 120);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, char *, int *, unsigned int *, __int64 *))(*(_QWORD *)v7 + 304LL);
    v18 = &v17;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *(&v18);
    v10 = v8(v7, a2, &v21, &v20, &v16, v9);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v22 = 0;
      if ( KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists(a1, a2, (__int64)&v22) )
      {
        v13 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown((KeyboardHosting::TabTipAdapter *)a1, v22);
        KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
          (KeyboardHosting::TabTipAdapter *)a1,
          v22,
          v13);
      }
      LOBYTE(v15) = v20;
      LOBYTE(v12) = v21;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 32)
                                                                                                + 560LL))(
              *(_QWORD *)(a1 + 32),
              v17,
              v16,
              v12,
              v15,
              1,
              a2);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v6 = 0;
        goto LABEL_14;
      }
      v11 = 2471LL;
    }
    else
    {
      v11 = 2453LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v10);
LABEL_14:
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v17);
    return v6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x98E,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
