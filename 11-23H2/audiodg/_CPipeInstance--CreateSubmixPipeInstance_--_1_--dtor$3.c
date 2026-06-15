/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x140034AAB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CBridgeSinkProcessNode>::~CAutoPtr<CBridgeSinkProcessNode>(a2 + 128);
}
