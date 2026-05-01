/*
 * XREFs of ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001BD0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWrite.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180533BC4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)a3 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(this, *((_DWORD *)this + 164))
    && *((_DWORD *)this + 157) != 512
    && !*((_BYTE *)this + 660) )
  {
    *(_DWORD *)a3 = 2;
  }
  v7 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   v6,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 16LL) )
  {
    v12 = *(_BYTE *)a3;
    v14 = 0x1000000LL;
    v13 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v8,
      (int)&unk_180864B55,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v14);
  }
  return 0LL;
}
