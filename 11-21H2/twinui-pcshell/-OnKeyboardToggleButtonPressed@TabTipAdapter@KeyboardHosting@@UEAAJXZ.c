/*
 * XREFs of ?OnKeyboardToggleButtonPressed@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180475F00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnKeyboardToggleButtonPressed(KeyboardHosting::TabTipAdapter *this)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  char v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(*((_QWORD *)this + 13) + 512LL) = 1;
  v2 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 16LL) )
  {
    v8 = 0;
    v9 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v3,
      (int)&unk_1806BCF9E,
      v4,
      v5,
      (__int64)&v9,
      (__int64)&v8);
  }
  v6 = *((_DWORD *)this + 84);
  if ( v6 )
  {
    if ( v6 == 1 )
      *((_DWORD *)this + 84) = 0;
  }
  else
  {
    *((_DWORD *)this + 84) = 1;
  }
  return 0LL;
}
