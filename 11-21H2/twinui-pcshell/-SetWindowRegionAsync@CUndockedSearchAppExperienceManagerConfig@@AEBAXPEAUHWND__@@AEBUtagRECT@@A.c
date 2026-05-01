/*
 * XREFs of ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A10D4
 * Callers:
 *     ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A1030 (-SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6e59436657fdc730ce46c13d2be9f9a3___ @ 0x180199B04 (Windows--Internal--ComTaskPool--QueueTask__lambda_6e59436657fdc730ce46c13d2be9f9a3___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_731699364cbddcd54af95a8546718700___ @ 0x180199B94 (Windows--Internal--ComTaskPool--QueueTask__lambda_731699364cbddcd54af95a8546718700___.c)
 *     ??$Start@AEBUtagRECT@@$$CBU1@$$CBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@SA?AV01@AEBUtagRECT@@$$QEBU2@1@Z @ 0x18019A0E4 (--$Start@AEBUtagRECT@@$$CBU1@$$CBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppEx.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18019B5FC (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18019B5FC.c)
 *     ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019B7B0 (--0-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     _lambda_6e59436657fdc730ce46c13d2be9f9a3_::__lambda_6e59436657fdc730ce46c13d2be9f9a3_ @ 0x18019B8D8 (_lambda_6e59436657fdc730ce46c13d2be9f9a3_--__lambda_6e59436657fdc730ce46c13d2be9f9a3_.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019BEE4 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(
        __int64 a1,
        __int64 a2,
        struct tagRECT *a3,
        __int128 **a4)
{
  __int128 *v8; // rdx
  unsigned __int64 v9; // rax
  struct tagRECT *p_si128; // r9
  struct tagRECT *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  struct tagRECT si128; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v23; // [rsp+68h] [rbp-98h]
  _QWORD v24[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v26; // [rsp+98h] [rbp-68h]
  _QWORD v27[3]; // [rsp+A8h] [rbp-58h] BYREF
  void **v28; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v29[40]; // [rsp+200h] [rbp+100h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
  {
    v8 = *a4;
    v9 = a4[1] - *a4;
    if ( v9 <= 1 )
    {
      si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      p_si128 = &si128;
      if ( !v9 )
      {
        v21 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        v11 = &v21;
        goto LABEL_7;
      }
    }
    else
    {
      v18 = v8[1];
      p_si128 = (struct tagRECT *)&v18;
    }
    v20 = *v8;
    v11 = (struct tagRECT *)&v20;
LABEL_7:
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::Start<tagRECT const &,tagRECT const,tagRECT const>(
      (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v29,
      a3,
      v11,
      p_si128);
    v25 = a2;
    v26 = *a3;
    std::vector<tagRECT>::vector<tagRECT>(v27, (__int64)a4);
    wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v28,
      (__int64)v29);
    v28 = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
    v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_6e59436657fdc730ce46c13d2be9f9a3___(
            v13,
            v12,
            *(_DWORD *)(a1 + 8),
            (__int64)&v25);
    winrt::check_hresult(v14);
    lambda_6e59436657fdc730ce46c13d2be9f9a3_::__lambda_6e59436657fdc730ce46c13d2be9f9a3_((__int64)&v25);
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(v29);
    return;
  }
  v22 = a2;
  v23 = *a3;
  std::vector<tagRECT>::vector<tagRECT>(v24, (__int64)a4);
  v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_731699364cbddcd54af95a8546718700___(
          v16,
          v15,
          *(_DWORD *)(a1 + 8),
          (__int64)&v22);
  winrt::check_hresult(v17);
  std::vector<Geometry::CRect>::_Tidy(v24);
}
