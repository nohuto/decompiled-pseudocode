/*
 * XREFs of _CAudioProcessor::CAudioProcessor_::_1_::dtor$2 @ 0x140034441
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::CAudioProcessor_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAtlList<CAPONode *,CAPONodeTraits>::~CAtlList<CAPONode *,CAPONodeTraits>(*(_QWORD *)(a2 + 64) + 128LL);
}
