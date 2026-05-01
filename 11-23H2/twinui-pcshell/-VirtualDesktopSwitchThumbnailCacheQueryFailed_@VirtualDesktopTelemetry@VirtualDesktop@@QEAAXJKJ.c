/*
 * XREFs of ?VirtualDesktopSwitchThumbnailCacheQueryFailed_@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXJKJJ@Z @ 0x180612A1C
 * Callers:
 *     ??$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDesktop@@SAXAEAJAEAK$$QEAJ2@Z @ 0x18060A198 (--$VirtualDesktopSwitchThumbnailCacheQueryFailed@AEAJAEAKJJ@VirtualDesktopTelemetry@VirtualDeskt.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18047F8CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchThumbnailCacheQueryFailed_(
        VirtualDesktop::VirtualDesktopTelemetry *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  int v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  VirtualDesktop::VirtualDesktopTelemetry *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = this;
  v8 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u )
  {
    if ( tlgKeywordOn((__int64)v8, 0x200000000000LL) )
    {
      LODWORD(v16) = a5;
      v15 = 0x1000000LL;
      v12 = a4;
      v13 = a2;
      v14 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v9,
        byte_18086E3E6,
        v10,
        v11,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
}
