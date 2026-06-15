/*
 * XREFs of _CProcessingData::CopyAPOList_::_1_::dtor$20 @ 0x140037DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessingData::CopyAPOList_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(*(_QWORD *)(a2 + 184) + 40LL));
}
