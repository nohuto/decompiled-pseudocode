/*
 * XREFs of ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x180030230
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@$$QEAV_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@@Z @ 0x1800245B4 (--$MakeAsyncAction@U-$AsyncCausalityOptions@$1-AddThumbnailToCacheAsyncActionName@ContentManagem.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync(
        ContentManagement::ThumbnailCacheHelper *this,
        HSTRING a2,
        int a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v6; // ebx
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v13[4]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  char v15; // [rsp+38h] [rbp-28h]
  HSTRING string; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  HSTRING newString; // [rsp+78h] [rbp+18h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v14 = 0LL;
    v15 = 0;
    v7 = WindowsDuplicateString(a2, &newString);
    v6 = v7;
    if ( v7 < 0 )
    {
      v10 = (unsigned int)v7;
      v11 = 162LL;
    }
    else
    {
      v8 = newString;
      WindowsDeleteString(0LL);
      string = v8;
      v14 = 0LL;
      v17 = 0;
      v15 = 1;
      v18 = a3;
      v13[0] = 1;
      v13[1] = 128;
      v13[2] = 0;
      v6 = Windows::Internal::MakeAsyncAction<Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>,Windows::Internal::ComTaskPoolHandler,_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_>(
             (__int64)v13,
             a4,
             v9,
             (__int64)&string);
      if ( string )
        WindowsDeleteString(string);
      if ( (v6 & 0x80000000) == 0 )
        return 0;
      v10 = v6;
      v11 = 185LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v10,
      v13[0]);
    return v6;
  }
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)0x80070057LL,
    v13[0]);
  return v6;
}
