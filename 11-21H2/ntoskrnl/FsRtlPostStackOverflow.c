/*
 * XREFs of FsRtlPostStackOverflow @ 0x140542F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140542FC4 @ 0x140542FC4 (sub_140542FC4.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  sub_140542FC4(Context, Event, StackOverflowRoutine, 0LL);
}
