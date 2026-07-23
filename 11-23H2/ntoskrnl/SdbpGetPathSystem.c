/*
 * XREFs of SdbpGetPathSystem @ 0x140A53230
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A532F0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A576AC (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  _WORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v9; // [rsp+34h] [rbp-14h] BYREF

  v9 = 0;
  v8[0] = 0;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v9, v8, a4);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)v8),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}
