/*
 * XREFs of ??$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180169E4C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VViewPresentationMediator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180169DD0 (-CreateInstance@-$SimpleClassFactory@VViewPresentationMediator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1800D163C (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D8F0C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18013FE00.c)
 *     ?RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ @ 0x180169F1C (-RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewPresentationMediator,IUnknown,>(
        ViewPresentationMediator **a1)
{
  ViewPresentationMediator *v2; // rax
  ViewPresentationMediator *v3; // rsi
  int CanCastTo; // ebx
  int *v5; // rdx
  _DWORD *v7; // r11
  ViewPresentationMediator *v8; // r8
  _DWORD *v9; // r11

  *a1 = 0LL;
  v2 = (ViewPresentationMediator *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = ViewPresentationMediator::ViewPresentationMediator(v2);
  CanCastTo = ViewPresentationMediator::RuntimeClassInitialize(v3);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(ViewPresentationMediator *))(*(_QWORD *)v3 + 8LL))(v3);
      CanCastTo = 0;
      goto LABEL_5;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                  (__int64)v3,
                  v5,
                  a1);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v7, &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1) )
      {
        *a1 = v8;
        CanCastTo = 0;
LABEL_14:
        (*(void (__fastcall **)(ViewPresentationMediator *))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_5;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v8 + 8,
                    v9);
    }
    if ( CanCastTo < 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_5:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::Release((__int64)v3);
  return (unsigned int)CanCastTo;
}
