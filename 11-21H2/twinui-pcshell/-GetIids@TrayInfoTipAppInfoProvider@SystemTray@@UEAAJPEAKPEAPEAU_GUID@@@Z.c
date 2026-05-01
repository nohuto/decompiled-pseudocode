/*
 * XREFs of ?GetIids@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180490B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::GetIids(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_535aa053_78a8_438b_a1c9_94dcad4a6a67;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
