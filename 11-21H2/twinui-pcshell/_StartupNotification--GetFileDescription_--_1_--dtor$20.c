/*
 * XREFs of _StartupNotification::GetFileDescription_::_1_::dtor$20 @ 0x18058688C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupNotification::GetFileDescription_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  cereal::detail::OutputArchiveBase::~OutputArchiveBase(*(cereal::detail::OutputArchiveBase **)(a2 + 96));
}
