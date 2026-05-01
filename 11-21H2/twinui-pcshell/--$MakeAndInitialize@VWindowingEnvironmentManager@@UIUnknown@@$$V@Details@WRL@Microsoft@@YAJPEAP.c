/*
 * XREFs of ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015E4AC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18015E430 (-CreateInstance@-$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800E07D4 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014AA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18014AA80.c)
 *     ??0WindowingEnvironmentManager@@QEAA@XZ @ 0x18015E574 (--0WindowingEnvironmentManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18041B520 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_18041B520.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowingEnvironmentManager,IUnknown,>(void **a1)
{
  WindowingEnvironmentManager *v2; // rax
  WindowingEnvironmentManager *v3; // rsi
  int CanCastTo; // ebx
  const struct _GUID *v5; // rdx

  *a1 = 0LL;
  v2 = (WindowingEnvironmentManager *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = WindowingEnvironmentManager::WindowingEnvironmentManager(v2);
    CanCastTo = WindowingEnvironmentManager::RuntimeClassInitialize(v3);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v3;
        (*(void (__fastcall **)(WindowingEnvironmentManager *))(*(_QWORD *)v3 + 8LL))(v3);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v3, v5, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::CanCastTo((char *)v3 + 32);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::Release((__int64)v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
