/*
 * XREFs of sub_140A6BD80 @ 0x140A6BD80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140560DE0 @ 0x140560DE0 (sub_140560DE0.c)
 */

void __fastcall __noreturn sub_140A6BD80(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
  sub_140560DE0();
}
