/*
 * XREFs of ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806151A8
 * Callers:
 *     ?GetCount@CAppLayoutOperation@@UEAAJPEAI@Z @ 0x180613510 (-GetCount@CAppLayoutOperation@@UEAAJPEAI@Z.c)
 *     ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x180613820 (-GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1804E341C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$FindEx@VCAppLayoutOperationItemFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByView@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806131F4 (--$FindEx@VCAppLayoutOperationItemFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutOpera.c)
 *     ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180613B40 (-_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANI.c)
 *     ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x180613CC0 (-_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_GenerateOperationItemList(CAppLayoutOperation *this)
{
  _QWORD *v1; // r12
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, struct IAppLayoutItem **); // rbx
  int v5; // ebx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, struct IApplicationView *, __int64 *, _QWORD); // rdi
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IAppLayoutItem **); // rbx
  __int64 v11; // r8
  int v12; // edi
  unsigned __int64 v13; // r15
  unsigned __int64 i; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64 *); // rbx
  __int64 **v18; // rax
  __int64 *AddressOf; // rax
  __int64 v20; // r8
  int v21; // edi
  __int64 v22; // rcx
  int v23; // eax
  struct IAppLayoutItem *v25; // [rsp+30h] [rbp-49h] BYREF
  struct IAppLayoutItem *v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+40h] [rbp-39h] BYREF
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  struct IAppLayoutItem *v30[2]; // [rsp+60h] [rbp-19h] BYREF
  struct IApplicationView *v31; // [rsp+70h] [rbp-9h]

  v1 = (_QWORD *)((char *)this + 120);
  CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::RemoveAll((__int64)this + 120);
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_QWORD *)this + 5) )
  {
    v25 = 0LL;
    v4 = *(__int64 (__fastcall **)(__int64, struct IAppLayoutItem **))(*(_QWORD *)v3 + 128LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v25);
    v5 = v4(v3, &v25);
    while ( v5 >= 0 )
    {
      if ( (*(int (__fastcall **)(struct IAppLayoutItem *, __int64, struct IAppLayoutItem **))(*(_QWORD *)v25 + 24LL))(
             v25,
             1LL,
             v30) < 0 )
        break;
      v6 = *((_QWORD *)this + 5);
      v26 = 0LL;
      v7 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64 *, _QWORD))(*(_QWORD *)v6 + 152LL);
      v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v26, &v27);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
      v5 = v7(v6, v31, v8, 0LL);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -2147319765 )
        v5 = CAppLayoutOperation::_AddOperationItem(this, v31, v30[0], v26);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v25);
    if ( v5 >= 0 )
    {
      v9 = *((_QWORD *)this + 5);
      v25 = 0LL;
      v10 = *(__int64 (__fastcall **)(__int64, struct IAppLayoutItem **))(*(_QWORD *)v9 + 128LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v25);
      v5 = v10(v9, &v25);
      if ( v5 >= 0 )
      {
        while ( (*(int (__fastcall **)(struct IAppLayoutItem *, __int64, struct IAppLayoutItem **))(*(_QWORD *)v25 + 24LL))(
                  v25,
                  1LL,
                  v30) >= 0 )
        {
          v27 = 0LL;
          v26 = v31;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
          v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
                  v1,
                  (__int64)&v26,
                  v11,
                  &v28);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v27);
          if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -2147319765 )
          {
            v5 = v12;
            break;
          }
          if ( v12 == -2147319765 )
            v5 = CAppLayoutOperation::_AddOperationItem(this, v31, 0LL, v30[0]);
          if ( v5 < 0 )
            break;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v25);
      if ( v5 >= 0 )
      {
        v13 = *((_QWORD *)this + 12);
        for ( i = 0LL; i < v13; ++i )
        {
          if ( v5 < 0 )
            break;
          v15 = *((_QWORD *)this + 11);
          v25 = 0LL;
          v16 = *(_QWORD *)(v15 + 8 * i);
          v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL);
          v18 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &v28);
          AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v18);
          v5 = v17(v16, AddressOf);
          if ( v5 >= 0 )
          {
            v27 = 0LL;
            v26 = v25;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
            v21 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
                    v1,
                    (__int64)&v26,
                    v20,
                    &v29);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v26);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v27);
            if ( v21 < 0 )
            {
              if ( v21 == -2147319765 )
              {
                v22 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
                v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
                v5 = CAppLayoutOperation::_AddAnimationOnlyOperationItem(this, (__int64)v25, v23);
              }
              else
              {
                v5 = v21;
              }
            }
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147319767;
  }
  return (unsigned int)v5;
}
