/*
 * XREFs of EtwTraceAntiStarvationBoost @ 0x1404121E8
 * Callers:
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAntiStarvationBoost(__int64 a1, char a2)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  __int16 v5; // [rsp+34h] [rbp-24h]
  char v6; // [rsp+36h] [rbp-22h]
  char v7; // [rsp+37h] [rbp-21h]
  int *v8; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]

  v4 = *(_DWORD *)(a1 + 1232);
  v2 = *(_DWORD *)(a1 + 536);
  v10 = 0;
  v5 = v2;
  v6 = a2;
  v8 = &v4;
  v7 = 0;
  v9 = 8;
  return EtwTraceKernelEvent((int)&v8, 1, 0x40000001u, 1340, 4200450);
}
