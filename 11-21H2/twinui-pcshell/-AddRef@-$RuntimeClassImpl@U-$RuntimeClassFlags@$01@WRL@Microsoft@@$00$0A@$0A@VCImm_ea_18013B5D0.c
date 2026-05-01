/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013B5D0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1801FCF60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_1801FCF60.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x1801FCF80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_1801FCF80.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x1801FCFA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_1801FCFA0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x1801FCFC0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_1801FCFC0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x1801FCFE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmB_ea_1801FCFE0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIEmulatedFullScreenManager@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180209790 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_180209790.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1802097B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1802097B0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIEmulatedFullScreenManager@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x1802097D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1802097D0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIEmulatedFullScreenManager@@VFtmBase@23@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x1802097F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1802097F0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIEmulatedFullScreenManager@@VFtmBase@23@@Details@WRL@Microsoft@@WHI@EAAKXZ @ 0x180209810 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_180209810.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1)
{
  unsigned int v1; // r9d
  signed __int32 v2; // r8d

  v1 = 0x7FFFFFFF;
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 156);
    if ( v2 == 0x7FFFFFFF )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 156), v2 + 1, v2) )
      return (unsigned int)(v2 + 1);
  }
  return v1;
}
