/*
 * XREFs of ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4@Z @ 0x18011DABC
 * Callers:
 *     ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x18011D854 (-s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FL.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_SanitizeFlags@CAppLayoutItem@@AEAA?AW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@W42@@Z @ 0x18011DBA4 (-_SanitizeFlags@CAppLayoutItem@@AEAA-AW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@W42@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@QEAA@XZ @ 0x18011DBC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppLayoutItemInternal@@U-$ChainInter.c)
 */

__int64 __fastcall CAppLayoutItem::CAppLayoutItem(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v11; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>();
  *(_QWORD *)a1 = &CAppLayoutItem::`vftable'{for `IAppLayoutItemInternal'};
  *(_QWORD *)(a1 + 8) = &CAppLayoutItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>'};
  *(_DWORD *)(a1 + 24) = CAppLayoutItem::_SanitizeFlags(v11, a3);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 56) = *a6;
  *(_DWORD *)(a1 + 60) = a6[1];
  *(_DWORD *)(a1 + 64) = a6[2];
  *(_DWORD *)(a1 + 68) = a6[3];
  *(_DWORD *)(a1 + 72) = *a7;
  *(_DWORD *)(a1 + 76) = a7[1];
  *(_DWORD *)(a1 + 80) = a7[2];
  *(_DWORD *)(a1 + 84) = a7[3];
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a5 + 32);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a5 + 40);
  return a1;
}
