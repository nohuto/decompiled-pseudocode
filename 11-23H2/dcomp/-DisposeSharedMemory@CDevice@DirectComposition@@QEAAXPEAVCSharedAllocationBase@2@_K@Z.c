/*
 * XREFs of ?DisposeSharedMemory@CDevice@DirectComposition@@QEAAXPEAVCSharedAllocationBase@2@_K@Z @ 0x1800F1734
 * Callers:
 *     ?Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z @ 0x1800FB264 (-Dispose@CSharedAllocationBase@DirectComposition@@QEAAX_K@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDevice::DisposeSharedMemory(
        DirectComposition::CDevice *this,
        struct DirectComposition::CSharedAllocationBase *a2,
        __int64 a3)
{
  char *v6; // r14
  char *v7; // rbx
  char *v8; // rdi
  __int64 v9; // rax
  char **v10; // rcx
  int v11; // eax
  int v12; // eax
  char **v13; // rax

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDevice *)((char *)this + 96));
  v6 = (char *)*((_QWORD *)a2 + 6);
  (*(void (__fastcall **)(char *, struct DirectComposition::CSharedAllocationBase *))(*(_QWORD *)v6 + 16LL))(v6, a2);
  v7 = 0LL;
  if ( !*((_QWORD *)v6 + 5) )
  {
    *((_QWORD *)v6 + 6) = a3;
    v8 = v6 + 8;
    v9 = *((_QWORD *)v6 + 1);
    if ( *(char **)(v9 + 8) != v6 + 8 )
      goto LABEL_13;
    v10 = (char **)*((_QWORD *)v6 + 2);
    if ( *v10 != v8 )
      goto LABEL_13;
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v7 = (char *)this + 568;
      }
      else
      {
        v7 = (char *)this + 536;
      }
    }
    else
    {
      v7 = (char *)this + 504;
    }
    v13 = (char **)*((_QWORD *)v7 + 1);
    if ( *v13 != v7 )
LABEL_13:
      __fastfail(3u);
    *(_QWORD *)v8 = v7;
    *((_QWORD *)v6 + 2) = v13;
    *v13 = v8;
    *((_QWORD *)v7 + 1) = v8;
  }
}
