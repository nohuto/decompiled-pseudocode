/*
 * XREFs of _CRTThreadManager::GetRTThreadManagerInstance_::_1_::dtor$0 @ 0x1400368B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRTThreadManager::GetRTThreadManagerInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::details::init_once_completer::~init_once_completer((wil::details::init_once_completer *)(a2 + 32));
}
