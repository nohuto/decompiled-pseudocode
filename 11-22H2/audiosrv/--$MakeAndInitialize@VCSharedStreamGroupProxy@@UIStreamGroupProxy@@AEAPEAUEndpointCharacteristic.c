/*
 * XREFs of ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUICompositeSystemEffect@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUICompositeSystemEffect@@@Z @ 0x1800103EC
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000ED90 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGrap.c)
 * Callees:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUICompositeSystemEffect@@@Z @ 0x18000D1C0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001028C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x1800123A0 (--0CSharedStreamGroupProxy@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1801047A8 (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &,ICompositeSystemEffect *>(
        wil::details ***a1,
        struct EndpointCharacteristicsDescriptor **a2,
        const struct StreamGroupParams **a3,
        struct STREAM_GROUP_DESCRIPTOR **a4,
        unsigned int *a5,
        struct ICompositeSystemEffect **a6)
{
  CSharedStreamGroupProxy *v10; // rax
  wil::details **v11; // rsi
  int CanCastTo; // ebx
  const struct _GUID *v13; // rcx
  const struct _GUID *v14; // rcx
  const struct _GUID *v15; // r10
  const struct _GUID *v16; // rcx
  wil::details **v17; // r8
  __int64 v19; // r8
  wil::details **v20; // r9
  const struct _GUID *v21; // r10
  wil::details **v22; // [rsp+30h] [rbp-28h] BYREF
  CSharedStreamGroupProxy *v23; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CSharedStreamGroupProxy *)operator new(0x730uLL, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v10;
  if ( !v10 )
  {
    CanCastTo = -2147024882;
LABEL_17:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v23);
    return (unsigned int)CanCastTo;
  }
  v11 = (wil::details **)CSharedStreamGroupProxy::CSharedStreamGroupProxy(v10);
  v22 = v11;
  v23 = 0LL;
  CanCastTo = CSharedStreamGroupProxy::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(&v22);
    goto LABEL_17;
  }
  *a1 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_1120b11f_c7b3_4012_adbf_8ca8508df960,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v11;
    (*((void (__fastcall **)(wil::details **))*v11 + 1))(v11);
    CanCastTo = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v14, v15) )
    {
      *a1 = v17;
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v16, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
      {
        *a1 = v20;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IInspectable>::CanCastTo(
                      v19 + 312,
                      v21);
      if ( CanCastTo < 0 )
        goto LABEL_8;
    }
    (*((void (__fastcall **)(wil::details **))**a1 + 1))(*a1);
  }
LABEL_8:
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release(v11);
  return (unsigned int)CanCastTo;
}
