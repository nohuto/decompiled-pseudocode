/*
 * XREFs of sub_1C0022D64 @ 0x1C0022D64
 * Callers:
 *     sub_1C00031D0 @ 0x1C00031D0 (sub_1C00031D0.c)
 *     sub_1C0019FDC @ 0x1C0019FDC (sub_1C0019FDC.c)
 *     sub_1C0074EE0 @ 0x1C0074EE0 (sub_1C0074EE0.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_1C0022D64(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
