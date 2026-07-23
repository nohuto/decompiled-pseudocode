/*
 * XREFs of PpmTracePerfIdleRundown @ 0x140598370
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     PpmPerfGetCurrentState @ 0x14032A848 (PpmPerfGetCurrentState.c)
 *     PpmEventIdleStateChange @ 0x14034EB08 (PpmEventIdleStateChange.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(_QWORD *a1)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-20h]
  __int128 *v6; // [rsp+48h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1[4246] )
  {
    PpmPerfGetCurrentState((__int64)a1, (_DWORD *)&v4 + 1, 0LL, 0LL, &v4, 0LL);
    v8 = 0;
    DWORD2(v4) = DWORD1(v4);
    v5 = a1[25];
    v6 = &v4;
    v7 = 24;
    EtwTraceKernelEvent((int)&v6, 1, 0x80008000, 4659, 4200450);
  }
  v2 = a1[4200];
  if ( v2 )
    PpmEventIdleStateChange(*(_DWORD *)(v2 + 24), *(_DWORD *)(v2 + 24));
  return 0LL;
}
