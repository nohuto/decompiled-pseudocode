/*
 * XREFs of _CreativeFramework::Actions::IsMsaConnected_::_1_::dtor$27 @ 0x1800F442C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180028970 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::IsMsaConnected_::_1_::dtor_27(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~0x40u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 48));
  }
}
