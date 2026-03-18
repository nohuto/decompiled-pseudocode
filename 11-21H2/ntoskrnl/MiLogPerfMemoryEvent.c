/*
 * XREFs of MiLogPerfMemoryEvent @ 0x140583E7C
 * Callers:
 *     MiLogMemResetInfo @ 0x14096B2A0 (MiLogMemResetInfo.c)
 *     MiLogSectionObjectEvent @ 0x14096C0AC (MiLogSectionObjectEvent.c)
 *     MiLogMapFileEvent @ 0x14096CDB8 (MiLogMapFileEvent.c)
 *     MiLogVirtualRotateEvent @ 0x14096D0B8 (MiLogVirtualRotateEvent.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall MiLogPerfMemoryEvent(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = a4;
  EtwTraceKernelEvent((__int64)&v5, 1u, a2, a1, a5 | 0x11000200);
}
