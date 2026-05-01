/*
 * XREFs of ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1801985EC
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x180198578 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180794A40 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1801A098C (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByItem@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1807946C0 (--$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x180794948 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 */

__int64 __fastcall CAppLayout::_AddItemHelper(_QWORD *a1, _QWORD *a2, int a3, __int64 a4)
{
  int v7; // ebx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  void *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rbx
  _QWORD *v25; // [rsp+30h] [rbp-30h] BYREF
  __int128 v26; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+48h] [rbp-18h] BYREF

  v7 = -2147024809;
  if ( !a3 )
  {
    v25 = a2;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v25);
    v14 = 0LL;
LABEL_12:
    v15 = a1 + 13;
LABEL_13:
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v15,
           &v25,
           v14);
    goto LABEL_9;
  }
  if ( a3 == 1 )
  {
    v25 = a2;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v25);
    v9 = a1[14];
    v7 = 0;
    if ( v9 != a1[16]
      || (v7 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)(a1 + 13),
                 v9 + 1,
                 v8),
          v7 >= 0) )
    {
      v10 = ++a1[14];
      v11 = a1[13];
LABEL_6:
      v12 = (__int64 *)(v11 + 8 * (v10 - 1));
      if ( v12 )
      {
        *v12 = 0LL;
        if ( v12 != (__int64 *)&v25 )
        {
          v25 = 0LL;
          *v12 = (__int64)a2;
        }
      }
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    *(_QWORD *)&v27 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=(&v25, a4);
    v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByItem>(
           a1 + 13,
           &v25,
           v23,
           &v26);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v24 = v26;
    if ( a3 != 3 )
      v24 = v26 + 1;
    v25 = a2;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v25);
    v14 = v24;
    goto LABEL_12;
  }
  if ( a3 != 4 )
    return (unsigned int)v7;
  v16 = *a2;
  v26 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(v16 + 56))(a2, 0LL, &v26);
  v17 = a1[14];
  v18 = a1 + 13;
  v19 = 0LL;
  if ( v17 )
  {
    while ( 1 )
    {
      v20 = *v18;
      v27 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v20 + 8 * v19) + 56LL))(
        *(_QWORD *)(v20 + 8 * v19),
        0LL,
        &v27);
      if ( SDWORD2(v26) <= (int)v27 )
        break;
      if ( ++v19 >= v17 )
        goto LABEL_19;
    }
    v25 = a2;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v25);
    v14 = v19;
    v15 = a1 + 13;
    goto LABEL_13;
  }
LABEL_19:
  v25 = a2;
  Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v25);
  v22 = a1[14];
  v7 = 0;
  if ( v22 != a1[16]
    || (v7 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
               (__int64)(a1 + 13),
               v22 + 1,
               v21),
        v7 >= 0) )
  {
    v10 = ++a1[14];
    v11 = *v18;
    goto LABEL_6;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
  return (unsigned int)v7;
}
