/*
 * XREFs of wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___ @ 0x1801B3618
 * Callers:
 *     ?GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0005@@@Z @ 0x18001DF00 (-GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 *     GetWin32AppId @ 0x18001E1BC (GetWin32AppId.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    free(**(void ***)a1);
  }
}
