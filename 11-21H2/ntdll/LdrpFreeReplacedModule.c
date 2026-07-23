/*
 * XREFs of LdrpFreeReplacedModule @ 0x18006B238
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFreeLoadContext @ 0x18006B304 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006B3A4 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x18006B304 (LdrpFreeLoadContext.c)
 */

int __fastcall LdrpFreeReplacedModule(PVOID *BaseAddress)
{
  LdrpFreeLoadContext(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return LdrpDereferenceModule((char *)BaseAddress);
}
