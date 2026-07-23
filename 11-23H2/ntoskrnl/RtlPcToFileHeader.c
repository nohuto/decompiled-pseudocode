/*
 * XREFs of RtlPcToFileHeader @ 0x1403C4220
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340514 (RtlGuardRestoreContext.c)
 *     KiLockExtendedServiceTable @ 0x1403E3A58 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B2458 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14060034C (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14077DF6C (EtwpLocateDbgIdForRegEntry.c)
 *     MiCallDllInitialize @ 0x1408112CC (MiCallDllInitialize.c)
 *     MiCallDllUnload @ 0x140865490 (MiCallDllUnload.c)
 *     KeSetTracepoint @ 0x140975F30 (KeSetTracepoint.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402A3F10 (RtlpxLookupFunctionTable.c)
 */

PVOID __cdecl RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_140E00030 + 1)
    && (unsigned __int64)PcValue < *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
  {
    v4 = xmmword_140E00030;
  }
  else
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
