/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1805B2284
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1805B23E0 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1805B23E0.c)
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
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
        void **a1,
        unsigned int *a2,
        _OWORD *a3)
{
  CCommonApplicationViewOcclusionPosition *v6; // rax
  int CanCastTo; // edi
  volatile int *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  _DWORD *v11; // rcx
  volatile int *v12; // rdx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v6);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach(&v14, v8);
    v9 = *a2;
    v10 = v14;
    *(_OWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v10 + 48) = v9;
    *(_OWORD *)(v10 + 32) = *a3;
    *(_DWORD *)(v10 + 56) = 0;
    *(_OWORD *)(v10 + 60) = 0LL;
    *(_OWORD *)(v10 + 76) = 0LL;
    *(_QWORD *)(v10 + 92) = 0LL;
    *(_DWORD *)(v10 + 60) = 0;
    *(_QWORD *)(v10 + 76) = -1LL;
    v14 = -1LL;
    *(_QWORD *)(v10 + 68) = -1LL;
    *(_OWORD *)(v10 + 84) = *(_OWORD *)(v10 + 32);
    *(_DWORD *)(v10 + 64) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState();
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = (void *)v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>::CanCastTo(
                    v10,
                    v11,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
      v10,
      v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
