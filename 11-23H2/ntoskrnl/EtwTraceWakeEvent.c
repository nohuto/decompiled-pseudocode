/*
 * XREFs of EtwTraceWakeEvent @ 0x1409E61A8
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1407385C0 (PspChargeProcessWakeCounter.c)
 *     PspSendWakeNotification @ 0x1407DA678 (PspSendWakeNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWakeEvent(__int64 a1, __int16 a2)
{
  __int64 *v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+3Ch] [rbp-1Ch]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1;
  v3 = &v6;
  v5 = 0;
  v4 = 8;
  return EtwTraceKernelEvent((int)&v3, 1, 0x80000400, a2 + 864, 5249282);
}
