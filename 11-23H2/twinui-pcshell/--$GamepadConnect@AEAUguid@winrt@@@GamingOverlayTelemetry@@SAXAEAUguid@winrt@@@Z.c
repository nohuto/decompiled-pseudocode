/*
 * XREFs of ??$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z @ 0x1803F3DDC
 * Callers:
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x180407698 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803F4930 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?get@?$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ@Z @ 0x18040AE7C (-get@-$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ.c)
 */

char __fastcall GamingOverlayTelemetry::GamepadConnect<winrt::guid &>(__int128 *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int128 v7; // xmm0
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+38h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  v2 = wil::details::static_lazy<GamingOverlayTelemetry>::get(
         a1,
         _lambda_8eb181b840f08d5270baf7b0794c9c9c_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v7 = *a1;
      v9 = 0x2000000LL;
      v10 = &v11;
      v11 = v7;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
                     v4,
                     (unsigned int)&unk_180848B5D,
                     v5,
                     v6,
                     (__int64)&v10,
                     (__int64)&v9);
    }
  }
  return v2;
}
