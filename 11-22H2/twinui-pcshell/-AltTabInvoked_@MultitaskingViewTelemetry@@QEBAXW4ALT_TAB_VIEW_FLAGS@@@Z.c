/*
 * XREFs of ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x180552FD8
 * Callers:
 *     ??$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x180552C1C (--$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18006B9A4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

char __fastcall MultitaskingViewTelemetry::AltTabInvoked_(__int64 a1, char a2)
{
  _QWORD *v3; // rax
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  bool v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = a1;
  v3 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v3 )
    {
      LOBYTE(v9) = a2 & 1;
      v10 = (a2 & 2) != 0;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     v5,
                     (int)&unk_180865E65,
                     v6,
                     v7,
                     (__int64)&v10,
                     (__int64)&v9);
    }
  }
  return (char)v3;
}
