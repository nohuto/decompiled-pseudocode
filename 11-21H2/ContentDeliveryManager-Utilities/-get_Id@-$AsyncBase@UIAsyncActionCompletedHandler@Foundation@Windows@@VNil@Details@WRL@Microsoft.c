/*
 * XREFs of ?get_Id@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?InvokeOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAI@Z @ 0x1800495B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::InvokeOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Id(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  signed __int32 v4; // ecx
  unsigned int v5; // ebx
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 48);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v4, -2);
  if ( v7 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL, a3, a4);
  }
  else
  {
    v5 = 0;
    if ( v7 == -1 )
      return (unsigned int)-2147483623;
  }
  return v5;
}
