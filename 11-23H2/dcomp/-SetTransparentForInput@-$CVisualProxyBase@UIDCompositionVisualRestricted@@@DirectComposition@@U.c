/*
 * XREFs of ?SetTransparentForInput@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x180024700
 * Callers:
 *     <none>
 * Callees:
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetTransparentForInput(
        void *a1,
        int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  void *v4; // r9
  struct DirectComposition::CProxyTable *v5; // rax
  __int64 v6; // r9
  int v7; // esi
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  void (__fastcall ***v10)(_QWORD); // rcx
  unsigned int v11; // eax
  DirectComposition::CDeviceLock *v12; // rcx
  unsigned int v13; // edi
  void *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  if ( a1 != (void *)-8LL )
    v4 = a1;
  v5 = DirectComposition::CProxyTable::FromProxy(v4);
  if ( v5 )
  {
    v3 = *(_QWORD *)v5;
    v7 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)(v3 + 96);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) )
      *(_BYTE *)(v3 + 148) = 1;
    ++*(_DWORD *)(v3 + 144);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 104));
  }
  if ( v7 )
  {
    DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v3, 0x18u, &v15, 0);
    v9 = v15;
    *(_DWORD *)v15 = 8;
    v9[1] = v7;
    v9[2] = 36;
    *((_QWORD *)v9 + 2) = v2;
    v10 = *(void (__fastcall ****)(_QWORD))(v3 + 80);
    if ( v10 )
      (**v10)(v10);
  }
  v11 = DirectComposition::CDevice::TryFlushKernelCommands((DirectComposition::CDevice *)v3, 0);
  v12 = (DirectComposition::CDeviceLock *)(v3 + 96);
  v13 = v11;
  DirectComposition::CDeviceLock::Leave(v12);
  return v13;
}
