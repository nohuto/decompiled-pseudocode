/*
 * XREFs of ?RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z @ 0x1800F9EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800F8A90 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSour.c)
 *     ??$as@UIUserResizeVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUserResizeVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F8C20 (--$as@UIUserResizeVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ??_G?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z @ 0x1800F9454 (--_G-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z.c)
 *     ?_Extract@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@AEBQEAUHWND__@@@Z @ 0x1800FA4F8 (-_Extract@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_polic.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::RegisterBitmap(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this,
        HWND a2,
        struct CBitmapSource *a3)
{
  __int64 v5; // rax
  void *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  CBaseObject *v10; // rcx
  HWND v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-40h] BYREF
  void *v13; // [rsp+38h] [rbp-30h]
  char v14; // [rsp+40h] [rbp-28h]

  v11 = a2;
  v5 = std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Extract(
         (char *)this + 112,
         &v11);
  v6 = (void *)v5;
  if ( v5 )
  {
    v13 = (void *)v5;
  }
  else
  {
    v13 = 0LL;
    v14 = 0;
  }
  if ( v5 && (v7 = *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(v5 + 24)) != 0LL )
  {
    winrt::impl::as<Udwm::Transitions::IUserResizeVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      v12,
      v7);
    v8 = v12[0];
    (*(void (__fastcall **)(__int64, struct CBitmapSource *))(*(_QWORD *)v12[0] + 56LL))(v12[0], a3);
    if ( v8 )
      winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(v12);
  }
  else
  {
    v9 = std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Try_emplace<HWND__ * const &,>(
           (float *)this + 12,
           (__int64)v12,
           (unsigned __int8 *)&v11);
    v10 = *(CBaseObject **)(*(_QWORD *)v9 + 24LL);
    *(_QWORD *)(*(_QWORD *)v9 + 24LL) = a3;
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v6 = v13;
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  if ( v6 )
  {
    std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>::`scalar deleting destructor'((__int64)v6 + 16);
    std::_Deallocate<16,0>(v6, 0x20uLL);
  }
}
