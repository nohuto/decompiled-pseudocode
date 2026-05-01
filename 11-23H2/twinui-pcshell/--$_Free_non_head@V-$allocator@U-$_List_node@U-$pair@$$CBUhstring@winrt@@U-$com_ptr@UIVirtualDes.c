/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18071CED0
 * Callers:
 *     ??1?$list@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18071D1A4 (--1-$list@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@@std@@V-$allocator@U-$pair.c)
 *     ??1?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@QEAA@XZ @ 0x18071D254 (--1-$unordered_map@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@U-$hash@Uhstring@winrt@@@std@.c)
 *     ?_Destroy@?$_Ref_count_obj2@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071D890 (-_Destroy@-$_Ref_count_obj2@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt.c)
 *     ?GetRemoteDesktopConnectionState@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AW4CloudPCState@3456@AEBUguid@6@@Z @ 0x180731D90 (-GetRemoteDesktopConnectionState@SwitchConnectionHandler@implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rbx
  void *v3; // rsi

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *(void **)v2;
      if ( *((_QWORD *)v2 + 3) )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v2 + 3);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v2 + 2);
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
