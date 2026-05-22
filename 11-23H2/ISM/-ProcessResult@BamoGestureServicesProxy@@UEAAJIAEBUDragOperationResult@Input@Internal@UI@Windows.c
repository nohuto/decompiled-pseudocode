/*
 * XREFs of ?ProcessResult@BamoGestureServicesProxy@@UEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x18012DF80
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z @ 0x18012DFF8 (-ProcessResult@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIAEBUDragOperationResult@Input@Intern.c)
 */

__int64 __fastcall BamoGestureServicesProxy::ProcessResult(
        BamoGestureServicesProxy *this,
        unsigned int a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        struct BamoDragManagerClientPrincipal *a4)
{
  BamoGestureServicesProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoGestureServicesProxyImpl::ProcessResult(
                  (BamoGestureServicesProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
