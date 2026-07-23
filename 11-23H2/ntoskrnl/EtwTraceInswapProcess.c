/*
 * XREFs of EtwTraceInswapProcess @ 0x1405FD37C
 * Callers:
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceInswapProcess(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v1 = *(_DWORD *)(a1 + 1088);
  v5 = 0;
  v4 = v1;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  v6 = &v3;
  v8 = 0;
  v7 = 12;
  return EtwTraceKernelEvent((int)&v6, 1, 0x20000800u, 803, 5249282);
}
