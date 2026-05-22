/*
 * XREFs of ?RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z @ 0x18013F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x18013F33C (-RequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z.c)
 */

__int64 __fastcall BamoTestCommandsProxy::RequestHitTest(
        BamoTestCommandsProxy *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  BamoTestCommandsProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoTestCommandsProxyImpl::RequestHitTest(
                  (BamoTestCommandsProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
