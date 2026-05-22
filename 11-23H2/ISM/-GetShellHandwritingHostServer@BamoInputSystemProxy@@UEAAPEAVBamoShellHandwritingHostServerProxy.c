/*
 * XREFs of ?GetShellHandwritingHostServer@BamoInputSystemProxy@@UEAAPEAVBamoShellHandwritingHostServerProxy@@XZ @ 0x18005DB10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001A38C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoShellHandwritingHostServerProxy *__fastcall BamoInputSystemProxy::GetShellHandwritingHostServer(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct BamoShellHandwritingHostServerProxy *)*((_QWORD *)this + 17);
}
