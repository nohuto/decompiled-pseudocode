/*
 * XREFs of ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180178F50
 * Callers:
 *     ?OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1801791F0 (-OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D58D8 (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct D2D_VECTOR_2F *__fastcall BamoEdgyControllerClientProxy::GetGestureDirection(
        BamoEdgyControllerClientProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct D2D_VECTOR_2F *)((char *)this + 56);
}
