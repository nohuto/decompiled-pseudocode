/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1405FF130
 * Callers:
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x140975D90 (KiTrackSystemCallEntry.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  __int64 CurrentServerSilo; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v4 = a1;
  v5 = &v4;
  v7 = 0;
  v6 = 8;
  CurrentServerSilo = PsGetCurrentServerSilo();
  EtwTraceSiloKernelEvent(CurrentServerSilo, (int)&v5, 1, 0x40000040u, 3891, 5249026);
  return a1;
}
