/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18016B880
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGestureDirection@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z @ 0x18016B330 (-UpdateGestureDirection@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?UpdateGestureDistance@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18016B488 (-UpdateGestureDistance@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateRouting@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18016B5D8 (-UpdateRouting@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateVertex0@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z @ 0x18016B8F4 (-UpdateVertex0@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?UpdateVertex1@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z @ 0x18016BA48 (-UpdateVertex1@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBUD2D_VECTOR_2F@@@Z.c)
 */

void __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        const struct D2D_VECTOR_2F *a2)
{
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateVertex0(this, 0, a2 + 4);
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateVertex1(this, 0, a2 + 5);
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateGestureDirection(this, 0LL, a2 + 6);
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateGestureDistance(this, 0LL, LODWORD(a2[7].x));
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateRouting(this, 0LL, LODWORD(a2[7].y));
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateRunState(this, 0LL, LODWORD(a2[8].x));
}
