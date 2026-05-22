/*
 * XREFs of ?OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z @ 0x180029310
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDestroyWorkflow@ContextRuntimeClass@WRL2@Microsoft@@AEAAX_NPEA_N@Z @ 0x180029510 (-ProcessDestroyWorkflow@ContextRuntimeClass@WRL2@Microsoft@@AEAAX_NPEA_N@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z @ 0x18007406C (-ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextRuntimeClass::OnFinalRelease_NoLock(
        Microsoft::WRL2::ContextRuntimeClass *this,
        bool a2)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rax
  int v5; // ebx
  volatile signed __int32 *v6; // rbx
  int v7; // ecx
  int v8; // eax
  struct Microsoft::WRL2::ContextSession::DeferredOperation *v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  bool v13; // [rsp+40h] [rbp+8h] BYREF
  bool v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v5 = *((_DWORD *)v2 + 14);
    if ( v2 != this )
    {
      if ( v5 != GetCurrentThreadId() )
      {
        v6 = (volatile signed __int32 *)*((_QWORD *)this + 3);
        if ( _InterlockedIncrement(v6 + 4) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
        if ( *((_DWORD *)v6 + 27) )
          Microsoft::WRL2::FailFast::Unexpected("ContextSession RIP");
        EnterCriticalSection((LPCRITICAL_SECTION)v6 + 1);
        v7 = *((_DWORD *)v6 + 20);
        if ( v7 != *((_DWORD *)v6 + 22) + *((_DWORD *)v6 + 21) )
          Microsoft::WRL2::FailFast::Unexpected("ContextSession begin counts");
        *((_DWORD *)v6 + 20) = v7 + 1;
        Microsoft::WRL2::ContextRuntimeClass::ProcessDestroyWorkflow(this, a2, &v14);
        if ( v14 )
          (*(void (__fastcall **)(Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
        v8 = *((_DWORD *)v6 + 21) + *((_DWORD *)v6 + 22);
        if ( --*((_DWORD *)v6 + 20) != v8 )
          Microsoft::WRL2::FailFast::Unexpected("ContextSession end counts");
        v9 = (struct Microsoft::WRL2::ContextSession::DeferredOperation *)*((_QWORD *)v6 + 17);
        *((_QWORD *)v6 + 17) = 0LL;
        *((_QWORD *)v6 + 18) = 0LL;
        LeaveCriticalSection((LPCRITICAL_SECTION)v6 + 1);
        if ( v9 )
          Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLock(v9);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) == 1 )
        {
          LOBYTE(v10) = 1;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, v10);
        }
        return;
      }
      Microsoft::WRL2::ContextRuntimeClass::ProcessDestroyWorkflow(this, a2, &v13);
      goto LABEL_17;
    }
    if ( !v5 || v5 != GetCurrentThreadId() )
    {
      Microsoft::WRL2::ContextSession::BeginApiEntry(*((Microsoft::WRL2::ContextSession **)this + 3));
      Microsoft::WRL2::ContextRuntimeClass::ProcessDestroyWorkflow(this, a2, &v13);
      Microsoft::WRL2::ContextSession::EndApiEntry(*((Microsoft::WRL2::ContextSession **)this + 3));
LABEL_17:
      if ( v13 )
        (*(void (__fastcall **)(Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
      return;
    }
    v11 = *(_DWORD *)(*((_QWORD *)this + 3) + 32LL);
    if ( (v11 & 1) != 0 || (v11 & 0x10) == 0 )
      Microsoft::WRL2::FailFast::Unexpected("FinalRelease session critsec");
  }
  else
  {
    v12 = *((_DWORD *)this + 8);
    if ( (v12 & 1) != 0 || (v12 & 2) != 0 || (v12 & 4) != 0 || (v12 & 8) != 0 || (v12 & 0x10) != 0 )
      Microsoft::WRL2::FailFast::Unexpected("FinalRelease preconditions");
  }
}
