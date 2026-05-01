/*
 * XREFs of _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$64 @ 0x1802641C9
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor_64(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x10u;
    winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Foundation::IUnknown *)(a2 + 56));
  }
}
