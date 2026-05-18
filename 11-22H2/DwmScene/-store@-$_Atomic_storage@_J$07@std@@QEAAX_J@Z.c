/*
 * XREFs of ?store@?$_Atomic_storage@_J$07@std@@QEAAX_J@Z @ 0x180070B40
 * Callers:
 *     ??4?$atomic@_J@std@@QEAA_J_J@Z @ 0x180070978 (--4-$atomic@_J@std@@QEAA_J_J@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU?$_Atomic_padded@_K@0@@Z @ 0x180012030 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU-$_Atomic_padded@_K@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@_J_J@std@@YA_JAEB_J@Z @ 0x18007096C (--$_Atomic_reinterpret_as@_J_J@std@@YA_JAEB_J@Z.c)
 */

volatile __int64 *std::_Atomic_storage<__int64,8>::store()
{
  __int64 v0; // r8
  volatile __int64 *result; // rax
  __int64 v2; // rdx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0LL;
  std::_Atomic_reinterpret_as<__int64,__int64>((__int64)v3);
  result = (volatile __int64 *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>(v0);
  _InterlockedExchange64(result, v2);
  return result;
}
