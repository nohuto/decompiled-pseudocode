/*
 * XREFs of ?GetClosedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180791BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByAnimationType@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1807917F8 (--$FindEx@VCAppLayoutAnimationDataFinderByAnimationType@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLa.c)
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
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  __int64 *v11; // rbx
  struct IApplicationView *v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v13) = 2;
  v3 = (__int64 *)((char *)this + 80);
  *a2 = 0LL;
  v15 = 0LL;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
         (_QWORD *)this + 10,
         &v13,
         a3,
         &v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  if ( v5 >= 0
    || (v15 = 0LL,
        LODWORD(v13) = 7,
        v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByAnimationType>(
               v3,
               &v13,
               v6,
               &v14),
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15),
        v7 >= 0) )
  {
    v8 = *v3;
    v13 = 0LL;
    v9 = *(_QWORD *)(v8 + 8 * v14);
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL);
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &v14);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
    v7 = v10(v9, v11);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v7 = 0;
      *a2 = v13;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
  }
  else if ( v7 == -2147319765 )
  {
    return 0;
  }
  return (unsigned int)v7;
}
