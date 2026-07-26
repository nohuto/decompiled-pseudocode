/*
 * XREFs of NdisGetRoutineAddress @ 0x1C00B30C0
 * Callers:
 *     ?ndisVerifierGetRoutineAddress@@YAPEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00B2CF0 (-ndisVerifierGetRoutineAddress@@YAPEAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     FindExportedRoutineByName @ 0x1C00B2FC4 (FindExportedRoutineByName.c)
 */

PVOID __stdcall NdisGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  char *ExportedRoutineByName; // rax
  char *v3; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING v5; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v5 = 0LL;
  if ( RtlUnicodeStringToAnsiString(&DestinationString, NdisRoutineName, 1u) < 0 )
    return 0LL;
  if ( ndisGetSystemRoutineAddressEx )
  {
    RtlInitUnicodeString(&v5, L"ndis.sys");
    ExportedRoutineByName = (char *)((__int64 (__fastcall *)(_UNICODE_STRING *, char *))ndisGetSystemRoutineAddressEx)(
                                      &v5,
                                      DestinationString.Buffer);
  }
  else
  {
    ExportedRoutineByName = FindExportedRoutineByName(*((char **)ndisDriverObject + 3), (__int64)&DestinationString);
  }
  v3 = ExportedRoutineByName;
  RtlFreeAnsiString(&DestinationString);
  return v3;
}
