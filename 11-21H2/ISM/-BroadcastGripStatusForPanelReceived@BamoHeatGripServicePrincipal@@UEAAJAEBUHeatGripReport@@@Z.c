/*
 * XREFs of ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x180182370
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x1801823C8 (-BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJAEBUHeatGri.c)
 */

__int64 __fastcall BamoHeatGripServicePrincipal::BroadcastGripStatusForPanelReceived(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct HeatGripReport *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v7, this[3]);
  LODWORD(v3) = BamoImpl::BamoHeatGripServicePrincipalImpl::BroadcastGripStatusForPanelReceived(
                  (BamoImpl::BamoHeatGripServicePrincipalImpl *)(v3 + 1),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7, v4, v5);
  return (unsigned int)v3;
}
