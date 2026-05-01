/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x18031DD0C
 * Callers:
 *     ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x180166AD0 (-GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801305E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_1801305E0.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18013A7AC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCC_ea_18013A7AC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18031E270 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewArrangePosition.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
        void **a1,
        __int128 *a2,
        int *a3,
        _DWORD *a4,
        int *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // edi
  __int128 v12; // xmm0
  int v13; // edx
  int v14; // eax

  *a1 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>(v9);
    *v10 = &CCommonApplicationViewArrangePosition::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewArrangePositionImpl>,Microsoft::WRL::FtmBase>>'};
    v10[6] = &CCommonApplicationViewArrangePosition::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewArrangePositionImpl>,Microsoft::WRL::FtmBase>>'};
    v12 = *a2;
    v13 = *a5;
    v14 = *a3;
    *((_DWORD *)v10 + 9) = *a4;
    *((_DWORD *)v10 + 10) = v13;
    *((_OWORD *)v10 + 1) = v12;
    *((_DWORD *)v10 + 8) = v14;
    v11 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>>(
            (char *)v10,
            &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
            a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v11;
}
