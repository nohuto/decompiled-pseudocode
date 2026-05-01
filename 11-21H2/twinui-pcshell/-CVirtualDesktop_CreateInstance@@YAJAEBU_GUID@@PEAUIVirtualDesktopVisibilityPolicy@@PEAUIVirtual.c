/*
 * XREFs of ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x180110B68
 * Callers:
 *     ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180110A20 (-CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIVirtualDesktop@@UIWeakReferenceSource@@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18010EBF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UIVirtu.c)
 *     ?RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1801128B8 (-RuntimeClassInitialize@CVirtualDesktop@@QEAAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualD.c)
 *     ?Attach@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z @ 0x1801130D8 (-Attach@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@QEAAXPEAVCVirtualDesktop@@@Z.c)
 *     ??0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z @ 0x18011318C (--0CVirtualDesktop@@QEAA@AEBU_GUID@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180134EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$R.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktop_CreateInstance(
        const struct _GUID *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopLock *a3,
        struct _GUID *a4,
        void **a5)
{
  void **v9; // rsi
  CVirtualDesktop *v10; // rbx
  CVirtualDesktop *v11; // rax
  CVirtualDesktop *v12; // rax
  int v13; // eax
  int CanCastTo; // edi
  _DWORD *v15; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = a5;
  *a5 = 0LL;
  v10 = 0LL;
  a5 = 0LL;
  v11 = (CVirtualDesktop *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = CVirtualDesktop::CVirtualDesktop(v11, a1);
    Microsoft::WRL::ComPtr<CVirtualDesktop>::Attach(&a5, v12);
    v10 = (CVirtualDesktop *)a5;
  }
  if ( !v10 )
  {
    CanCastTo = -2147024882;
    v17 = 231LL;
LABEL_18:
    v18 = (unsigned int)CanCastTo;
    goto LABEL_19;
  }
  v13 = CVirtualDesktop::RuntimeClassInitialize(v10, a2, a3);
  CanCastTo = v13;
  if ( v13 >= 0 )
  {
    *v9 = 0LL;
    if ( InlineIsEqualGUID(a4, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v15, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v9 = v10;
      (*(void (__fastcall **)(CVirtualDesktop *))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,IVirtualDesktop,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v10,
                    a4);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
    }
    if ( CanCastTo >= 0 )
    {
      CanCastTo = 0;
      goto LABEL_11;
    }
    v17 = 233LL;
    goto LABEL_18;
  }
  v18 = (unsigned int)v13;
  v17 = 232LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
    (const char *)v18);
LABEL_11:
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>::Release(v10);
  return (unsigned int)CanCastTo;
}
