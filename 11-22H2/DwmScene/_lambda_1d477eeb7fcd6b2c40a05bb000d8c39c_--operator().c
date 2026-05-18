/*
 * XREFs of _lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_::operator() @ 0x1800573EC
 * Callers:
 *     ?DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV?$unique_lock@Vmutex@std@@@std@@@Z @ 0x1800578BC (-DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV-$unique_lock@Vmutex@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_::operator()(_QWORD *a1)
{
  return std::_Atomic_storage<bool,1>::load(*a1 + 426LL);
}
