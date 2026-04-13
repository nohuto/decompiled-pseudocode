/*
 * XREFs of ?Revoke@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x18003F308
 * Callers:
 *     ?UnlockCompleteDelegate@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180041B58 (-UnlockCompleteDelegate@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$A.c)
 *     ?UnlockProgressDelegate@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180041B88 (-UnlockProgressDelegate@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAUHSTRIN.c)
 *     Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::UnlockCompleteDelegate @ 0x18005FF3C (Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncActionCompletedHandler_1_ea_18005FF3C.c)
 *     Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::UnlockProgressDelegate @ 0x18005FF6C (Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncActionComple_ea_18005FF6C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Revoke(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  v4 = 0LL;
  v3 = v1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  return 0LL;
}
