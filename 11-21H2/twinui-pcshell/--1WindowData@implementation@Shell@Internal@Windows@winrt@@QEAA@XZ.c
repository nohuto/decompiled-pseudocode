/*
 * XREFs of ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18001B538
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800197C0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18001B47C (-erase@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uh.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180180FA8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Inte.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B670 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@In.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B6C4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@U-$com_ptr@UTabProxyWindow.c)
 *     ??1?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x18001B718 (--1-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ.c)
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18001B7A8 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData(
        winrt::Windows::Internal::Shell::implementation::WindowData *this)
{
  __int64 **v2; // rdi
  __int64 *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 **)*((_QWORD *)this + 4);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v6 = *((_OWORD *)i + 1);
    winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTabProxyWindow(this, &v6);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 24));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 25));
  std::deque<winrt::guid>::~deque<winrt::guid>((char *)this + 152);
  std::_Deallocate<16,0>(
    *((_QWORD *)this + 14),
    (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>(
    v4,
    *((_QWORD *)this + 12));
  std::_Deallocate<16,0>(*((_QWORD *)this + 12), 40LL);
  std::_Deallocate<16,0>(*((_QWORD *)this + 6), (*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>(
    v5,
    *((_QWORD *)this + 4));
  std::_Deallocate<16,0>(*((_QWORD *)this + 4), 40LL);
  if ( *((_QWORD *)this + 2) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::WindowData *)((char *)this + 16));
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)this + 1);
}
