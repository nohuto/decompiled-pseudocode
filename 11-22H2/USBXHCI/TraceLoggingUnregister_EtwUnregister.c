/*
 * XREFs of TraceLoggingUnregister_EtwUnregister @ 0x1C00799B0
 * Callers:
 *     DriverCleanup @ 0x1C00798D0 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TraceLoggingUnregister_EtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return EtwUnregister(v2);
}
