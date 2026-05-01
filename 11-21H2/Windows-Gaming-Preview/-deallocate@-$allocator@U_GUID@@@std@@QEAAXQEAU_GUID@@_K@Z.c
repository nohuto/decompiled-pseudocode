/*
 * XREFs of ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x18001AB20
 * Callers:
 *     _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$0 @ 0x18004C985 (_std--vector__GUID_std--allocator__GUID___--_Reallocate_exactly_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<_GUID>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 16 * a3);
}
