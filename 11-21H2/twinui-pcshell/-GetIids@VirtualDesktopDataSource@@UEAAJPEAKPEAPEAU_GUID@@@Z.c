/*
 * XREFs of ?GetIids@VirtualDesktopDataSource@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18048A820
 * Callers:
 *     <none>
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
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = _uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_7f331592_08ca_41ff_a77d_f2138806e857;
    v6[3] = GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc;
    v6[4] = GUID_cd403e52_deed_4c13_b437_b98380f2b1e8;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
