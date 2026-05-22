/*
 * XREFs of _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$2 @ 0x1801F0A77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyProcessor::HotKeyProcessor_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::~map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>(*(_QWORD *)(a2 + 128) + 40LL);
}
