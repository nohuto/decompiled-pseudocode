/*
 * XREFs of ?load@?$_Atomic_storage@I$03@std@@QEBAIXZ @ 0x18005E860
 * Callers:
 *     ??B?$atomic@I@std@@QEBAIXZ @ 0x180059D10 (--B-$atomic@I@std@@QEBAIXZ.c)
 * Callees:
 *     ??$_Atomic_address_as@HU?$_Atomic_padded@I@std@@@std@@YAPEDHAEBU?$_Atomic_padded@I@0@@Z @ 0x18001C770 (--$_Atomic_address_as@HU-$_Atomic_padded@I@std@@@std@@YAPEDHAEBU-$_Atomic_padded@I@0@@Z.c)
 */

__int64 __fastcall std::_Atomic_storage<unsigned int,4>::load(__int64 a1)
{
  return *(unsigned int *)std::_Atomic_address_as<int,std::_Atomic_padded<unsigned int>>(a1);
}
