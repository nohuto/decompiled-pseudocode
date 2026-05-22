/*
 * XREFs of ?SetConvertGraspToSystemGesture@BamoMPCManagerProxy@@UEAAJ_NI@Z @ 0x18018B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetConvertGraspToSystemGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18018B41C (-SetConvertGraspToSystemGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

__int64 __fastcall BamoMPCManagerProxy::SetConvertGraspToSystemGesture(
        BamoMPCManagerProxy *this,
        bool a2,
        unsigned int a3)
{
  BamoMPCManagerProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCManagerProxyImpl::SetConvertGraspToSystemGesture(
                  (BamoMPCManagerProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
