/*
 * XREFs of EtwpTraceSplitIo @ 0x1405FEF50
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceSplitIo(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v6 = 0;
  v9 = 0;
  v4 = a1;
  v7 = a2;
  v5 = 8;
  v8 = 8;
  return EtwTraceKernelEvent((int)&v4, 2, 0x200000u, a3, 4200450);
}
