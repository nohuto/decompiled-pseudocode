/*
 * XREFs of ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x180126BBC
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180017E70 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x180127060 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x180127354 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x180128BE0 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x180129260 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x180126924 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 */

SipcServer::EndpointListEntry *__fastcall SipcServer::EndpointListEntry::`scalar deleting destructor'(
        SipcServer::EndpointListEntry *this)
{
  SipcServer::EndpointListEntry::~EndpointListEntry(this);
  operator delete(this);
  return this;
}
