/*
 * XREFs of _Init_thread_header @ 0x18004ADD0
 * Callers:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180003F34 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180014E30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001B208 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180040EF8 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x180084EB0 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800D4E2C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x1800F9B20 (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x1800FB19C (-Initialize@RotationWatcher@@SAJXZ.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x18019DDC4 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x18019EA44 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     _Init_thread_wait @ 0x18004AE94 (_Init_thread_wait.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait(0x64u);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
