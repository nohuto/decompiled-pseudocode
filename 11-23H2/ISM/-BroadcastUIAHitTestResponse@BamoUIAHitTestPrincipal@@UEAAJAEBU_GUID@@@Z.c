/*
 * XREFs of ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipal@@UEAAJAEBU_GUID@@@Z @ 0x1801D7660
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x1801D76B8 (-BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall BamoUIAHitTestPrincipal::BroadcastUIAHitTestResponse(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _GUID *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v7, this[3]);
  LODWORD(v3) = BamoImpl::BamoUIAHitTestPrincipalImpl::BroadcastUIAHitTestResponse(
                  (BamoImpl::BamoUIAHitTestPrincipalImpl *)(v3 + 1),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
