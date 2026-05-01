/*
 * XREFs of ?LogSearchPaneRect_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUtagRECT@@@Z @ 0x1801A6498
 * Callers:
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1801A4EBC (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001AA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect_(
        SearchBoxOnTaskbarSearchAppPositionerTelemetry *this,
        struct tagRECT *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  LONG bottom; // ecx
  LONG left; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  SearchBoxOnTaskbarSearchAppPositionerTelemetry *v9; // [rsp+70h] [rbp+8h] BYREF
  LONG right; // [rsp+80h] [rbp+18h] BYREF
  LONG top; // [rsp+88h] [rbp+20h] BYREF

  v9 = this;
  v3 = SearchAppLauncherLogging::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      bottom = a2->bottom;
      right = a2->right;
      top = a2->top;
      left = a2->left;
      LODWORD(v9) = bottom;
      v8 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v5,
        (int)&unk_1806ADE08,
        v4,
        v5,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
