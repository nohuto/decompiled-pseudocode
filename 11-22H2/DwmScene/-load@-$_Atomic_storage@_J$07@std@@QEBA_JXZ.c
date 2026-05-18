/*
 * XREFs of ?load@?$_Atomic_storage@_J$07@std@@QEBA_JXZ @ 0x180070B24
 * Callers:
 *     ??B?$atomic@_J@std@@QEBA_JXZ @ 0x180070990 (--B-$atomic@_J@std@@QEBA_JXZ.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPED_JAEBU?$_Atomic_padded@_K@0@@Z @ 0x180039B20 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPED_JAEBU-$_Atomic_padded@_K@0@@Z.c)
 */

__int64 __fastcall std::_Atomic_storage<__int64,8>::load(__int64 a1)
{
  return *(_QWORD *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>(a1);
}
