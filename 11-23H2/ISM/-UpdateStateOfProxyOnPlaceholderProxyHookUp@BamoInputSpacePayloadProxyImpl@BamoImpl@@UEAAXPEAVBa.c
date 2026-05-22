/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18013A200
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z @ 0x1801381D8 (-UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        const struct INPUT_SPACE_REGION **a2)
{
  BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace(this, 0LL, (const struct INPUT_SPACE *)(a2 + 4));
  BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions(this, 0, a2[6], (const char *)*((unsigned int *)a2 + 14));
}
