/*
 * XREFs of ?store@?$_Atomic_storage@_K$07@std@@QEAAX_K@Z @ 0x180042D00
 * Callers:
 *     ??4?$atomic@_K@std@@QEAA_K_K@Z @ 0x18004014C (--4-$atomic@_K@std@@QEAA_K_K@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU?$_Atomic_padded@_K@0@@Z @ 0x180012030 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU-$_Atomic_padded@_K@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18003F1D4 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 */

volatile __int64 *__fastcall std::_Atomic_storage<unsigned __int64,8>::store(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  volatile __int64 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Atomic_reinterpret_as<__int64,unsigned __int64>((__int64)&v5);
  result = (volatile __int64 *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>(v2);
  _InterlockedExchange64(result, v4);
  return result;
}
