/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110A5C
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801109E0 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIVirtualDesktop@@UIWeakReferenceSource@@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18010EBF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIVirtu.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1801128B8 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 *     ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1801130D8 (-Attach@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z.c)
 *     ??0CVirtualDesktop@@QEAA@XZ @ 0x18011310C (--0CVirtualDesktop@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180134EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$R.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop_CreateInstance(
        struct IVirtualDesktopVisibilityPolicy *a1,
        struct IVirtualDesktopLock *a2,
        struct _GUID *a3,
        CVirtualDesktop **a4)
{
  CVirtualDesktop *v8; // rbx
  CVirtualDesktop *v9; // rax
  CVirtualDesktop *v10; // rax
  int v11; // eax
  int CanCastTo; // edi
  _DWORD *v13; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVirtualDesktop *v18; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v9 = (CVirtualDesktop *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = CVirtualDesktop::CVirtualDesktop(v9);
    Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach(&v18, v10);
    v8 = v18;
  }
  if ( !v8 )
  {
    CanCastTo = -2147024882;
    v15 = 214LL;
LABEL_18:
    v16 = (unsigned int)CanCastTo;
    goto LABEL_19;
  }
  v11 = CVirtualDesktop::RuntimeClassInitialize(v8, a1, a2);
  CanCastTo = v11;
  if ( v11 >= 0 )
  {
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a4 = v8;
      (*(void (__fastcall **)(CVirtualDesktop *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,IVirtualDesktop,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v8,
                    a3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(CVirtualDesktop *))(*(_QWORD *)*a4 + 8LL))(*a4);
    }
    if ( CanCastTo >= 0 )
    {
      CanCastTo = 0;
      goto LABEL_11;
    }
    v15 = 216LL;
    goto LABEL_18;
  }
  v16 = (unsigned int)v11;
  v15 = 215LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)v16);
LABEL_11:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>::Release(v8);
  return (unsigned int)CanCastTo;
}
