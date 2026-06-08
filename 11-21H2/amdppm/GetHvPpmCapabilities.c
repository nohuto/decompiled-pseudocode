/*
 * XREFs of GetHvPpmCapabilities @ 0x1C0023DB4
 * Callers:
 *     InitDriver @ 0x1C00200A8 (InitDriver.c)
 *     RegisterHvIdleStates @ 0x1C0024720 (RegisterHvIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C003D384 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 */

NTSTATUS __fastcall GetHvPpmCapabilities(bool *a1, bool *a2)
{
  bool v4; // bl
  bool v5; // si
  NTSTATUS result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  SystemInformation = 0LL;
  v5 = 0;
  result = ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, (ULONG)16, 0LL);
  if ( result >= 0 )
  {
    v4 = (WORD4(SystemInformation) & 0x400) != 0LL;
    v5 = (*((_QWORD *)&SystemInformation + 1) & 0x20000LL) != 0;
  }
  if ( a1 )
    *a1 = v4;
  if ( a2 )
    *a2 = v5;
  return result;
}
