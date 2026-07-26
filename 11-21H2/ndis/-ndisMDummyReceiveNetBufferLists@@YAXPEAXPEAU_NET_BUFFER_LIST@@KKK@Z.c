/*
 * XREFs of ?ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098CDC
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013860 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblDropNdis @ 0x1C00CCC38 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisMDummyReceiveNetBufferLists(_DWORD *a1, struct _NET_BUFFER_LIST *a2, int a3, __int64 a4, char a5)
{
  if ( byte_1C00EC210 && (a1[1465] & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)a1 + 5808, (_DWORD)a2, a3, 1, -1071448033, -536866808);
  if ( (a5 & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))a1 + 307))(*((_QWORD *)a1 + 293), a2, a5 & 1);
}
