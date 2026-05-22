/*
 * XREFs of ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800FCF5C
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180042E40 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x1800FD400 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800FD704 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1800FEEC0 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x1800FF500 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x1800FCCEC (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 */

SipcServer::EndpointListEntry *__fastcall SipcServer::EndpointListEntry::`scalar deleting destructor'(
        SipcServer::EndpointListEntry *this)
{
  SipcServer::EndpointListEntry::~EndpointListEntry(this);
  operator delete(this);
  return this;
}
