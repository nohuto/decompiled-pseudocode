/*
 * XREFs of LdrpFreeReplacedModule @ 0x180067B44
 * Callers:
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContext @ 0x180067C10 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180067CB0 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x180067C10 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
