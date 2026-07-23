/*
 * XREFs of EtwTraceLongDpcDetectionEvent @ 0x1405FD46C
 * Callers:
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceLongDpcDetectionEvent(int a1, char a2)
{
  int v3; // [rsp+30h] [rbp-28h] BYREF
  char v4; // [rsp+34h] [rbp-24h]
  __int16 v5; // [rsp+35h] [rbp-23h]
  char v6; // [rsp+37h] [rbp-21h]
  int *v7; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v5 = 0;
  v6 = 0;
  v3 = a1;
  v7 = &v3;
  v9 = 0;
  v4 = a2;
  v8 = 8;
  return EtwTraceKernelEvent((int)&v7, 1, 0x20040000u, 3958, 4196866);
}
