/*
 * XREFs of PpmEventEnterPlatformIdleState @ 0x14059A550
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventEnterPlatformIdleState(int a1)
{
  __int64 result; // rax
  int *v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  int v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v4 = 0;
    v2 = &v5;
    v3 = 4;
    return EtwTraceKernelEvent((int)&v2, 1, 0x40008000u, 4667, 1538);
  }
  return result;
}
