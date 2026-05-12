/*
 * XREFs of ExtensionSendMiniportData @ 0x1C0041104
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtensionSendMiniportData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v2 = ((__int64 (__fastcall *)(__int64, __int64, int *))ExtSendMiniportData)(a1, a2, &dword_1C0092000);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v2;
}
