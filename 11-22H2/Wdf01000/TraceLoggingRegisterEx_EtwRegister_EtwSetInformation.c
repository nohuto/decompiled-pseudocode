/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00B0350
 * Callers:
 *     RegisterTelemetryProvider @ 0x1C004DB60 (RegisterTelemetryProvider.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0086BDC (InitializeTelemetryAssertsKMWorkerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        _tlgProvider_t *hProvider,
        void (__fastcall *a2)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *pEnableCallback)
{
  unsigned __int64 *p_RegHandle; // rsi
  bool v4; // zf
  unsigned int v6; // edi
  _GUID providerId; // [rsp+20h] [rbp-28h] BYREF

  p_RegHandle = &hProvider->RegHandle;
  v4 = hProvider->RegHandle == 0;
  providerId = (_GUID)*((_OWORD *)hProvider->ProviderMetadataPtr - 1);
  if ( !v4 )
    __fastfail(5u);
  hProvider->EnableCallback = 0LL;
  hProvider->CallbackContext = 0LL;
  v6 = EtwRegister(&providerId, tlgEnableCallback, hProvider, p_RegHandle);
  if ( !v6 )
    EtwSetInformation(
      *p_RegHandle,
      EventProviderSetTraits,
      (PVOID)hProvider->ProviderMetadataPtr,
      *hProvider->ProviderMetadataPtr);
  return v6;
}
