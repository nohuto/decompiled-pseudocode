/*
 * XREFs of ?AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z @ 0x180162A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x180162AB8 (-AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::AnimationStarted(
        BamoDragManagerClientProxy *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  BamoDragManagerClientProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoDragManagerClientProxyImpl::AnimationStarted(
                  (BamoDragManagerClientProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
