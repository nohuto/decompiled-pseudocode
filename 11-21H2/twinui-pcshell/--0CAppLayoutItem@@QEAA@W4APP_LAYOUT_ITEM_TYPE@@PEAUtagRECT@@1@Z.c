/*
 * XREFs of ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x18011D78C
 * Callers:
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D6A8 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1806199D4 (-s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppLayoutItemInternal@@U?$ChainInterfaces@UIAppLayoutItemBuilder@@UIAppLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@QEAA@XZ @ 0x18011DBC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppLayoutItemInternal@@U-$ChainInter.c)
 */

__int64 __fastcall CAppLayoutItem::CAppLayoutItem(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutItemInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>();
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &CAppLayoutItem::`vftable'{for `IAppLayoutItemInternal'};
  *(_QWORD *)(a1 + 8) = &CAppLayoutItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::ChainInterfaces<IAppLayoutItemBuilder,IAppLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>'};
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = *a3;
  *(_DWORD *)(a1 + 60) = a3[1];
  *(_DWORD *)(a1 + 64) = a3[2];
  *(_DWORD *)(a1 + 68) = a3[3];
  *(_DWORD *)(a1 + 72) = *a4;
  *(_DWORD *)(a1 + 76) = a4[1];
  *(_DWORD *)(a1 + 80) = a4[2];
  *(_DWORD *)(a1 + 84) = a4[3];
  result = a1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 3LL;
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}
