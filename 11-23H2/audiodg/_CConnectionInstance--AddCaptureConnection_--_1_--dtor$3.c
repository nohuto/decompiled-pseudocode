/*
 * XREFs of _CConnectionInstance::AddCaptureConnection_::_1_::dtor$3 @ 0x1400615F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionInstance::AddCaptureConnection_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 80));
}
