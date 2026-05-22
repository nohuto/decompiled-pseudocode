/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxy@@UEAAJIII_KI@Z @ 0x18017A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z @ 0x18017A34C (-OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnButtonsChangedDuringHomeGesture(
        BamoMPCManagerClientProxy *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  BamoMPCManagerClientProxy *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v9) = BamoImpl::BamoMPCManagerClientProxyImpl::OnButtonsChangedDuringHomeGesture(
                  (BamoMPCManagerClientProxy *)((char *)v9 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13, v10, v11);
  return (unsigned int)v9;
}
