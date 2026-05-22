/*
 * XREFs of ?SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z @ 0x180113BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x180113C38 (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourceStub::SetVector3Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  BamoDataSourceStub *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+60h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v6) = BamoImpl::BamoDataSourceStubImpl::SetVector3Value(
                  (BamoDataSourceStub *)((char *)v6 + 8),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v7, v8);
  return (unsigned int)v6;
}
