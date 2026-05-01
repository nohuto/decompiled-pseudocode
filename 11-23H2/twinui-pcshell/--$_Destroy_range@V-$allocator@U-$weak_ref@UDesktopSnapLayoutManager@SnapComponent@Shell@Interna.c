/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180681080
 * Callers:
 *     ??1ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801C60A4 (--1ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _std::vector_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager__std::allocator_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager_____::_Emplace_reallocate_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager____::_1_::catch$2 @ 0x1806814A2 (_std--vector_winrt--weak_ref_winrt--Windows--Internal--Shell--SnapComponent--DesktopSnapLayoutMa.c)
 *     ??$_Uninitialized_move@PEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180681DC4 (--$_Uninitialized_move@PEAU-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Win.c)
 *     ?_Change_array@?$vector@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXQEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@_K1@Z @ 0x180685BC4 (-_Change_array@-$vector@U-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windo.c)
 *     ?erase@?$vector@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@0@Z @ 0x180686088 (-erase@-$vector@U-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
