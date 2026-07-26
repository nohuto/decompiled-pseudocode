/*
 * XREFs of ?ndisFilterCancelSendNetBufferListsInternal@@YAXPEAX@Z @ 0x1C0060780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFilterCancelSendNetBufferListsInternal(_QWORD *Parameter)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(Parameter[1] + 560LL))(*(_QWORD *)(Parameter[1] + 568LL), Parameter[3]);
}
