/*
 * XREFs of ?CancelOperation@BamoGestureServicesProxy@@UEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180122DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?CancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180122E58 (-CancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEAVBamoDragManagerClientPrincipal.c)
 */

__int64 __fastcall BamoGestureServicesProxy::CancelOperation(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v7) = BamoImpl::BamoGestureServicesProxyImpl::CancelOperation(v7 + 8, a2, a3, a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
