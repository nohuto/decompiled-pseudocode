/*
 * XREFs of ?ProcessDestroyWorkflow@ContextRuntimeClass@WRL2@Microsoft@@AEAAX_NPEA_N@Z @ 0x180029510
 * Callers:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z @ 0x180029310 (-OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextRuntimeClass::ProcessDestroyWorkflow(
        Microsoft::WRL2::ContextRuntimeClass *this,
        char a2,
        bool *a3)
{
  int v3; // eax
  Microsoft::WRL2::ContextRuntimeClass *v7; // rax
  int v8; // eax
  Microsoft::WRL2::ContextRuntimeClass *v9; // rax
  int v10; // eax
  int v11; // eax
  HANDLE ProcessHeap; // rax
  Microsoft::WRL2::NestableRuntimeClass **v13; // rax
  Microsoft::WRL2::NestableRuntimeClass **v14; // rdi

  v3 = *((_DWORD *)this + 8);
  *a3 = 0;
  if ( (v3 & 0x80u) != 0 )
    return;
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 2) == 0 || (v3 & 4) == 0 || (v3 & 8) == 0 || (v3 & 0x10) == 0 )
      Microsoft::WRL2::FailFast::Unexpected("Workflow: start Destroy");
    *((_DWORD *)this + 8) = v3 & 0xFFFFFFFE;
    v7 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 3);
    if ( v7 == this )
      *((_DWORD *)v7 + 25) = 1;
    (*(void (__fastcall **)(Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)this + 88LL))(this);
    v3 = *((_DWORD *)this + 8);
    if ( (v3 & 2) != 0 )
      Microsoft::WRL2::FailFast::Unexpected("Workflow: end Destroy");
  }
  else if ( (v3 & 2) != 0 )
  {
    return;
  }
  if ( (v3 & 8) != 0 && GetCurrentThreadId() == *(_DWORD *)(*((_QWORD *)this + 3) + 104LL) )
  {
    v8 = *((_DWORD *)this + 8);
    if ( (v8 & 0x10) == 0 )
      Microsoft::WRL2::FailFast::Unexpected("Workflow: start PostDestroy");
    *((_DWORD *)this + 8) = v8 & 0xFFFFFFF3;
    (*(void (__fastcall **)(Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)this + 96LL))(this);
    v9 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 3);
    if ( v9 == this )
      *((_DWORD *)v9 + 25) = 2;
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      Microsoft::WRL2::FailFast::Unexpected("Workflow: end PostDestroy");
LABEL_16:
    if ( a2 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 96LL) && *((_DWORD *)this + 4) )
        Microsoft::WRL2::FailFast::Unexpected("Workflow: Non-empty reference count");
      v10 = *((_DWORD *)this + 8);
      if ( (v10 & 0x20) != 0 )
        Microsoft::WRL2::FailFast::Unexpected("Workflow: Double memory free");
      *a3 = 1;
      *((_DWORD *)this + 8) = v10 | 0x20;
    }
    return;
  }
  v11 = *((_DWORD *)this + 8);
  if ( (v11 & 4) == 0 )
  {
    if ( (v11 & 0x10) != 0 )
      return;
    goto LABEL_16;
  }
  *((_DWORD *)this + 8) = v11 & 0xFFFFFFFB;
  ProcessHeap = GetProcessHeap();
  v13 = (Microsoft::WRL2::NestableRuntimeClass **)HeapAlloc(ProcessHeap, 0, 8uLL);
  v14 = v13;
  if ( !v13 )
    Microsoft::WRL2::FailFast::Unexpected("Workflow: Cannot allocate PostDestroyInfo");
  *v13 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
  if ( *v13 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(*v13);
  *v14 = this;
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(volatile signed __int32 **, __int64), Microsoft::WRL2::NestableRuntimeClass **))(**((_QWORD **)this + 3) + 104LL))(
    *((_QWORD *)this + 3),
    Microsoft::WRL2::ContextRuntimeClass::DeferredPostDestroy_NoLock,
    v14);
}
