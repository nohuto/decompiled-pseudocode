/*
 * XREFs of _RemoteSystemData::RemoteSystem::Serialize_RemoteSystemData::Details::ValueSetReader__::_1_::dtor$2 @ 0x180709C5F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RemoteSystemData::RemoteSystem::Serialize_RemoteSystemData::Details::ValueSetReader__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 80), a2);
}
