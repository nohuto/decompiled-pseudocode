/*
 * XREFs of sub_140231450 @ 0x140231450
 * Callers:
 *     sub_1406A8B68 @ 0x1406A8B68 (sub_1406A8B68.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140982B6C @ 0x140982B6C (sub_140982B6C.c)
 *     sub_1409F5D80 @ 0x1409F5D80 (sub_1409F5D80.c)
 *     sub_1409F6670 @ 0x1409F6670 (sub_1409F6670.c)
 *     sub_1409F66F0 @ 0x1409F66F0 (sub_1409F66F0.c)
 *     sub_1409F6770 @ 0x1409F6770 (sub_1409F6770.c)
 *     sub_1409F67F0 @ 0x1409F67F0 (sub_1409F67F0.c)
 *     sub_1409FCB38 @ 0x1409FCB38 (sub_1409FCB38.c)
 *     sub_1409FE284 @ 0x1409FE284 (sub_1409FE284.c)
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 *     sub_1409FFD10 @ 0x1409FFD10 (sub_1409FFD10.c)
 *     sub_140A001D0 @ 0x140A001D0 (sub_140A001D0.c)
 *     sub_140A004F0 @ 0x140A004F0 (sub_140A004F0.c)
 *     sub_140A00A80 @ 0x140A00A80 (sub_140A00A80.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140231450(struct _MDL *P)
{
  MmUnlockPages(P);
  ExFreePoolWithTag(P, 0);
}
