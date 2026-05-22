/*
 * XREFs of ?RemoteRemove@BamoList_uint_Stub@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x180112440
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RemoteRemove@BamoList_uint_StubImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x18011249C (-RemoteRemove@BamoList_uint_StubImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub::RemoteRemove(
        Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub *this,
        unsigned int a2)
{
  Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v3) = Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_StubImpl::RemoteRemove(
                  (Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
