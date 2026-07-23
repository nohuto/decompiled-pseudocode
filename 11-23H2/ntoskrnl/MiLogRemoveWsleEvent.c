/*
 * XREFs of MiLogRemoveWsleEvent @ 0x14061C86C
 * Callers:
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiRemoveWsleList @ 0x1402A8060 (MiRemoveWsleList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiFillPageExtraInfo @ 0x14061C740 (MiFillPageExtraInfo.c)
 */

__int64 __fastcall MiLogRemoveWsleEvent(__int64 a1, int a2)
{
  unsigned __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  MiFillPageExtraInfo(&v3, a2, a1);
  v6 = 0;
  v4 = &v3;
  v5 = 8;
  return EtwTraceKernelEvent((int)&v4, 1, 0x28000000u, 643, 289413890);
}
