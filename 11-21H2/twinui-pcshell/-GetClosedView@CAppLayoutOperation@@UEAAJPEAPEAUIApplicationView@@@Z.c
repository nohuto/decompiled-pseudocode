/*
 * XREFs of ?GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180613410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByAnimationType@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180613034 (--$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLa.c)
 */

__int64 __fastcall CAppLayoutOperation::GetClosedView(
        CAppLayoutOperation *this,
        struct IApplicationView **a2,
        __int64 a3)
{
  __int64 *v3; // rdi
  int v5; // ebx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  __int64 **v11; // rax
  __int64 *AddressOf; // rax
  struct IApplicationView *v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v14) = 2;
  v3 = (__int64 *)((char *)this + 80);
  *a2 = 0LL;
  v16 = 0LL;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
         (_QWORD *)this + 10,
         &v14,
         a3,
         &v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  if ( v5 >= 0
    || (v16 = 0LL,
        LODWORD(v14) = 7,
        v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
               v3,
               &v14,
               v6,
               &v15),
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16),
        v7 >= 0) )
  {
    v8 = *v3;
    v14 = 0LL;
    v9 = *(_QWORD *)(v8 + 8 * v15);
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL);
    v11 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v14, &v15);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v11);
    v7 = v10(v9, AddressOf);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v7 = 0;
      *a2 = v14;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  }
  else if ( v7 == -2147319765 )
  {
    return 0;
  }
  return (unsigned int)v7;
}
