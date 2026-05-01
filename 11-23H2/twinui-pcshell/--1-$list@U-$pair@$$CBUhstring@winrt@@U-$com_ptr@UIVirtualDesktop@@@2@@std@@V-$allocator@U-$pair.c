/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18071D1A4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetAll_::_1_::dtor$5 @ 0x1802B9BB3 (_winrt--Windows--Internal--Shell--implementation--RemoteDesktopCollection--GetAll_--_1_--dtor$5.c)
 *     _std::_Ref_count_obj2_winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection_::_Ref_count_obj2_winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection____::_1_::dtor$8 @ 0x1802C5384 (_std--_Ref_count_obj2_winrt--Windows--Internal--Shell--implementation--RemoteDeskto_ea_1802C5384.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18071CED0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDes.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>::~list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x20uLL);
}
