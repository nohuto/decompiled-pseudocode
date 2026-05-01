/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x1805B2118
 * Callers:
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1805B51A0 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCCommonApplicationViewOcclusionPositionImpl@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800305B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x180071B08 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1800777D4 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1805B5D98 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
        void **a1,
        _OWORD *a2,
        _OWORD *a3,
        int *a4)
{
  CCommonApplicationViewOcclusionPosition *v8; // rax
  int CanCastTo; // edi
  volatile int *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  volatile int *v14; // rdx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v8);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v16, v10);
    v11 = *a4;
    v12 = v16;
    *(_OWORD *)(v16 + 16) = *a2;
    *(_DWORD *)(v12 + 48) = 4;
    *(_DWORD *)(v12 + 52) = v11;
    *(_OWORD *)(v12 + 32) = *a3;
    *(_DWORD *)(v12 + 56) = 0;
    *(_OWORD *)(v12 + 60) = 0LL;
    *(_OWORD *)(v12 + 76) = 0LL;
    *(_QWORD *)(v12 + 92) = 0LL;
    *(_DWORD *)(v12 + 60) = 0;
    *(_QWORD *)(v12 + 76) = -1LL;
    v16 = -1LL;
    *(_QWORD *)(v12 + 68) = -1LL;
    *(_OWORD *)(v12 + 84) = *(_OWORD *)(v12 + 32);
    *(_DWORD *)(v12 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState();
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = (void *)v12;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>::CanCastTo(
                    v12,
                    v13,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
      v12,
      v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
