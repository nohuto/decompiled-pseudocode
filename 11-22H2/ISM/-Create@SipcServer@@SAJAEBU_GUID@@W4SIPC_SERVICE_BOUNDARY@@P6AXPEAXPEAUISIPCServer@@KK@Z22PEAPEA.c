/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003AAA8
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18004C684 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x18003980C (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z @ 0x180039984 (--0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z.c)
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180041438 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x1800545C0 (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18012627C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x180126318 (-ReleasePublicReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcServer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD **v14; // rbx
  int ServerPort; // edi
  void *v16; // rax
  unsigned int v18; // ebx

  *a6 = 0LL;
  v7 = 0x4652EB1C2819B8FFLL - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&GUID_NULL.Data1 == 0x4652EB1C2819B8FFLL )
    v7 = 0xE48BA8EFB47AF080uLL - *(_QWORD *)GUID_NULL.Data4;
  if ( !v7 )
  {
    v18 = -2147024809;
LABEL_13:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v18, a2);
    return v18;
  }
  v8 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 || (v11 = SipcServer::SipcServer((__int64)v8, a2, v9, v10, a4), (v14 = (_QWORD **)v11) == 0LL) )
  {
    v18 = -2147024882;
    goto LABEL_13;
  }
  ServerPort = AlpcPort::CreateServerPort(v12, a2, v13, (SipcPort **)(v11 + 64));
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((AggregateWaitHandle *)(v14 + 9)), ServerPort < 0)
    || (v16 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v14[8] + 40LL))(v14[8]),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v14 + 9), v16),
        ServerPort < 0) )
  {
    SharedObjectBase::ReleasePrivateReference((SharedObjectBase *)v14);
    SharedObjectBase::ReleasePublicReference((SharedObjectBase *)v14);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a6 = v14 + 2;
    return 0LL;
  }
}
