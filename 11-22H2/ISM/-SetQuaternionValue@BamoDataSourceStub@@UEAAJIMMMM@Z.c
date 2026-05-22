/*
 * XREFs of ?SetQuaternionValue@BamoDataSourceStub@@UEAAJIMMMM@Z @ 0x1801214F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetQuaternionValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x180121588 (-SetQuaternionValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetQuaternionValue(
        BamoDataSourceStub *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  BamoDataSourceStub *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v7) = BamoImpl::BamoDataSourceStubImpl::SetQuaternionValue(
                  (BamoDataSourceStub *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
