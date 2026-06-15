/*
 * XREFs of _CConnectionNode::CConnectionNode_::_1_::dtor$0 @ 0x140034E91
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnectionNode::CConnectionNode_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(*(_QWORD *)(a2 + 48) + 112LL));
}
