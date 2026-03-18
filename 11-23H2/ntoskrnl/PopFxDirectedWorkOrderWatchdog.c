/*
 * XREFs of PopFxDirectedWorkOrderWatchdog @ 0x14058A0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopFxDirectedWorkOrderWatchdog(__int64 a1, __int64 a2)
{
  KeBugCheckEx(0x9Fu, 5uLL, *(_QWORD *)(a2 - 976 + 96), a2 - 976, 0LL);
}
