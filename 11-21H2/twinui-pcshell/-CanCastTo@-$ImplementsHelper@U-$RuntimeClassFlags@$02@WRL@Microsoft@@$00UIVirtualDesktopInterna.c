/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DAA74
 * Callers:
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA5A0 (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtual.c)
 *     ?QueryInterface@VirtualDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA8B0 (-QueryInterface@VirtualDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180230640 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180230640.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r8d

  if ( *a2 == -355253816
    && a2[1] == *(_DWORD *)&GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2.Data2
    && a2[2] == *(_DWORD *)GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2.Data4
    && a2[3] == *(_DWORD *)&GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90);
    v7 = 0;
    if ( IsEqualGUID || InlineIsEqualGUID(v4, &GUID_00000003_0000_0000_c000_000000000046) )
      *v5 = v6;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
