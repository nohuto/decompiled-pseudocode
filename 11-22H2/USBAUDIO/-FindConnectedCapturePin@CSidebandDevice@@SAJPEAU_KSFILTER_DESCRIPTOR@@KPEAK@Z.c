/*
 * XREFs of ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D020
 * Callers:
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000F1E8 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 * Callees:
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0011EAC (-TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECT.c)
 */

__int64 __fastcall CSidebandDevice::FindConnectedCapturePin(
        struct _KSFILTER_DESCRIPTOR *a1,
        unsigned int a2,
        unsigned int *a3)
{
  ULONG ConnectionsCount; // r11d
  int v4; // r9d
  unsigned int v6; // r10d
  const KSTOPOLOGY_CONNECTION *v7; // rdx

  ConnectionsCount = a1->ConnectionsCount;
  v4 = 0;
  v6 = -1073741275;
  if ( ConnectionsCount )
  {
    while ( 1 )
    {
      v7 = &a1->Connections[v4];
      if ( *(_QWORD *)&v7->ToNode == __PAIR64__(a2, -1) )
        break;
      if ( ++v4 >= ConnectionsCount )
        return v6;
    }
    return (unsigned int)CSidebandDevice::TraverseToCaptureBridgePin(a1, v7, a3);
  }
  return v6;
}
