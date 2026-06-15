/*
 * XREFs of _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$2 @ 0x14003536B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioProcessor::AddAPOOutputConnection_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 64));
}
