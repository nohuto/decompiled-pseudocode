/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18003D284
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18003D860 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x18002C83C (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x18003BF8C (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z @ 0x180047188 (--0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x1800484EC (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800FC4EC (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800FC588 (-ReleasePublicReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcServer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v11; // rbx
  int ServerPort; // edi
  void *v13; // rax
  unsigned int v15; // ebx

  *a6 = 0LL;
  v6 = 0x4652EB1C2819B8FFLL - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&GUID_NULL.Data1 == 0x4652EB1C2819B8FFLL )
    v6 = 0xE48BA8EFB47AF080uLL - *(_QWORD *)GUID_NULL.Data4;
  if ( !v6 )
  {
    v15 = -2147024809;
LABEL_13:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v15, a2);
    return v15;
  }
  v7 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 || (v8 = SipcServer::SipcServer(v7), (v11 = (_QWORD **)v8) == 0LL) )
  {
    v15 = -2147024882;
    goto LABEL_13;
  }
  ServerPort = AlpcPort::CreateServerPort(v9, a2, v10, (SipcPort **)(v8 + 64));
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((AggregateWaitHandle *)(v11 + 9)), ServerPort < 0)
    || (v13 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v11[8] + 40LL))(v11[8]),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v11 + 9), v13),
        ServerPort < 0) )
  {
    SharedObjectBase::ReleasePrivateReference((SharedObjectBase *)v11);
    SharedObjectBase::ReleasePublicReference((SharedObjectBase *)v11);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a6 = v11 + 2;
    return 0LL;
  }
}
