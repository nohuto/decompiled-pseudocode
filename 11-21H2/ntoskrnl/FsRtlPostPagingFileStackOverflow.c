/*
 * XREFs of FsRtlPostPagingFileStackOverflow @ 0x140542F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140542FC4 @ 0x140542FC4 (sub_140542FC4.c)
 */

void __stdcall FsRtlPostPagingFileStackOverflow(
        PVOID Context,
        PKEVENT Event,
        PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  char v3; // r9

  v3 = 1;
  sub_140542FC4(Context, Event, StackOverflowRoutine, v3);
}
