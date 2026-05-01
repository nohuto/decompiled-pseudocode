/*
 * XREFs of ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180529200
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1802DCF84 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180528520 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
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

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData(
        KeyboardHosting::TabTipAdapter *this,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *); // rbx
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  bool v17; // al
  int v19; // [rsp+20h] [rbp-40h]
  _BYTE v20[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-1Ch] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v24; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v26; // [rsp+A0h] [rbp+40h] BYREF

  KeyboardHosting::TabTipAdapter::LogForegroundAppInfo((__int64)this, a3);
  if ( !a3 )
  {
    v8 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(this);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9B6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
  }
  v9 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v20[0] = 0;
    v26 = 0;
    v22 = 0;
    v23 = 0LL;
    v11 = *((_QWORD *)this + 15);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v11 + 304LL);
    v24 = &v23;
    v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *(&v24);
    v14 = v12(v11, a3, v20, &v26, &v22, v13);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v21 = 0;
      if ( KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists((__int64)this, a3, (__int64)&v21) )
      {
        v17 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown(this, v21);
        KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(this, v21, v17);
      }
      LOBYTE(v19) = v26;
      LOBYTE(v16) = v20[0];
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**((_QWORD **)this + 4)
                                                                                                + 560LL))(
              *((_QWORD *)this + 4),
              *a2,
              a4,
              v16,
              v19,
              1,
              a3);
      v10 = v14;
      if ( v14 >= 0 )
      {
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v23);
        v10 = 0;
        goto LABEL_14;
      }
      v15 = 2527LL;
    }
    else
    {
      v15 = 2496LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v23);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9BA,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(a2);
  return v10;
}
