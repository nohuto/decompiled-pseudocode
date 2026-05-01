/*
 * XREFs of _StartupNotification::GetFileDescription_::_1_::dtor$1 @ 0x180586880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupNotification::GetFileDescription_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::filesystem::path::~path(a2 + 160);
}
