/*
 * XREFs of _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$16 @ 0x180585EB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  std::filesystem::path::~path(a2 + 200);
}
