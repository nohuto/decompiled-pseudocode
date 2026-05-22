/*
 * XREFs of ?RemoteReplace@BamoList_VirtualTouchpadRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180135E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RemoteReplace@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180135EDC (-RemoteReplace@BamoList_VirtualTouchpadRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Micros.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub::RemoteReplace(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub *this,
        unsigned int a2,
        const struct VirtualTouchpadRect *a3)
{
  Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v5) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_StubImpl::RemoteReplace(
                  (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v9, v6, v7);
  return (unsigned int)v5;
}
