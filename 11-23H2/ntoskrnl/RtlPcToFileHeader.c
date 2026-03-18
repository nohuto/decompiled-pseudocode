/*
 * XREFs of RtlPcToFileHeader @ 0x1403C4040
 * Callers:
 *     RtlGuardRestoreContext @ 0x140340284 (RtlGuardRestoreContext.c)
 *     KiLockExtendedServiceTable @ 0x1403E3878 (KiLockExtendedServiceTable.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405B1EE8 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1405FFDDC (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14077DD7C (EtwpLocateDbgIdForRegEntry.c)
 *     MiCallDllInitialize @ 0x140810FFC (MiCallDllInitialize.c)
 *     MiCallDllUnload @ 0x140865250 (MiCallDllUnload.c)
 *     KeSetTracepoint @ 0x140975D30 (KeSetTracepoint.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402A3C80 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1 >= *((_QWORD *)&xmmword_140E00030 + 1)
    && a1 < *((_QWORD *)&xmmword_140E00030 + 1) + (unsigned __int64)(unsigned int)qword_140E00040 )
  {
    v4 = xmmword_140E00030;
  }
  else
  {
    RtlpxLookupFunctionTable(a1, (__int64)&v4);
  }
  result = *((_QWORD *)&v4 + 1);
  *a2 = *((_QWORD *)&v4 + 1);
  return result;
}
