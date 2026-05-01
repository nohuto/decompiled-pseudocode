/*
 * XREFs of ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x180791FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCAppLayoutOperationItemFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByApplication@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180791874 (--$FindEx@VCAppLayoutOperationItemFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayo.c)
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x180793948 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetOperationItem(
        CAppLayoutOperation *this,
        struct IImmersiveApplication *a2,
        struct IAppLayoutOperationItem **a3)
{
  int OperationItemList; // ebx
  __int64 v7; // r8
  __int64 *v8; // rbx
  struct IAppLayoutOperationItem *v9; // rax
  struct IImmersiveApplication *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  OperationItemList = CAppLayoutOperation::_GenerateOperationItemList((CAppLayoutOperation *)((char *)this - 8));
  if ( OperationItemList >= 0 )
  {
    v12 = 0LL;
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    OperationItemList = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByApplication>(
                          (_QWORD *)this + 14,
                          (__int64)&v11,
                          v7,
                          &v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
    if ( OperationItemList >= 0 )
    {
      v8 = (__int64 *)(*((_QWORD *)this + 14) + 8 * v13);
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(v8);
      v9 = (struct IAppLayoutOperationItem *)*v8;
      OperationItemList = 0;
      *a3 = v9;
    }
  }
  return (unsigned int)OperationItemList;
}
