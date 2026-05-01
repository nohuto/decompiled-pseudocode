/*
 * XREFs of ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022FD30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18011F52C (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  bool v4; // di
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  v4 = a2 != 0;
  *((_BYTE *)this + 503) = a2 != 0;
  if ( a2 && KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown((RTL_SRWLOCK *)this) )
    *(_DWORD *)a3 = 2;
  v5 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)this,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 5u
    && (*(_BYTE *)(v5 + 16) & 0x10) != 0
    && (*(_QWORD *)(v5 + 24) & 0x10LL) == *(_QWORD *)(v5 + 24) )
  {
    v10 = *(_BYTE *)a3;
    v9 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v5,
      (int)&unk_1806BCB7A,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v10);
  }
  return 0LL;
}
