/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@6@22W4GestureProcessorType@@@Z @ 0x180163480
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z @ 0x18016356C (-DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimation.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDragManagerClientProxy::DragStarted(
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
        __int64 a11,
        __int64 a12,
        int a13)
{
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  Microsoft::BamoImpl::BamoImplObject *v20; // [rsp+80h] [rbp+8h] BYREF

  v16 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v20,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v16) = BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(
                   v16 + 8,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11,
                   a12,
                   a13);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v20, v17, v18);
  return (unsigned int)v16;
}
