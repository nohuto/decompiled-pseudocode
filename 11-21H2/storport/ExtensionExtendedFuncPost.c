/*
 * XREFs of ExtensionExtendedFuncPost @ 0x1C003E76C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtensionExtendedFuncPost(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ExtExtendedFuncPost)(a1, a2, a3, 3221225474LL);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v3;
}
