/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::dtor$9 @ 0x1800F65BF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180028970 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 48));
  }
}
