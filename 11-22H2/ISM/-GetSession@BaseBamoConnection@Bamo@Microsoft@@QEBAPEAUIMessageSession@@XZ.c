/*
 * XREFs of ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x180150CA8
 * Callers:
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x1800768EC (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct IMessageSession *__fastcall Microsoft::Bamo::BaseBamoConnection::GetSession(
        Microsoft::Bamo::BaseBamoConnection *this)
{
  return *(struct IMessageSession **)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this)
                                    + 48);
}
