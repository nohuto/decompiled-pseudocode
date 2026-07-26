/*
 * XREFs of ?ndisVerifierNdisMIndicateStatusEx@@YAXPEAXPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00B2F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisMIndicateStatusEx(_QWORD *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  (*((void (__fastcall **)(_QWORD *, struct _NDIS_STATUS_INDICATION *, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNDIS_STATUS_INDICATION)))ndisVerifierNdisDispatch
   + 5))(
    a1,
    a2,
    a1[620],
    NdisMIndicateStatusEx);
}
