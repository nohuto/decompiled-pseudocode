/*
 * XREFs of ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxy@@UEAAJ_NII_KII@Z @ 0x18015BD20
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x18015BDB8 (-OnHomeGestureReadyChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJ_NII_KII@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnHomeGestureReadyChanged(
        BamoMPCManagerClientProxy *this,
        bool a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  BamoMPCManagerClientProxy *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  Microsoft::BamoImpl::BamoImplObject *v14; // [rsp+50h] [rbp+8h] BYREF

  v10 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v14,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v10) = BamoImpl::BamoMPCManagerClientProxyImpl::OnHomeGestureReadyChanged(
                   (BamoMPCManagerClientProxy *)((char *)v10 + 8),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v14, v11, v12);
  return (unsigned int)v10;
}
