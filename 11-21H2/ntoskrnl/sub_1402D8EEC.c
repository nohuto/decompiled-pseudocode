/*
 * XREFs of sub_1402D8EEC @ 0x1402D8EEC
 * Callers:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 *     sub_14024BAD4 @ 0x14024BAD4 (sub_14024BAD4.c)
 *     sub_1402D8ABC @ 0x1402D8ABC (sub_1402D8ABC.c)
 *     sub_1403EB1A8 @ 0x1403EB1A8 (sub_1403EB1A8.c)
 *     sub_140AD6320 @ 0x140AD6320 (sub_140AD6320.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140B2EB08 @ 0x140B2EB08 (sub_140B2EB08.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall sub_1402D8EEC(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID v5; // rax

  v5 = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
