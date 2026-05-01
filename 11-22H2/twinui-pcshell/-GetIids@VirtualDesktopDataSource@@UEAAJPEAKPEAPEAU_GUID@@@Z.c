/*
 * XREFs of ?GetIids@VirtualDesktopDataSource@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18053F160
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802A2030 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopDataSource::GetIids(
        VirtualDesktopDataSource *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = _uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_025ba145_c552_5575_97e0_c4386a7dc346;
    v6[3] = GUID_7f331592_08ca_41ff_a77d_f2138806e857;
    v6[4] = GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc;
    v6[5] = GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
