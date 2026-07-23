/*
 * XREFs of sub_140648720 @ 0x140648720
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042C360 @ 0x14042C360 (sub_14042C360.c)
 */

void __fastcall __noreturn sub_140648720(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  sub_14042C360(
    *((_DWORD *)DeferredContext + 16),
    *((_QWORD *)DeferredContext + 9),
    *((_QWORD *)DeferredContext + 10),
    *((_QWORD *)DeferredContext + 11),
    *((_QWORD *)DeferredContext + 12));
}
