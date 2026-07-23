/*
 * XREFs of EtwTraceJobAssignProcess @ 0x1409E5678
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14069FE70 (NtAssignProcessToJobObject.c)
 *     PspAssignProcessToJobList @ 0x1409B10B0 (PspAssignProcessToJobList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408A6D94 (EtwpCopyJobGuidSafe.c)
 */

__int64 __fastcall EtwTraceJobAssignProcess(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // r9d
  __int128 v5; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h]
  int v7; // [rsp+48h] [rbp-28h]
  __int128 *v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]

  v6 = 0LL;
  v7 = 0;
  v5 = 0LL;
  EtwpCopyJobGuidSafe(&v5, a1);
  if ( v1 )
    LODWORD(v6) = *(_DWORD *)(v1 + 1452);
  else
    LODWORD(v6) = 0;
  v10 = 0;
  HIDWORD(v6) = v3;
  v7 = v2;
  v8 = &v5;
  v9 = 28;
  return EtwTraceKernelEvent((int)&v8, 1, 0x80000u, 1827, 5249284);
}
