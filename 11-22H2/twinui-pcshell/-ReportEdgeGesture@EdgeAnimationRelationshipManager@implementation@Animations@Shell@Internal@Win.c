/*
 * XREFs of ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180760DF8
 * Callers:
 *     ?ReportEdgeGesture@?$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UIEdgeAnimationRelationshipManager@34567@@impl@winrt@@UEAAHHUstruct_WindowsUdk_UI_Input_GestureAnimationData@23@UPoint@Foundation@Windows@3@@Z @ 0x180760DA0 (-ReportEdgeGesture@-$produce@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@I.c)
 * Callees:
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005A3A4 (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     ??$_Find_last@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@1@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@_K@Z @ 0x1800939C0 (--$_Find_last@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@-$_Hash@V-$_Umap_traits@W.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x180760A24 (-AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180761090 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x1807614AC (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 *     ?get@?$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180761500 (-get@-$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportEdgeGesture(
        __int64 a1,
        int a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 appended; // rax
  unsigned int *v9; // rdi
  unsigned int *v10; // r14
  __int64 *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h]
  __int64 *v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  v17 = a2;
  v12 = a4;
  winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get(a1 + 176, &v13);
  v7 = v13;
  if ( v13 )
  {
    appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v17, 4uLL);
    std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::hash<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>,std::equal_to<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>>,0>>::_Find_last<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>(
      (_QWORD *)(a1 + 24),
      &v14,
      &v17,
      appended);
    if ( !v15 )
    {
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      __debugbreak();
      winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::ReportEdgeGesture_::_1_::dtor_0();
      return;
    }
    v9 = *(unsigned int **)(v15 + 24);
    v10 = *(unsigned int **)(v15 + 32);
    while ( v9 != v10 )
    {
      if ( ((*v9 - 2) & 0xFFFFFFFB) == 0 )
      {
        LODWORD(v16) = 16;
        v11 = (__int64 *)std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
                           a1 + 88,
                           &v16);
        if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility(v11) )
        {
          winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::SetupTaskbarOffsetTrigger(
            a1,
            a3,
            *v9,
            v12);
          break;
        }
      }
      v16 = v7;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::AnimateViewHelper(
        a1,
        &v16,
        v9++,
        a3,
        &v12);
    }
  }
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
}
