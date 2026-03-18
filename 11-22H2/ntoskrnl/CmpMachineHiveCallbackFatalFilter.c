/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x140A0F79C
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x1408613D0 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 80), BugCheckParameter4);
}
