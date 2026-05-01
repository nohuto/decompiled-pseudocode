/*
 * XREFs of ?_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180793CC8
 * Callers:
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x180792460 (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Compare@CAppLayoutAnimationDataFinderByView@@QEBAHAEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@0@Z @ 0x180791954 (-Compare@CAppLayoutAnimationDataFinderByView@@QEBAHAEBV-$ComPtr@UIAppLayoutAnimationData@@@WRL@M.c)
 */

__int64 __fastcall CAppLayoutOperation::_GetAnimationData(
        CAppLayoutOperation *this,
        struct IUnknown *a2,
        enum APP_LAYOUT_ANIMATION_TYPE *a3)
{
  struct IUnknown *v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // ebx
  __int64 v9; // rcx
  struct IUnknown *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  v12 = 0LL;
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 12) )
  {
    while ( (unsigned int)CAppLayoutAnimationDataFinderByView::Compare(
                            &v11,
                            (__int64 *)(*((_QWORD *)this + 11) + 8 * v7),
                            v5) )
    {
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 12) )
        goto LABEL_4;
    }
    v6 = v7;
    v8 = 0;
  }
  else
  {
LABEL_4:
    v8 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v6);
    *(_DWORD *)a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  }
  return (unsigned int)v8;
}
