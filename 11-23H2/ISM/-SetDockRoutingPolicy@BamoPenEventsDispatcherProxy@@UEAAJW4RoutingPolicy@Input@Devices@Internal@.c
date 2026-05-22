/*
 * XREFs of ?SetDockRoutingPolicy@BamoPenEventsDispatcherProxy@@UEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180132940
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetDockRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18013299C (-SetDockRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devi.c)
 */

__int64 __fastcall BamoPenEventsDispatcherProxy::SetDockRoutingPolicy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v3) = BamoImpl::BamoPenEventsDispatcherProxyImpl::SetDockRoutingPolicy(v3 + 8, a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
