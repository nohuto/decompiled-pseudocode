/*
 * XREFs of ?BroadcastRemoteReplace@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800A1780
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastRemoteReplace@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800A17E8 (-BroadcastRemoteReplace@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteReplace(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        struct BamoActivatableEntityPrincipal *a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::BroadcastRemoteReplace(
                  (Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl *)(v5 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
