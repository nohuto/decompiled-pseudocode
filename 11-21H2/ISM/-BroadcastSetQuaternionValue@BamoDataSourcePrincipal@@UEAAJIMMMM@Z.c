/*
 * XREFs of ?BroadcastSetQuaternionValue@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x1800F4FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastSetQuaternionValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800F5044 (-BroadcastSetQuaternionValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetQuaternionValue(
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
  LODWORD(v7) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetQuaternionValue(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v7 + 1),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, v8, v9);
  return (unsigned int)v7;
}
