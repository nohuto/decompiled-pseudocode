/*
 * XREFs of ?UnUse@CSharedAllocationBase@DirectComposition@@EEAAXXZ @ 0x1800751F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z @ 0x1800FB264 (-Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z.c)
 */

void __fastcall DirectComposition::CSharedAllocationBase::UnUse(DirectComposition::CSharedAllocationBase *this)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  ULONGLONG TickCount64; // rax

  v2 = *(_QWORD *)this;
  if ( *((_DWORD *)this + 2) == 3 )
  {
    v3 = *(_DWORD *)((*(__int64 (**)(void))(v2 + 48))() + 416);
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 3) = v3;
    (*(void (__fastcall **)(DirectComposition::CSharedAllocationBase *, __int64))(v4 + 40))(this, 4LL);
    *((_DWORD *)this + 2) = 4;
    v5 = (char *)this - 16;
    v6 = (*(__int64 (__fastcall **)(DirectComposition::CSharedAllocationBase *))(*(_QWORD *)this + 48LL))(this);
    v7 = *(_QWORD *)(v6 + 96);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    if ( v5 )
      v8 = v5 + 32;
    else
      v8 = 0LL;
    v9 = *(_QWORD **)(v6 + 496);
    if ( *v9 != v6 + 488 )
      __fastfail(3u);
    *v8 = v6 + 488;
    v8[1] = v9;
    *v9 = v8;
    *(_QWORD *)(v6 + 496) = v8;
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CSharedAllocationBase *, __int64))(v2 + 40))(this, 1LL);
    *((_DWORD *)this + 2) = 1;
    TickCount64 = GetTickCount64();
    DirectComposition::CSharedAllocationBase::Dispose(
      (DirectComposition::CSharedAllocationBase *)((char *)this - 16),
      TickCount64);
  }
}
