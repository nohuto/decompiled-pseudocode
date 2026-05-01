/*
 * XREFs of ??$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800B5CBC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B5C40 (-CreateInstance@-$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@U.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?RuntimeClassInitialize@CPerMonitorDesktopVisibilityService@@QEAAJXZ @ 0x1800B5D8C (-RuntimeClassInitialize@CPerMonitorDesktopVisibilityService@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B7008 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFullScreenPositionerN.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1800D13F8 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180136EA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPerMonitorDesktopVisibilityService,IUnknown,>(
        CPerMonitorDesktopVisibilityService **a1)
{
  CPerMonitorDesktopVisibilityService *v2; // rax
  CPerMonitorDesktopVisibilityService *v3; // rsi
  int CanCastTo; // ebx
  int *v5; // rdx
  _DWORD *v7; // r11
  CPerMonitorDesktopVisibilityService *v8; // r8
  __int64 v9; // r11

  *a1 = 0LL;
  v2 = (CPerMonitorDesktopVisibilityService *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService(v2);
  CanCastTo = CPerMonitorDesktopVisibilityService::RuntimeClassInitialize(v3);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(CPerMonitorDesktopVisibilityService *))(*(_QWORD *)v3 + 8LL))(v3);
      CanCastTo = 0;
      goto LABEL_5;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                  (__int64)v3,
                  v5,
                  a1);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v7, &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84) )
      {
        *a1 = v8;
        CanCastTo = 0;
LABEL_14:
        (*(void (__fastcall **)(CPerMonitorDesktopVisibilityService *))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_5;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::CanCastTo(
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
