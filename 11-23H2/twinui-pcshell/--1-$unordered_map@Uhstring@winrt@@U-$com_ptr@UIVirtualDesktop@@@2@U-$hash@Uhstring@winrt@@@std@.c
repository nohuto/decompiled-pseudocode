/*
 * XREFs of ??1?$unordered_map@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@5@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@@std@@QEAA@XZ @ 0x18071D254
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetAppWindowRemoteDesktopProperties_::_1_::dtor$0 @ 0x1802B9BA1 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--GetAppWi_ea_1802B9BA1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18071CED0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDes.c)
 */

void __fastcall std::unordered_map<winrt::hstring,winrt::com_ptr<IVirtualDesktop>>::~unordered_map<winrt::hstring,winrt::com_ptr<IVirtualDesktop>>(
        __int64 *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)a1[3];
  v5 = v2;
  v4 = (a1[4] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v4 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v5, &v4);
    v2 = v5;
  }
  operator delete(v2);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
    v3,
    a1[1]);
  std::_Deallocate<16,0>((void *)a1[1], 0x20uLL);
}
