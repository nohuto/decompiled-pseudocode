/*
 * XREFs of _std::vector_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager__std::allocator_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager_____::_Emplace_reallocate_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager____::_1_::catch$2 @ 0x1806814A2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180681080 (--$_Destroy_range@V-$allocator@U-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Interna.c)
 */

void __fastcall __noreturn std::vector_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager__std::allocator_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager_____::_Emplace_reallocate_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
