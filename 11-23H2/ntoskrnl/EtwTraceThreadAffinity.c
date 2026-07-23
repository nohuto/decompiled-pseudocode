/*
 * XREFs of EtwTraceThreadAffinity @ 0x140467B10
 * Callers:
 *     KiSetAffinityThread @ 0x14020327C (KiSetAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadAffinity(__int64 a1, __int64 *a2)
{
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  __int16 v5; // [rsp+3Ch] [rbp-2Ch]
  __int16 v6; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 1232);
  v3 = *a2;
  v5 = *((_WORD *)a2 + 4);
  v6 = 0;
  v7[0] = &v3;
  v7[1] = 16LL;
  return EtwTraceKernelEvent((int)v7, 1, 0x20001000u, 1333, 5249282);
}
