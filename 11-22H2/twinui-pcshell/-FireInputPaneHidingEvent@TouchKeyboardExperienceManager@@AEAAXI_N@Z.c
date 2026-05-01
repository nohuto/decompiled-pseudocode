/*
 * XREFs of ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0
 * Callers:
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18050F280 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?FireInputPaneHiding@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x18050F840 (-FireInputPaneHiding@TouchKeyboardExperienceManager@@UEAAJIE@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180514BE8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001BD0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWrite.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x180510108 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1805239A8 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18052E3E8 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  const struct _tlgProvider_t *v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  __int64 v13; // rsi
  HWND v14; // rdi
  __int64 (__fastcall *v15)(__int64, HWND, _QWORD); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19[7]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v6 = TouchKeyboardExperienceTraceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 16LL) )
  {
    v19[0] = 0x1000000LL;
    v21 = a3;
    v22 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      (int)&unk_18085D4DF,
      v8,
      v9,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)v19);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 72LL))(
          *(_QWORD *)(*((_QWORD *)this + 73) + 48LL),
          0LL);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5E7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      v18);
  if ( a2 == *((_DWORD *)this + 153) )
  {
    FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow();
    Ancestor = GetAncestor(FocusedWindow, 2u);
    v13 = *((_QWORD *)this + 44);
    v14 = Ancestor;
    v15 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v13 + 32LL);
    PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(*((_QWORD *)this + 73));
    v17 = v15(v13, v14, PrimaryViewDisplayMode);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5EF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17,
        v18);
    *((_DWORD *)this + 155) = 2;
  }
  if ( !a3 )
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
      *((KeyboardHosting::TabTipAdapter **)this + 73),
      a2,
      0);
}
