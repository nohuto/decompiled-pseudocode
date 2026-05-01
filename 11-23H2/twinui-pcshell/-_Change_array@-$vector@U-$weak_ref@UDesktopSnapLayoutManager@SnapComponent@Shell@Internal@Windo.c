/*
 * XREFs of ?_Change_array@?$vector@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXQEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@_K1@Z @ 0x180685BC4
 * Callers:
 *     ??$_Emplace_reallocate@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$vector@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAU23@$$QEAU23@@Z @ 0x180681390 (--$_Emplace_reallocate@U-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Window.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180681080 (--$_Destroy_range@V-$allocator@U-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Interna.c)
 */

__int64 __fastcall std::vector<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *(__int64 **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>>>(
      v6,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
