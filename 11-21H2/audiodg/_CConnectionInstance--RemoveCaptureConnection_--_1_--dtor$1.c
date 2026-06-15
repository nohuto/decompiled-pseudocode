/*
 * XREFs of _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x14005D7C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::RemoveCaptureConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 80));
}
