/*
 * XREFs of ?OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180472C1C
 * Callers:
 *     ?OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180461CB0 (-OnAccessibilityKeyboardRequestHide@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18005A314 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18011F150 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAccessibilityKeyboardRequestHide(
        KeyboardHosting::TabTipAdapter *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(*((_QWORD *)this + 14) + 513LL) = 0;
  v2 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 16LL) )
  {
    v10 = 0;
    LOBYTE(v11) = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v4,
      (int)&unk_1806BCF34,
      v3,
      v5,
      (__int64)&v11,
      (__int64)&v10);
  }
  *((_BYTE *)this + 488) = 0;
  v6 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0LL, v3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA1,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
