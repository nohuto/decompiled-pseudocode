/*
 * XREFs of ACPIEcGetUid @ 0x1C00AD748
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053300 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 */

__int64 *__fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 *result; // rax
  volatile signed __int32 *v3; // rsi
  int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  *(_DWORD *)(a1 + 16) = 0;
  result = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1145656671);
  v3 = (volatile signed __int32 *)result;
  if ( result )
  {
    v7 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v4 = AMLIEvalNameSpaceObject(result, (__int64)&v5, 0, 0LL);
    result = (__int64 *)AMLIDereferenceHandleEx(v3);
    if ( v4 >= 0 )
    {
      if ( WORD1(v5) == 1 )
        *(_DWORD *)(a1 + 16) = (unsigned __int8)v6;
      return (__int64 *)AMLIFreeDataBuffs((__int64)&v5);
    }
  }
  return result;
}
