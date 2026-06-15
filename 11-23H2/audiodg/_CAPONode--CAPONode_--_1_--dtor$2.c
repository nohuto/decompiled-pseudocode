/*
 * XREFs of _CAPONode::CAPONode_::_1_::dtor$2 @ 0x1400351DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPONode::CAPONode_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(*(_QWORD *)(a2 + 48) + 32LL));
}
