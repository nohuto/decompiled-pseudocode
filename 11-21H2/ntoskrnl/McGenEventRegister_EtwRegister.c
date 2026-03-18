/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1403DDD24
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x1402D1304 (CcInitializeVolumeCacheMap.c)
 *     CarEtwRegister @ 0x140602644 (CarEtwRegister.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     PnpDiagInitialize @ 0x140B2F500 (PnpDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
