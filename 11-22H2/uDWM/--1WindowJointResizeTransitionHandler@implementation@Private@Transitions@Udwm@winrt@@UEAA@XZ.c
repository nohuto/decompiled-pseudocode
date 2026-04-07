/*
 * XREFs of ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F9198
 * Callers:
 *     ??_EWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800F9404 (--_EWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?subtract_reference@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAIXZ @ 0x180055320 (-subtract_reference@-$root_implements@UWindowJointResizeTransitionHandler@implementation@Private.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F89F0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@U.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F8A40 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Ue.c)
 *     ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F9508 (-Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAX.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::~WindowJointResizeTransitionHandler(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>'};
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::Cleanup(this);
  std::_Deallocate<16,0>(
    *((void **)this + 17),
    (*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
    v2,
    *((_QWORD *)this + 15));
  std::_Deallocate<16,0>(*((void **)this + 15), 0x20uLL);
  std::_Deallocate<16,0>(*((void **)this + 9), (*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
    v3,
    *((_QWORD *)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x20uLL);
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((char *)this + 40));
  if ( *((_QWORD *)this + 4) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((char *)this + 32));
  winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>::subtract_reference((__int64)this + 16);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
