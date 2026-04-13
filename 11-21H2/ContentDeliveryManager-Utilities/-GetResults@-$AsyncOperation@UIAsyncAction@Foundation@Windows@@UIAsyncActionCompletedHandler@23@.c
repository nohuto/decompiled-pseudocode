/*
 * XREFs of ?GetResults@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?StageOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180038730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::StageOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int32 v4; // edx
  signed __int32 v6; // ecx
  unsigned __int32 v7; // ebx
  signed __int32 v8; // ecx
  signed __int32 v10[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int32 v11; // [rsp+60h] [rbp+28h] BYREF
  signed __int32 v12; // [rsp+68h] [rbp+30h] BYREF
  signed __int32 v13; // [rsp+70h] [rbp+38h] BYREF
  signed __int32 v14; // [rsp+78h] [rbp+40h] BYREF

  v4 = *(_DWORD *)(a1 - 120);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v4, -2);
  if ( v13 != 3 )
  {
    if ( v13 != 1 )
    {
      v7 = -2147483634;
      RoOriginateError(2147483662LL, 0LL, a3, a4);
      return v7;
    }
    v11 = 0;
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(a1 - 120);
  v14 = -2;
  _InterlockedCompareExchange(&v14, v6, -2);
  if ( v14 == 3 )
  {
    _InterlockedCompareExchange(&v12, *(_DWORD *)(a1 - 116), v12);
    if ( *(_QWORD *)(a1 - 128) )
      SetRestrictedErrorInfo();
  }
  else
  {
    v12 = 0;
  }
  v7 = v12;
  v11 = v12;
  if ( v12 >= 0 )
  {
LABEL_11:
    v8 = *(_DWORD *)(a1 - 120);
    v10[0] = -2;
    _InterlockedCompareExchange(v10, v8, -2);
    if ( v10[0] == 3 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&v11, *(_DWORD *)(a1 - 116), v11);
      if ( *(_QWORD *)(a1 - 128) )
        SetRestrictedErrorInfo();
      return v11;
    }
    else
    {
      return 0;
    }
  }
  return v7;
}
