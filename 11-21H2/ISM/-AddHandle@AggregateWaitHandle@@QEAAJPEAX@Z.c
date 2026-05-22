/*
 * XREFs of ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18003BF8C
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003D284 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180042E40 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ @ 0x1800FED74 (-InitializeWaitHandles@EndpointListEntry@SipcServer@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AggregateWaitHandle::AddHandle(AggregateWaitHandle *this, void *a2)
{
  _OWORD *v4; // rax
  int v5; // edi
  AggregateWaitHandle **v6; // rdx
  AggregateWaitHandle *v7; // rcx
  HANDLE hObject; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v4 )
    {
      *((_QWORD *)this + 2) = 0LL;
      return 2147942414LL;
    }
    *v4 = 0LL;
    v4[1] = 0LL;
    *((_QWORD *)this + 2) = v4;
  }
  v5 = NtCreateWaitCompletionPacket(&hObject, 1LL);
  if ( v5 < 0 )
    return v5 | 0x10000000u;
  v5 = NtAssociateWaitCompletionPacket(hObject, *(_QWORD *)this, a2, *((_QWORD *)this + 2), 0LL, 0, 0LL, 0LL);
  if ( v5 < 0 )
  {
    CloseHandle(hObject);
    return v5 | 0x10000000u;
  }
  *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) = hObject;
  v6 = (AggregateWaitHandle **)*((_QWORD *)this + 4);
  v7 = (AggregateWaitHandle *)*((_QWORD *)this + 2);
  if ( *v6 != (AggregateWaitHandle *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)v7 = (char *)this + 24;
  *((_QWORD *)v7 + 1) = v6;
  *v6 = v7;
  ++*((_QWORD *)this + 5);
  *((_QWORD *)this + 4) = v7;
  *((_QWORD *)this + 2) = 0LL;
  return 0LL;
}
