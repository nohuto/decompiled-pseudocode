/*
 * XREFs of ?GetRegions@BamoInputSpacePayloadProxy@@UEAAXPEAPEBUINPUT_SPACE_REGION@@PEAI@Z @ 0x1801256F0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

void __fastcall BamoInputSpacePayloadProxy::GetRegions(
        BamoInputSpacePayloadProxy *this,
        const struct INPUT_SPACE_REGION **a2,
        unsigned int *a3)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  *a2 = (const struct INPUT_SPACE_REGION *)*((_QWORD *)this + 7);
  *a3 = *((_DWORD *)this + 16);
}
