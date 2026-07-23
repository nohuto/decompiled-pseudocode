/*
 * XREFs of KiInterruptHandler @ 0x140571E04
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiInterruptHandler(ULONG_PTR BugCheckParameter1, __int64 a2, ULONG_PTR a3)
{
  KeBugCheckEx(61 - ((*(_DWORD *)(BugCheckParameter1 + 4) & 0x66) != 0), BugCheckParameter1, a3, 0LL, 0LL);
}
