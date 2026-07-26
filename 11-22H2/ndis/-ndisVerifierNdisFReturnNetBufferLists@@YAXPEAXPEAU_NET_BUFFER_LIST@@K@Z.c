/*
 * XREFs of ?ndisVerifierNdisFReturnNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B2E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisFReturnNetBufferLists(_QWORD *a1, struct _NET_BUFFER_LIST *a2, __int64 a3)
{
  (*((void (__fastcall **)(_QWORD *, struct _NET_BUFFER_LIST *, __int64, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG)))ndisVerifierNdisDispatch
   + 15))(
    a1,
    a2,
    a3,
    a1[97],
    NdisFReturnNetBufferLists);
}
