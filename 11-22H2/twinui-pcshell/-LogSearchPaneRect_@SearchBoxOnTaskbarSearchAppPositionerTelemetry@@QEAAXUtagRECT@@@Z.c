/*
 * XREFs of ?LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z @ 0x18047FB3C
 * Callers:
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x18047F88C (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18047F8CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect_(
        SearchBoxOnTaskbarSearchAppPositionerTelemetry *this,
        struct tagRECT *a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  LONG left; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  SearchBoxOnTaskbarSearchAppPositionerTelemetry *v9; // [rsp+70h] [rbp+8h] BYREF
  LONG right; // [rsp+80h] [rbp+18h] BYREF
  LONG top; // [rsp+88h] [rbp+20h] BYREF

  v9 = this;
  v3 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      LODWORD(v9) = a2->bottom;
      right = a2->right;
      top = a2->top;
      left = a2->left;
      v8 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        byte_180856191,
        v5,
        v6,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
