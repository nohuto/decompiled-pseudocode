/*
 * XREFs of ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AE424
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800ADBC0 (-CreateInstance@-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??0CAppTransitionManager@@QEAA@XZ @ 0x1800AE208 (--0CAppTransitionManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x1800B0444 (-RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800B0FBC (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014AD30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18014AD30.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804DF7C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1804DF7C8.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppTransitionManager,IUnknown,>(__int64 *a1)
{
  CAppTransitionManager *v2; // rax
  CAppTransitionManager *v3; // rdi
  int CanCastTo; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax

  *a1 = 0LL;
  v2 = (CAppTransitionManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CAppTransitionManager::CAppTransitionManager(v2);
    CanCastTo = CAppTransitionManager::RuntimeClassInitialize(v3);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        v6 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(v3);
        *a1 = v6;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::CanCastTo(
                      v3,
                      v5,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
