/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x180076B80
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     _lambda_15831a3e11fde15e653ed50ac8f9facd_::operator() @ 0x180212644 (_lambda_15831a3e11fde15e653ed50ac8f9facd_--operator().c)
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x1805B274C (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCCommonApplicationViewOcclusionPositionImpl@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800305B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x180071B08 (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x1800754C8 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1800777D4 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
        void **a1,
        struct tagWINDOWPLACEMENT *a2)
{
  CCommonApplicationViewOcclusionPosition *v4; // rax
  volatile int *v5; // rax
  CCommonApplicationViewOcclusionPosition *v6; // rbx
  volatile int *v7; // rdx
  int CanCastTo; // edi
  _DWORD *v9; // rcx
  struct tagWINDOWPLACEMENT v11; // [rsp+20h] [rbp-38h] BYREF
  CCommonApplicationViewOcclusionPosition *v12; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = (volatile int *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v4);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((__int64 *)&v12, v5);
    v11 = *a2;
    v6 = v12;
    CanCastTo = CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(v12, &v11);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( (unsigned int)InlineIsEqualGUID(
                           &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
                           &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(CCommonApplicationViewOcclusionPosition *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v6,
                      v9,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
        (__int64)v6,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
