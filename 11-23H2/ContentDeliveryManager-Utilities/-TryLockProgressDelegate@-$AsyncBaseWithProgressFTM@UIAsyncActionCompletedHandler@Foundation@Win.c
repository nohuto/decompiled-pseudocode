/*
 * XREFs of ?TryLockProgressDelegate@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAA_NXZ @ 0x180041978
 * Callers:
 *     ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180032AB4 (-FireProgress@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINil.c)
 *     ?GetOnProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUINilDelegate@23@@Z @ 0x1800361A0 (-GetOnProgress@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windo.c)
 *     Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireProgress @ 0x180056904 (Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncActionComple_ea_180056904.c)
 *     Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::GetOnProgress @ 0x180059360 (Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncActionComple_ea_180059360.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryLockProgressDelegate(
        __int64 a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *(_DWORD *)(a1 + 152);
  while ( v1 > 0 && v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), v1 + 1, v1) );
  return v1 > 0;
}
