/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011E810
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18011AEA4 (-UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoControllerNavigationManagerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v5; // r8

  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdateEnabled(this, 0LL, a3);
  LOBYTE(v5) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdatePaused(this, 0LL, v5);
}
