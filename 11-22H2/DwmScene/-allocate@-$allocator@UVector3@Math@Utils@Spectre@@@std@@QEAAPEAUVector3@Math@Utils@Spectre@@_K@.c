/*
 * XREFs of ?allocate@?$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@Z @ 0x180085D68
 * Callers:
 *     ??$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@QEAU2345@AEBU2345@@Z @ 0x18008C9EC (--$_Emplace_reallocate@AEBUVector3@Math@Utils@Spectre@@@-$vector@UVector3@Math@Utils@Spectre@@V-.c)
 *     ?_Buy_raw@?$vector@UVector3@Math@Utils@Spectre@@V?$allocator@UVector3@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008D494 (-_Buy_raw@-$vector@UVector3@Math@Utils@Spectre@@V-$allocator@UVector3@Math@Utils@Spectre@@@std@@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void *__fastcall std::allocator<Spectre::Utils::Math::Vector3>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1555555555555555LL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(12 * a2);
}
