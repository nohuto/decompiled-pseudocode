/*
 * XREFs of sub_14042C360 @ 0x14042C360
 * Callers:
 *     sub_140648720 @ 0x140648720 (sub_140648720.c)
 *     DeferredRoutine @ 0x140648750 (DeferredRoutine.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn sub_14042C360(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  retaddr = 0LL;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
