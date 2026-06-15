/*
 * XREFs of _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14003480F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::FixupStreamPipe_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CBridgeSinkProcessNode>::~CAutoPtr<CBridgeSinkProcessNode>(a2 + 200);
}
