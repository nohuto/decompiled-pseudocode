/*
 * XREFs of ExtensionSendStorportData @ 0x1C0041178
 * Callers:
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C00A72DC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C00A9E70 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtensionSendStorportData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v2 = ((__int64 (__fastcall *)(__int64, __int64, int *))ExtSendStorportData)(a1, a2, &dword_1C0092000);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v2;
}
