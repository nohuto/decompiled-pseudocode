/*
 * XREFs of ExtensionSendStorportData @ 0x1C003E8DC
 * Callers:
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1C008CD90 (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1C008F530 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtensionSendStorportData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v2 = ((__int64 (__fastcall *)(__int64, __int64, int *))ExtSendStorportData)(a1, a2, &dword_1C0079220);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v2;
}
