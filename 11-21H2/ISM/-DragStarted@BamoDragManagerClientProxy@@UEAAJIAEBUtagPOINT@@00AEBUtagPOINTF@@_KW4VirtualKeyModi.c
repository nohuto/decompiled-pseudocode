/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@6@2W4DragProcessorType@@@Z @ 0x180108EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@2W4DragProcessorType@@@Z @ 0x180108FBC (-DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4V.c)
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
        int a12)
{
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  Microsoft::BamoImpl::BamoImplObject *v19; // [rsp+70h] [rbp+8h] BYREF

  v15 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v19,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v15) = BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(
                   v15 + 8,
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
                   a12);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v19, v16, v17);
  return (unsigned int)v15;
}
