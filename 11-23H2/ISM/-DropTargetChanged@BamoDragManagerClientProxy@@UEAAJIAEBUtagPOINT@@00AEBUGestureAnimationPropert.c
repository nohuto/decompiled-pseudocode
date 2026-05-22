/*
 * XREFs of ?DropTargetChanged@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x180155480
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?DropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z @ 0x180155550 (-DropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAni.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDragManagerClientProxy::DropTargetChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  Microsoft::BamoImpl::BamoImplObject *v18; // [rsp+70h] [rbp+8h] BYREF

  v14 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v18,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v14) = BamoImpl::BamoDragManagerClientProxyImpl::DropTargetChanged(
                   v14 + 8,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v18, v15, v16);
  return (unsigned int)v14;
}
