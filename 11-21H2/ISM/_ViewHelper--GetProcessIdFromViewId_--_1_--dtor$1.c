/*
 * XREFs of _ViewHelper::GetProcessIdFromViewId_::_1_::dtor$1 @ 0x18008AD2D
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180081924 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall ViewHelper::GetProcessIdFromViewId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)(a2 + 48));
  }
}
