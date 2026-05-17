/*
 * XREFs of LdrpFreeReplacedModule @ 0x180067B24
 * Callers:
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContext @ 0x180067BF0 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180067C90 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x180067BF0 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
