/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x18010DED0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x18010E2D0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlStdDeleteStackDatabase(_QWORD *a1)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = a1[23] - (_QWORD)a1;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
}
