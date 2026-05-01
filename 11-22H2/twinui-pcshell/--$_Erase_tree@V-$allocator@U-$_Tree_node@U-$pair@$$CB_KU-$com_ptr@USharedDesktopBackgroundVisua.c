/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@1@@Z @ 0x180129030
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@1@@Z @ 0x180129030 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KU-$com_ptr@USharedDesktopBackgroundVisua.c)
 *     ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x180129594 (--1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1?$map@_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x1806E1AA8 (--1-$map@_KU-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@U-$less@_K@std@@V-$allocator@U.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KU?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@@std@@PEAX@1@@Z @ 0x180129030 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KU-$com_ptr@USharedDesktopBackgroundVisua.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = std::_Deallocate<16,0>(v6, 48LL) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,winrt::com_ptr<SharedDesktopBackgroundVisualHost>>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
    if ( v6[5] )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref();
  }
  return result;
}
