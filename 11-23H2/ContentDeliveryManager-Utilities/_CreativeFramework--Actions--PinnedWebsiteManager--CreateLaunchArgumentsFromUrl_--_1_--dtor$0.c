/*
 * XREFs of _CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl_::_1_::dtor$0 @ 0x1800DC473
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002BC50 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::Wrappers::HString::~HString(*(HSTRING **)(a2 + 48));
  }
}
