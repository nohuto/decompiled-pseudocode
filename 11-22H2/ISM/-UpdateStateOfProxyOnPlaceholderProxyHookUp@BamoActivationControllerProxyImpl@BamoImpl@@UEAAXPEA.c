/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800B88A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x18001AE04 (-UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 *     ?UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18001AEA0 (-UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationControllerProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationControllerProxyImpl::UpdateId(this, 0, *((_QWORD *)a2 + 5));
  BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid(this, 0, (const struct _LUID *)a2 + 6);
  BamoImpl::BamoActivationControllerProxyImpl::UpdateAutoForwardId(this, 0, *((_QWORD *)a2 + 7));
}
