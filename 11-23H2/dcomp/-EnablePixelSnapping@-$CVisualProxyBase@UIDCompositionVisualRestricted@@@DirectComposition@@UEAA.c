/*
 * XREFs of ?EnablePixelSnapping@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x180024800
 * Callers:
 *     <none>
 * Callees:
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::EnablePixelSnapping(
        void *a1,
        int a2)
{
  __int64 v2; // rbp
  void *v3; // r9
  struct DirectComposition::CProxyTable *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  _DWORD *v10; // rax
  void (__fastcall ***v11)(_QWORD); // rcx
  unsigned int v12; // eax
  DirectComposition::CDeviceLock *v13; // rcx
  unsigned int v14; // edi
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  if ( a1 != (void *)-8LL )
    v3 = a1;
  v5 = DirectComposition::CProxyTable::FromProxy(v3);
  if ( v5 )
  {
    v7 = *(_QWORD *)v5;
    v8 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  v9 = *(_QWORD *)(v7 + 96);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) )
      *(_BYTE *)(v7 + 148) = 1;
    ++*(_DWORD *)(v7 + 144);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  }
  if ( v8 )
  {
    DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v7, 0x18u, &v16, 0);
    v10 = v16;
    LOBYTE(v2) = a2 != 0;
    *(_DWORD *)v16 = 8;
    v10[1] = v8;
    v10[2] = 26;
    *((_QWORD *)v10 + 2) = v2;
    v11 = *(void (__fastcall ****)(_QWORD))(v7 + 80);
    if ( v11 )
      (**v11)(v11);
  }
  v12 = DirectComposition::CDevice::TryFlushKernelCommands((DirectComposition::CDevice *)v7, 0);
  v13 = (DirectComposition::CDeviceLock *)(v7 + 96);
  v14 = v12;
  DirectComposition::CDeviceLock::Leave(v13);
  return v14;
}
