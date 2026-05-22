/*
 * XREFs of ?InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ @ 0x18011AA04
 * Callers:
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x180118FD0 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18004085C (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z @ 0x18011A8E0 (-GetWaitHandles@SipcEndpoint@@QEBAXAEAPEAX00@Z.c)
 */

__int64 __fastcall SipcServer::EndpointListEntry::InitializeWaitHandles(SipcServer::EndpointListEntry *this)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  int v4; // eax
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  SipcEndpoint::GetWaitHandles(*((SipcEndpoint **)this + 2), (void **)this + 4, &v5, (void **)this + 5);
  result = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 72LL), *((void **)this + 4));
  v3 = 0;
  if ( (int)result >= 0 )
  {
    v4 = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 72LL), *((void **)this + 5));
    if ( v4 < 0 )
      return (unsigned int)v4;
    return v3;
  }
  return result;
}
