/*
 * XREFs of ?ndisVerifierNdisFIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00B2DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisFIndicateReceiveNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2)
{
  (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *))ndisVerifierNdisDispatch + 16))(a1, a2);
}
