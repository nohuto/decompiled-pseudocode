/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Z @ 0x180076C80
 * Callers:
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180075324 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCCommonApplicationViewOcclusionPositionImpl@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800305B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x1800753C4 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180077854 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositi.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPositionSnapshot,IOcclusionBasedApplicationViewPosition,HWND__ * &>(
        void **a1,
        HWND *a2)
{
  CCommonApplicationViewOcclusionPositionSnapshot *v4; // rax
  CCommonApplicationViewOcclusionPositionSnapshot *v5; // rbx
  volatile int *v6; // rdx
  int CanCastTo; // edi
  _DWORD *v8; // rcx

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPositionSnapshot *)operator new(
                                                            0x90uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>(v4);
    *(_QWORD *)v5 = &CCommonApplicationViewOcclusionPositionSnapshot::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v5 + 13) = &CCommonApplicationViewOcclusionPosition::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    CanCastTo = CCommonApplicationViewOcclusionPositionSnapshot::RuntimeClassInitialize(v5, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( (unsigned int)InlineIsEqualGUID(
                           &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
                           &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(CCommonApplicationViewOcclusionPositionSnapshot *))(*(_QWORD *)v5 + 8LL))(v5);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v5,
                      v8,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
      (__int64)v5,
      v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
