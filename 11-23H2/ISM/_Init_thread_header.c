/*
 * XREFs of _Init_thread_header @ 0x180056C10
 * Callers:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009920 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001C204 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001F960 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x180039408 (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x18005BA48 (-CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z.c)
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009BF28 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800EE858 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180115B10 (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x1801171A8 (-Initialize@RotationWatcher@@SAJXZ.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801BC044 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801BCD64 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     _Init_thread_wait @ 0x180056CD4 (_Init_thread_wait.c)
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
