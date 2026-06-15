/*
 * XREFs of ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18010368C
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUMODE_PARAMS@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000ED90 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGrap.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001028C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x180104440 (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1801047A8 (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180109C70 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,EndpointCharacteristicsDescriptor * &,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
        CExclusiveStreamGroupProxy **a1,
        struct EndpointCharacteristicsDescriptor **a2,
        const struct StreamGroupParams **a3,
        struct STREAM_GROUP_DESCRIPTOR **a4,
        unsigned int *a5)
{
  void *v9; // rax
  int CanCastTo; // ebx
  CExclusiveStreamGroupProxy *v11; // rsi
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  const struct _GUID *v14; // r10
  const struct _GUID *v15; // rcx
  CExclusiveStreamGroupProxy *v16; // r8
  __int64 v17; // r8
  CExclusiveStreamGroupProxy *v18; // r9
  const struct _GUID *v19; // r10
  CExclusiveStreamGroupProxy *v21; // [rsp+30h] [rbp-28h] BYREF
  void *v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v9;
  if ( !v9 )
  {
    CanCastTo = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v22);
    return (unsigned int)CanCastTo;
  }
  v11 = CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy((CExclusiveStreamGroupProxy *)v9);
  v21 = v11;
  v22 = 0LL;
  CanCastTo = CExclusiveStreamGroupProxy::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(&v21);
    goto LABEL_5;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1120b11f_c7b3_4012_adbf_8ca8508df960, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v11;
    (*(void (__fastcall **)(CExclusiveStreamGroupProxy *))(*(_QWORD *)v11 + 8LL))(v11);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v13, v14) )
    {
      *a1 = v16;
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v15, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
      {
        *a1 = v18;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IInspectable>::CanCastTo(
                      v17 + 312,
                      v19);
      if ( CanCastTo < 0 )
        goto LABEL_18;
    }
    (*(void (__fastcall **)(CExclusiveStreamGroupProxy *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_18:
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release((__int64)v11);
  return (unsigned int)CanCastTo;
}
