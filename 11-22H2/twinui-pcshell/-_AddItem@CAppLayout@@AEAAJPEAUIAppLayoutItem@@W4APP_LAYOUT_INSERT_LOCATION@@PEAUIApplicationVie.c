/*
 * XREFs of ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x180198578
 * Callers:
 *     ?AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1801984F0 (-AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView.c)
 *     ?_AddView@CAppLayout@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x180796954 (-_AddView@CAppLayout@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1801985EC (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180794730 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ??4?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z @ 0x180794948 (--4-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutItem@@@Z.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x180797108 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 */

__int64 __fastcall CAppLayout::_AddItem(CAppLayout *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  int BufferItem; // esi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  if ( a3 - 2 <= 1 )
  {
    v15 = 0LL;
    if ( a4 )
    {
      v16 = 0LL;
      v13 = a4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
      v11 = (_QWORD *)((char *)a1 + 104);
      BufferItem = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
                     (char *)a1 + 104,
                     &v13,
                     v12,
                     &v15);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
      if ( BufferItem < 0 )
        goto LABEL_3;
      v10 = v15;
    }
    else
    {
      BufferItem = CAppLayout::_FindBufferItem(a1, 0LL, &v17);
      if ( BufferItem < 0 )
        goto LABEL_3;
      v10 = v17;
      v11 = (_QWORD *)((char *)a1 + 104);
    }
    Microsoft::WRL::ComPtr<IAppLayoutItem>::operator=(&v14, *(_QWORD *)(*v11 + 8 * v10));
    v4 = v14;
  }
  BufferItem = CAppLayout::_AddItemHelper(a1, a2, a3, v4);
LABEL_3:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  return (unsigned int)BufferItem;
}
