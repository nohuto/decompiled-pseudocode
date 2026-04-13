/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x180030E14
 * Callers:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x180030DF0 (-CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z.c)
 * Callees:
 *     ??0_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEAA@AEBK00@Z @ 0x180029CB8 (--0_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEAA@AEBK00@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18002AFCC (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EAC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@details@wil@@QEAAX.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18003F750 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded(
        Mobility::Pinning *this,
        unsigned int a2,
        unsigned int a3)
{
  _lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_ *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rdx
  struct wil::details::IFunctorHost *v6; // r8
  const char *v7; // r9
  __int64 v8; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-68h] BYREF
  DiagnosticsInfo v10; // [rsp+40h] [rbp-58h] BYREF
  const char *v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+50h] [rbp-48h]
  __int16 v13; // [rsp+58h] [rbp-40h]
  _BYTE v14[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+74h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v18; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+18h] BYREF

  v20 = a3;
  v19 = a2;
  v18 = (unsigned int)this;
  v3 = _lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_::_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_(
         (_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_ *)&v8,
         &v18,
         &v19,
         &v20);
  v10 = (DiagnosticsInfo)retaddr;
  v11 = "onecoreuap\\internal\\shell\\inc\\MobilityPinning.h";
  v12 = 0LL;
  v13 = 131;
  LOBYTE(v4) = 3;
  LOBYTE(v5) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetImpl'::`2'::impl,
      v5,
      v4);
    v9[0] = &wil::details::functor_wrapper_void<_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_ &>::`vftable';
    v9[1] = v3;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v14, 16257538, &v10);
    wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)v14, v6);
    if ( v15 )
      *(_DWORD *)(v15 + 16) = v16;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xBE,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      v7);
  }
}
