/*
 * XREFs of NdisCancelSendPackets @ 0x1C009CBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisCancelSendPackets(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 16) + 2608LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2488LL));
}
