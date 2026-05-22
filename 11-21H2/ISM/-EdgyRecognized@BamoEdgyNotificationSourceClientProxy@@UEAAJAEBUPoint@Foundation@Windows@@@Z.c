/*
 * XREFs of ?EdgyRecognized@BamoEdgyNotificationSourceClientProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180109400
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?EdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x18010945C (-EdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Wi.c)
 */

__int64 __fastcall BamoEdgyNotificationSourceClientProxy::EdgyRecognized(
        BamoEdgyNotificationSourceClientProxy *this,
        const struct Windows::Foundation::Point *a2)
{
  BamoEdgyNotificationSourceClientProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::EdgyRecognized(
                  (BamoEdgyNotificationSourceClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7, v4, v5);
  return (unsigned int)v3;
}
