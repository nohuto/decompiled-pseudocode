/*
 * XREFs of ?Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z @ 0x1800FB264
 * Callers:
 *     ?UnUse@CSharedAllocationBase@DirectComposition@@EEAAXXZ @ 0x1800751F0 (-UnUse@CSharedAllocationBase@DirectComposition@@EEAAXXZ.c)
 *     ?ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ @ 0x1800F25D0 (-ManageSharedMemory@CDevice@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CSharedAllocationBase::Dispose(
        DirectComposition::CSharedAllocationBase *this,
        __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  DirectComposition::CDevice *v9; // rax

  v2 = (_DWORD *)((char *)this + 16);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 48LL))((char *)this + 16);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(v5 + 96));
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 40LL))(v2, 5LL);
  v2[2] = 5;
  if ( *((_QWORD *)this + 4) )
  {
    v6 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6
      || (v8 = *(_QWORD **)((((unsigned __int64)this + 32) & -(__int64)(this != 0LL)) + 8), *v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  v9 = (DirectComposition::CDevice *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 48LL))(v2);
  DirectComposition::CDevice::DisposeSharedMemory(v9, this, a2);
}
