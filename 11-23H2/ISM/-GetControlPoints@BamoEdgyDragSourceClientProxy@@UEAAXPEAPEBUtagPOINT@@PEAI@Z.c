/*
 * XREFs of ?GetControlPoints@BamoEdgyDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z @ 0x180124D20
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

void __fastcall BamoEdgyDragSourceClientProxy::GetControlPoints(
        BamoEdgyDragSourceClientProxy *this,
        const struct tagPOINT **a2,
        unsigned int *a3)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  *a2 = (const struct tagPOINT *)*((_QWORD *)this + 9);
  *a3 = *((_DWORD *)this + 20);
}
