/*
 * XREFs of ?GetForDisplayRegion@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1805B3CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetForDisplayRegion@DesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x1805B3D24 (-GetForDisplayRegion@DesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Interna.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::GetForDisplayRegion(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  v7 = a1;
  *a3 = 0LL;
  try
  {
    v4 = (__int64 *)winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager::GetForDisplayRegion();
    v5 = *v4;
    *v4 = 0LL;
    *a3 = v5;
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
