/*
 * XREFs of MiLogKernelStackEvent @ 0x140645454
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14021B0F0 (MiInPageSingleKernelStack.c)
 *     MmDeleteKernelStackEx @ 0x14026FB60 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4[2] = a2;
  v4[1] = a1;
  v4[0] = 11LL;
  v5 = v4;
  v7 = 0;
  v6 = 24;
  return EtwTraceKernelEvent((int)&v5, 1, 0x20000001u, 633 - (a3 != 0), 289413892);
}
