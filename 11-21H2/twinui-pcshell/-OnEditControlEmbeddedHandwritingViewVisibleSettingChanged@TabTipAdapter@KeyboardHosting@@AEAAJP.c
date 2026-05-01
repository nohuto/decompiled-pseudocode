/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x1800C12A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18011F52C (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  char v6; // di
  int v7; // ebx
  KeyboardHosting::TabTipAdapterPolicy *v8; // rcx
  bool v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rdx
  bool v15[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v17; // [rsp+70h] [rbp+18h] BYREF
  char v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v17 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v17);
  if ( v5 < 0 )
  {
    v14 = 660LL;
  }
  else
  {
    v6 = v17;
    v7 = 0;
    v8 = (KeyboardHosting::TabTipAdapterPolicy *)*((_QWORD *)this + 14);
    v9 = v17 != 0;
    *((_BYTE *)v8 + 503) = v17 != 0;
    if ( v9 && KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(v8) )
      v7 = 2;
    v10 = *(_QWORD *)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                        v8,
                        _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v10 > 5u
      && (*(_BYTE *)(v10 + 16) & 0x10) != 0
      && (*(_QWORD *)(v10 + 24) & 0x10LL) == *(_QWORD *)(v10 + 24) )
    {
      v18 = v7;
      v15[0] = v6 != 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v10,
        (int)&unk_1806BCB7A,
        v11,
        v12,
        (__int64)v15,
        (__int64)&v18);
    }
    if ( v7 != 2 )
      return 0LL;
    IhmNotification::SendKeyboardSetVisible(0LL, 0, v11);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
    if ( v5 >= 0 )
      return 0LL;
    v14 = 669LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
