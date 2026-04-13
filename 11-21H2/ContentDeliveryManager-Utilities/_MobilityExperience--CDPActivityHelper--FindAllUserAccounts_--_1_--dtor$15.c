/*
 * XREFs of _MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor$15 @ 0x1800F1172
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180028970 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x20u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 104));
  }
}
