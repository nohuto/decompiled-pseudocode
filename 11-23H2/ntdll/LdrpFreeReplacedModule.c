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

int __fastcall LdrpFreeReplacedModule(PVOID *BaseAddress)
{
  LdrpFreeLoadContext(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return LdrpDereferenceModule((char *)BaseAddress);
}
