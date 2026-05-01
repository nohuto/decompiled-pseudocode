/*
 * XREFs of ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180064E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180065890 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDeferredFocusNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B18DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDeferredFocusNotification@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  char v7; // bl
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int Focus; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  void (*v21)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v22; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+30h] [rbp-28h] BYREF
  char v24; // [rsp+31h] [rbp-27h] BYREF
  bool v25[2]; // [rsp+32h] [rbp-26h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-24h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  LPINIT_ONCE v28; // [rsp+40h] [rbp-18h] BYREF
  int v29; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v23 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlFocusChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v23);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      v22);
    return v6;
  }
  v7 = v23;
  if ( v23 )
  {
    LOBYTE(v5) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
      v5);
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDeferredFocusNotification>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_RemoveDeferredFocusNotification>::GetImpl'::`2'::impl,
      v8);
    v9 = *((_BYTE *)this + 533);
    *((_BYTE *)this + 533) = 1;
    if ( !v9 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus(this);
      v17 = Focus;
      if ( Focus < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F7,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)Focus,
          v22);
        return v17;
      }
    }
    v7 = v23;
  }
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    LOBYTE(v5) = v7 != 0;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v5);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x225,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v18,
        v22);
      return v19;
    }
    v7 = v23;
  }
  v11 = *((_QWORD *)this + 14);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v28 = &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4500;
    qword_1807B4500 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4518 = (__int64)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v29 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v28, v20, v21);
  }
  v14 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v14 > 5u
    && (*(_BYTE *)(v14 + 16) & 0x10) != 0
    && (*(_QWORD *)(v14 + 24) & 0x10LL) == *(_QWORD *)(v14 + 24) )
  {
    v24 = 0;
    v25[0] = v7 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v14,
      (int)&unk_1806BCC47,
      v12,
      v13,
      (__int64)v25,
      (__int64)&v24);
  }
  *(_BYTE *)(v11 + 504) = v7 != 0;
  *(_BYTE *)(v11 + 460) = 0;
  return 0LL;
}
