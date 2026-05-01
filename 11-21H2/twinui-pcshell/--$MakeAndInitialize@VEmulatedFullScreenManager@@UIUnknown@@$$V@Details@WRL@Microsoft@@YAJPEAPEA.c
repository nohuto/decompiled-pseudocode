/*
 * XREFs of ??$MakeAndInitialize@VEmulatedFullScreenManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ACD8C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VEmulatedFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800ACD10 (-CreateInstance@-$SimpleClassFactory@VEmulatedFullScreenManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?RuntimeClassInitialize@EmulatedFullScreenManager@@QEAAJXZ @ 0x1800AEFA0 (-RuntimeClassInitialize@EmulatedFullScreenManager@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIEmulatedFullScreenManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800AF0E8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIEmulatedFullScreenMan.c)
 *     ??0EmulatedFullScreenManager@@QEAA@XZ @ 0x1800D1EF0 (--0EmulatedFullScreenManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180136EA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<EmulatedFullScreenManager,IUnknown,>(
        EmulatedFullScreenManager **a1)
{
  EmulatedFullScreenManager *v2; // rax
  EmulatedFullScreenManager *v3; // rdi
  int CanCastTo; // ebx
  int *v5; // rdx
  _DWORD *v7; // r11
  EmulatedFullScreenManager *v8; // r8
  __int64 v9; // r11

  *a1 = 0LL;
  v2 = (EmulatedFullScreenManager *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = EmulatedFullScreenManager::EmulatedFullScreenManager(v2);
  CanCastTo = EmulatedFullScreenManager::RuntimeClassInitialize(v3);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(EmulatedFullScreenManager *))(*(_QWORD *)v3 + 8LL))(v3);
      CanCastTo = 0;
      goto LABEL_5;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                  (__int64)v3,
                  v5,
                  a1);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v7, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db) )
      {
        *a1 = v8;
        CanCastTo = 0;
LABEL_14:
        (*(void (__fastcall **)(EmulatedFullScreenManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_5;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEmulatedFullScreenManager,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v8 + 8,
                    v9,
                    a1);
    }
    if ( CanCastTo < 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_5:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::Release(v3);
  return (unsigned int)CanCastTo;
}
