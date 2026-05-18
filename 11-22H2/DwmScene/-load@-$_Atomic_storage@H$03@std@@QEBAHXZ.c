/*
 * XREFs of ?load@?$_Atomic_storage@H$03@std@@QEBAHXZ @ 0x18001DF80
 * Callers:
 *     ??B?$atomic@H@std@@QEBAHXZ @ 0x18001D348 (--B-$atomic@H@std@@QEBAHXZ.c)
 * Callees:
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@I@std@@@std@@YAPEDHAEBU?$_Atomic_padded@I@0@@Z @ 0x18001C770 (--$_Atomic_address_as@HU-$_Atomic_padded@I@std@@@std@@YAPEDHAEBU-$_Atomic_padded@I@0@@Z.c)
 */

__int64 __fastcall std::_Atomic_storage<int,4>::load(__int64 a1)
{
  return *(unsigned int *)std::_Atomic_address_as<int,std::_Atomic_padded<unsigned int>>(a1);
}
