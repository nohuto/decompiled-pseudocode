/*
 * XREFs of ?Run@?$functor_wrapper_void@AEAV_lambda_62158d46a05af21ae3d227fe228597be_@@@details@wil@@UEAAJXZ @ 0x1800C95B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180038F68 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180044B20 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D4A48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_N.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall wil::details::functor_wrapper_void<_lambda_62158d46a05af21ae3d227fe228597be_ &>::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  wil::details_abi *v9; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::IFunctorHost *v11; // r8
  void **v13; // [rsp+20h] [rbp-39h] BYREF
  struct wil::details_abi::ThreadLocalData *v14; // [rsp+28h] [rbp-31h]
  int v15; // [rsp+30h] [rbp-29h]
  int v16; // [rsp+34h] [rbp-25h]
  _QWORD *v17; // [rsp+38h] [rbp-21h]
  int v18; // [rsp+40h] [rbp-19h]
  _QWORD *v19; // [rsp+48h] [rbp-11h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-9h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v24[3]; // [rsp+88h] [rbp+2Fh] BYREF
  __int16 v25; // [rsp+A0h] [rbp+47h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = **(_QWORD ***)(a1 + 8);
  v4 = v3 + 9;
  if ( v3[12] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v5 = v3 + 5;
  if ( v3[8] >= 8uLL )
    v5 = (_QWORD *)*v5;
  v6 = v3 + 1;
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v21 = v4;
  v19 = v5;
  v20 = v6;
  LOBYTE(a3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetImpl'::`2'::impl,
    v4,
    a3);
  v23[0] = &v19;
  v23[1] = &v20;
  v23[2] = &v21;
  v24[0] = retaddr;
  v24[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp";
  v24[2] = "Pin";
  v25 = 114;
  LOBYTE(v7) = 1;
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetImpl'::`2'::impl,
    v8,
    v7);
  v22[0] = off_180108268;
  v22[1] = v23;
  v13 = &wil::details::FeatureFunctorHost::`vftable';
  LOBYTE(v9) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v9);
  v14 = ThreadLocalDataCache;
  v15 = 0;
  v16 = 0;
  if ( ThreadLocalDataCache )
  {
    v16 = *((_DWORD *)ThreadLocalDataCache + 4);
    v15 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v15;
  }
  v17 = v24;
  v18 = 16419964;
  wil::details::RunFunctor((wil::details *)v22, (struct wil::details::IFunctor *)&v13, v11);
  if ( v14 )
    *((_DWORD *)v14 + 4) = v16;
  return 0LL;
}
