/*
 * XREFs of ??$ShimTemporaryShortcutDeleted@PEAG@PinManagerTelemetry@@SAX$$QEAPEAG@Z @ 0x18069AB18
 * Callers:
 *     ??R_lambda_64a0ca36886088acec354edd3b9eaf9e_@@QEBA@XZ @ 0x18024FE10 (--R_lambda_64a0ca36886088acec354edd3b9eaf9e_@@QEBA@XZ.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

int __fastcall PinManagerTelemetry::ShimTemporaryShortcutDeleted<unsigned short *>(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // r9
  _DWORD *v4; // rcx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = wil::details::static_lazy<PinManagerTelemetry>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v2[1];
  if ( *v4 > 5u )
  {
    v7 = *a1;
    v6 = 0x1000000LL;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                    (__int64)v4,
                    (unsigned __int8 *)dword_180876CA5,
                    0LL,
                    v3,
                    (const WCHAR **)&v7,
                    (__int64)&v6);
  }
  return (int)v2;
}
