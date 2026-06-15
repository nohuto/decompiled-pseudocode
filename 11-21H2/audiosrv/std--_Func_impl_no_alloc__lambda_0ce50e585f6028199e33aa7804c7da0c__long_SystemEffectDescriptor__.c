/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0ce50e585f6028199e33aa7804c7da0c__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Copy @ 0x18006A250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0ce50e585f6028199e33aa7804c7da0c__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18016C6C8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
