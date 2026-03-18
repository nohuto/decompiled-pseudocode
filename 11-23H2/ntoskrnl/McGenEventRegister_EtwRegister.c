/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x140374E18
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14032F034 (CcInitializeVolumeCacheMap.c)
 *     CarEtwRegister @ 0x1405D29E8 (CarEtwRegister.c)
 *     PnpDiagInitialize @ 0x140B3F90C (PnpDiagInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14078D880 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
