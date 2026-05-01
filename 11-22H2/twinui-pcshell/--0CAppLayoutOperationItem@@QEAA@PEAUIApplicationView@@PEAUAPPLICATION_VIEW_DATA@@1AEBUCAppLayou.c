/*
 * XREFs of ??0CAppLayoutOperationItem@@QEAA@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1AEBUCAppLayoutOperationItemConstructorRects@0@HHW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1807989F0
 * Callers:
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180798918 (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationItem@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802E7068 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationIte.c)
 */

__int64 __fastcall CAppLayoutOperationItem::CAppLayoutOperationItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutOperationItem>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &CAppLayoutOperationItem::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 32);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a3 + 40);
  *(_OWORD *)(a1 + 68) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 100) = *(_QWORD *)(a4 + 32);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a4 + 40);
  v12 = *(_DWORD **)a5;
  *(_DWORD *)(a1 + 112) = **(_DWORD **)a5;
  *(_DWORD *)(a1 + 116) = v12[1];
  *(_DWORD *)(a1 + 120) = v12[2];
  *(_DWORD *)(a1 + 124) = v12[3];
  v13 = *(_DWORD **)(a5 + 8);
  *(_DWORD *)(a1 + 128) = *v13;
  *(_DWORD *)(a1 + 132) = v13[1];
  *(_DWORD *)(a1 + 136) = v13[2];
  *(_DWORD *)(a1 + 140) = v13[3];
  v14 = *(_DWORD **)(a5 + 16);
  *(_DWORD *)(a1 + 144) = *v14;
  *(_DWORD *)(a1 + 148) = v14[1];
  *(_DWORD *)(a1 + 152) = v14[2];
  *(_DWORD *)(a1 + 156) = v14[3];
  v15 = *(_DWORD **)(a5 + 24);
  *(_DWORD *)(a1 + 160) = *v15;
  *(_DWORD *)(a1 + 164) = v15[1];
  *(_DWORD *)(a1 + 168) = v15[2];
  *(_DWORD *)(a1 + 172) = v15[3];
  *(_DWORD *)(a1 + 176) = a6;
  *(_DWORD *)(a1 + 180) = a7;
  *(_DWORD *)(a1 + 184) = a8;
  return a1;
}
