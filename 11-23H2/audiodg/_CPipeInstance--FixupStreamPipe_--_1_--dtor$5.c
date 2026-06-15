/*
 * XREFs of _CPipeInstance::FixupStreamPipe_::_1_::dtor$5 @ 0x140034869
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::FixupStreamPipe_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 200));
}
