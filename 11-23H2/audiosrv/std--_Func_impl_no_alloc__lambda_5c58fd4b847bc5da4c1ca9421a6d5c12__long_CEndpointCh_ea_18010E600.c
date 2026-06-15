/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call @ 0x18010E600
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBA0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_5c58fd4b847bc5da4c1ca9421a6d5c12__long_CEndpointCharacteristics___::_Do_call(
        __int64 a1,
        CEndpointCharacteristics **a2)
{
  CEndpointCharacteristics *v2; // r8
  struct _GUID v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  v4 = *(struct _GUID *)*(_QWORD *)(a1 + 8);
  return CEndpointCharacteristics::RemoveEffectPack(v2, &v4);
}
