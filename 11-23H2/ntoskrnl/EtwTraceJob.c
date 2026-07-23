/*
 * XREFs of EtwTraceJob @ 0x1409E5598
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     NtTerminateJobObject @ 0x1407DD4A0 (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1407DD604 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtOpenJobObject @ 0x1407EA2C0 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408A6D94 (EtwpCopyJobGuidSafe.c)
 *     EtwpPsProvTraceJob @ 0x1409E66E8 (EtwpPsProvTraceJob.c)
 */

__int64 __fastcall EtwTraceJob(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  unsigned int v13; // [rsp+48h] [rbp-28h]
  __int128 *v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ch] [rbp-14h]

  v12 = 0LL;
  v13 = 0;
  v11 = 0LL;
  EtwpCopyJobGuidSafe(&v11, a1);
  if ( v6 )
    LODWORD(v12) = *(_DWORD *)(v6 + 1452);
  else
    LODWORD(v12) = v5 & v12;
  v16 = 0;
  HIDWORD(v12) = v7;
  v13 = v9;
  v14 = &v11;
  v15 = 28;
  if ( v8 && EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 0x80000) != 0 )
    EtwpPsProvTraceJob(v8, v9, a4);
  return EtwTraceKernelEvent((int)&v14, 1, 0x80000u, a4, 5249284);
}
