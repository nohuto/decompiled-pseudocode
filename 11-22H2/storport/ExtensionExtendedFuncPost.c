/*
 * XREFs of ExtensionExtendedFuncPost @ 0x1C0040FFC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 ExtensionExtendedFuncPost()
{
  unsigned int v0; // ecx

  v0 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v0 = ((__int64 (__fastcall *)(int *))ExtExtendedFuncPost)(&dword_1C0092038);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v0;
}
