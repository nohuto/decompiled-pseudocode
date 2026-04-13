/*
 * XREFs of ?get_Status@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAW4AsyncStatus@Foundation@Windows@ABI@@@Z @ 0x18004A3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Status(
        __int64 a1,
        unsigned int *a2)
{
  signed __int32 v2; // r8d
  __int64 v3; // r8
  signed __int32 v4; // ecx
  unsigned int v5; // ebx
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v8 = -2;
  _InterlockedCompareExchange((volatile signed __int32 *)&v8, v2, -2);
  v3 = v8;
  *a2 = v8;
  v4 = *(_DWORD *)(a1 + 48);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v4, -2);
  if ( v7 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL, v3, 4294967294LL);
  }
  else
  {
    v5 = 0;
    if ( v7 == -1 )
      return (unsigned int)-2147483623;
  }
  return v5;
}
