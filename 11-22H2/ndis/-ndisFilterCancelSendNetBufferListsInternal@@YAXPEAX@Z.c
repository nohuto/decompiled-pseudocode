/*
 * XREFs of ?ndisFilterCancelSendNetBufferListsInternal@@YAXPEAX@Z @ 0x1C0065700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisFilterCancelSendNetBufferListsInternal(_QWORD *Parameter)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(Parameter[1] + 560LL))(*(_QWORD *)(Parameter[1] + 568LL), Parameter[3]);
}
