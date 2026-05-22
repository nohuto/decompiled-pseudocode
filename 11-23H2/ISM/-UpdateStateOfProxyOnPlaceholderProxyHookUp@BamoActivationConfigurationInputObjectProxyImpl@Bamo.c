/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180139DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180013BA0 (-UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

void __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy(this, 0, *((unsigned int *)a2 + 8));
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy(this, 0, *((unsigned int *)a2 + 9));
}
