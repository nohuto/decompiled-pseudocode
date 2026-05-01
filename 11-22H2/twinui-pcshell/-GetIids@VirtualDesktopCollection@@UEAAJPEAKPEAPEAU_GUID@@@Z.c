/*
 * XREFs of ?GetIids@VirtualDesktopCollection@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805449C0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1802A2930 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVir_ea_1802A2930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopCollection::GetIids(
        VirtualDesktopCollection *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_d6a0b580_90e9_5a9d_b7f0_671d8b195489;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_8ea78260_a133_5dea_a6b2_fb70c9265c04;
    v6[3] = GUID_505ba63e_e2d2_4612_bf9e_378fc429a542;
    v6[4] = GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
