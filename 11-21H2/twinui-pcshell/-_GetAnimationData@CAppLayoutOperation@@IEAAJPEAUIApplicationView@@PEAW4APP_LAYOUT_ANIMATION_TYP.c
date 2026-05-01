/*
 * XREFs of ?_GetAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18061551C
 * Callers:
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x180613CC0 (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByView@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806130B0 (--$FindEx@VCAppLayoutAnimationDataFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutAnima.c)
 */

__int64 __fastcall CAppLayoutOperation::_GetAnimationData(
        CAppLayoutOperation *this,
        struct IUnknown *a2,
        enum APP_LAYOUT_ANIMATION_TYPE *a3)
{
  struct IUnknown *v5; // r8
  int v6; // ebx
  __int64 v7; // rcx
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  v10 = 0LL;
  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v6 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByView>(
         (__int64 *)this + 11,
         &v9,
         v5,
         &v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v11);
    *(_DWORD *)a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  }
  return (unsigned int)v6;
}
