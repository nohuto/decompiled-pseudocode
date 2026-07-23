/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x18006B3A4
 * Callers:
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x18006B304 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x18006B238 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x18006B3E0 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rax
  PVOID *v3; // rcx

  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = LdrpHandleReplacedModule();
    v3 = *(PVOID **)(a1 + 80);
    if ( (PVOID *)v2 != v3 )
      LdrpFreeReplacedModule(v3);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
