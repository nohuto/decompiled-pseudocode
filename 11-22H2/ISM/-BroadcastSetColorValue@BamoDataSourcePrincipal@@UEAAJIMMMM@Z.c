/*
 * XREFs of ?BroadcastSetColorValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x18011D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18011D474 (-BroadcastSetColorValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetColorValue(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, this[3]);
  LODWORD(v7) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetColorValue(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v7 + 1),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
