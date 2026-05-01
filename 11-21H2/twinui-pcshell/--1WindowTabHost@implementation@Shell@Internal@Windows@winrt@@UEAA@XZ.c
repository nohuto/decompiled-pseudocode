/*
 * XREFs of ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800F4098
 * Callers:
 *     ??1?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800CC020 (--1-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@w.c)
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::WindowTabHost_::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::WindowTabHost__::_1_::dtor$0 @ 0x18021C271 (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--implementation--WindowTabHo.c)
 *     ??_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180577D28 (--_EWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001A20C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180177748 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180180FA8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Inte.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::~WindowTabHost(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rbx

  v2 = (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 824);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 102) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 816));
  if ( *((_QWORD *)this + 99) )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)this + 99);
  std::_Deallocate<16,0>(
    *((_QWORD *)this + 92),
    (*((_QWORD *)this + 93) - *((_QWORD *)this + 92)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  v3 = (_QWORD **)*((_QWORD *)this + 90);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, 40LL);
      v4 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((_QWORD *)this + 90), 40LL);
  std::deque<unsigned __int64>::~deque<unsigned __int64>((char *)this + 672);
  std::_Deallocate<16,0>(
    *((_QWORD *)this + 79),
    (*((_QWORD *)this + 80) - *((_QWORD *)this + 79)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
    v5,
    *((_QWORD *)this + 77));
  std::_Deallocate<16,0>(*((_QWORD *)this + 77), 232LL);
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 472));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)this + 472);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 58);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 57);
  if ( *((_QWORD *)this + 54) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 432));
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 304));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)this + 304);
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 176));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)this + 176);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 21);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 20);
  if ( *((_QWORD *)this + 19) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 19);
  if ( *((_QWORD *)this + 18) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 144));
  if ( *((_QWORD *)this + 17) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)this + 17);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 48));
}
