/*
 * XREFs of ?BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z @ 0x18011D950
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastSetVector2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMM@Z @ 0x18011D9C4 (-BroadcastSetVector2Value@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector2Value(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3,
        float a4)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+50h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v9, this[3]);
  LODWORD(v5) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetVector2Value(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v5 + 1),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
