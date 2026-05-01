/*
 * XREFs of ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ @ 0x1800A38E4
 * Callers:
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800A37B4 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_adfd743de84c9ff652ba36d153c3725f___1_IInspectable___IInspectable___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_adfd743de84c9ff652ba36d153c3725f___1_IInspectable___IInspectable___ @ 0x1800A39D8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800A3A68 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::EnsureUnboostCallback(CSingleViewShellExperience *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rdi
  int AgileReference; // eax
  unsigned int v8; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12[2]; // [rsp+20h] [rbp-18h] BYREF
  CSingleViewShellExperience *v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = (char *)this + 152;
  if ( !*((_QWORD *)this + 19) )
  {
    v3 = *((_QWORD *)this + 12);
    *(_QWORD *)v12 = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v13 = this;
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_adfd743de84c9ff652ba36d153c3725f___1_IInspectable___IInspectable___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_adfd743de84c9ff652ba36d153c3725f___1_IInspectable___IInspectable___(
             v4,
             v12);
    else
      v5 = 0LL;
    v16 = v5;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v12);
    if ( v5 )
    {
      v15 = v2;
      v6 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v15);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
      AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, v5, v6);
      v8 = AgileReference;
      if ( AgileReference >= 0 )
      {
        v8 = 0;
LABEL_9:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        return v8;
      }
      v10 = (unsigned int)AgileReference;
      v11 = 1119LL;
    }
    else
    {
      v8 = -2147024882;
      v10 = 2147942414LL;
      v11 = 1118LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
  return 0LL;
}
