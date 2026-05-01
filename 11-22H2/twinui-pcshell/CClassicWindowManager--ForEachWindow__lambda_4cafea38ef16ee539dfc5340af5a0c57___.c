/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_4cafea38ef16ee539dfc5340af5a0c57___ @ 0x1803A8424
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1803A8CA0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x1802D0288 (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 *     _lambda_01b8eac1b0ed23916fb75e1218071bb0_::operator() @ 0x1803A8864 (_lambda_01b8eac1b0ed23916fb75e1218071bb0_--operator().c)
 */

char __fastcall CClassicWindowManager::ForEachWindow__lambda_4cafea38ef16ee539dfc5340af5a0c57___(
        __int64 a1,
        __int64 a2)
{
  char v4; // bl
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rdi
  struct IClassicWindow *v7; // rbx
  CClassicWindowManager *v8; // rcx
  struct IClassicWindow *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 200);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v10 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * i);
    v7 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v4 = CClassicWindowManager::IsWindowOwnedBy(v8, v7, **(struct IClassicWindow ***)(a2 + 8))
       ? lambda_01b8eac1b0ed23916fb75e1218071bb0_::operator()(*(_QWORD *)(a2 + 16), &v10)
       : 1;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  }
  return v4;
}
