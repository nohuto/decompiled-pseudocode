/*
 * XREFs of ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x180118B2C
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180017640 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x180118FD0 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1801192C4 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x18011AB50 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x18011B1D0 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x180118894 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 */

SipcServer::EndpointListEntry *__fastcall SipcServer::EndpointListEntry::`scalar deleting destructor'(
        SipcServer::EndpointListEntry *this)
{
  SipcServer::EndpointListEntry::~EndpointListEntry(this);
  operator delete(this);
  return this;
}
