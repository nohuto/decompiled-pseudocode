/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B1484
 * Callers:
 *     ?VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B12C4 (-VirtualDesktopPerMonitorCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIThumbnailDeviceSourc.c)
 *     ?QueryInterface@VirtualDesktopPerMonitorCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B13B0 (-QueryInterface@VirtualDesktopPerMonitorCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopPerMonitorCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180230530 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180230530.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)a2 == -851427758
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_cd403e52_deed_4c13_b437_b98380f2b1e8.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0LL;
  }
  else
  {
    result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    if ( (_DWORD)result == -2147467262 )
      return 2147500034LL;
  }
  return result;
}
