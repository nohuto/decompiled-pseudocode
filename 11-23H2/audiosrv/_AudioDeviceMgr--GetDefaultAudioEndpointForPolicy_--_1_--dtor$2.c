/*
 * XREFs of _AudioDeviceMgr::GetDefaultAudioEndpointForPolicy_::_1_::dtor$2 @ 0x1801636B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::GetDefaultAudioEndpointForPolicy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComHeapPtr<PacketSizeConstraints>::~CComHeapPtr<PacketSizeConstraints>((LPVOID *)(a2 + 80));
}
