/*
 * XREFs of EtwpTraceRedirectedIo @ 0x1405FEEA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x14028C420 (PsGetThreadServerSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceRedirectedIo(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  ThreadServerSilo = *(_QWORD *)(a1 + 152);
  v5 = a1;
  if ( ThreadServerSilo )
    ThreadServerSilo = PsGetThreadServerSilo(ThreadServerSilo);
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 24);
  else
    v6 = 0LL;
  v9 = 0;
  v7 = &v5;
  v8 = 16;
  return EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v7, 1, 0x300u, 272, 290461954);
}
