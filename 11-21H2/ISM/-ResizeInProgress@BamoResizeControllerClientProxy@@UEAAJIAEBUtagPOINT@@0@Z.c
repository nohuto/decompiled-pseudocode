/*
 * XREFs of ?ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z @ 0x1801168C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z @ 0x180116938 (-ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall BamoResizeControllerClientProxy::ResizeInProgress(
        BamoResizeControllerClientProxy *this,
        unsigned int a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  BamoResizeControllerClientProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoResizeControllerClientProxyImpl::ResizeInProgress(
                  (BamoResizeControllerClientProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, v8, v9);
  return (unsigned int)v7;
}
