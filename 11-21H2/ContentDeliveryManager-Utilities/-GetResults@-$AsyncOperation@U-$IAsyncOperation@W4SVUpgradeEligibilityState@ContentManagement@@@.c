/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAW4SVUpgradeEligibilityState@ContentManagement@@@Z @ 0x180038680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  signed __int32 v7; // ecx
  int v8; // ebx
  signed __int32 v10; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v11; // [rsp+48h] [rbp+28h] BYREF
  signed __int32 v12; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0;
  v5 = *(unsigned int *)(a1 - 120);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v5, -2);
  if ( v11 != 3 )
  {
    if ( v11 != 1 )
    {
      v8 = -2147483634;
      RoOriginateError(2147483662LL, 0LL, v5, a4);
      return (unsigned int)v8;
    }
    goto LABEL_8;
  }
  v7 = *(_DWORD *)(a1 - 120);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v7, -2);
  if ( v12 == 3 )
  {
    _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 - 116), v10);
    if ( *(_QWORD *)(a1 - 128) )
      SetRestrictedErrorInfo();
    v8 = v10;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 >= 0 )
  {
LABEL_8:
    v8 = 0;
    *a2 = *(_DWORD *)(a1 + 120);
  }
  return (unsigned int)v8;
}
