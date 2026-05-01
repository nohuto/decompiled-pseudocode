/*
 * XREFs of ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x18011F66C
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x18011F5F4 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180616250 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18002D0EC (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18003FC5C (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x1801697C4 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByItem@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180615ED8 (--$FindEx@VCAppLayoutItemFinderByItem@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x180616160 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 */

__int64 __fastcall CAppLayout::_AddItemHelper(_QWORD *a1, _QWORD *a2, int a3, __int64 a4)
{
  int v7; // ebx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-28h] BYREF
  __int128 v20; // [rsp+48h] [rbp-18h] BYREF

  v7 = -2147024809;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
LABEL_3:
      v18 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v18);
      v9 = a1[14];
      v7 = 0;
      if ( v9 != a1[16]
        || (v7 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                   (__int64)(a1 + 13),
                   v9 + 1,
                   v8),
            v7 >= 0) )
      {
        v10 = (__int64 *)(a1[13] + 8 * a1[14]++);
        if ( v10 )
        {
          *v10 = 0LL;
          if ( v10 != (__int64 *)&v18 )
          {
            v18 = 0LL;
            *v10 = (__int64)a2;
          }
        }
      }
      goto LABEL_8;
    }
    if ( (unsigned int)(a3 - 2) <= 1 )
    {
      *(_QWORD *)&v20 = 0LL;
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=(&v18, a4);
      v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByItem>(
             a1 + 13,
             &v18,
             v17,
             &v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v15 = v19;
      if ( a3 != 3 )
        v15 = v19 + 1;
    }
    else
    {
      if ( a3 != 4 )
        return (unsigned int)v7;
      v13 = *a2;
      v19 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(v13 + 56))(a2, 0LL, &v19);
      v14 = a1[14];
      v15 = 0LL;
      if ( !v14 )
        goto LABEL_3;
      while ( 1 )
      {
        v16 = a1[13];
        v20 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(v16 + 8 * v15) + 56LL))(
          *(_QWORD *)(v16 + 8 * v15),
          0LL,
          &v20);
        if ( SDWORD2(v19) <= (int)v20 )
          break;
        if ( ++v15 >= v14 )
          goto LABEL_3;
      }
    }
    v18 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v18);
    v12 = v15;
  }
  else
  {
    v18 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v18);
    v12 = 0LL;
  }
  v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
         a1 + 13,
         &v18,
         v12);
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v7;
}
