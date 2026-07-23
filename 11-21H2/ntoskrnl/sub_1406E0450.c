/*
 * XREFs of sub_1406E0450 @ 0x1406E0450
 * Callers:
 *     sub_1406EEF3C @ 0x1406EEF3C (sub_1406EEF3C.c)
 *     sub_14078EE9C @ 0x14078EE9C (sub_14078EE9C.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14066D068 @ 0x14066D068 (sub_14066D068.c)
 */

__int64 __fastcall sub_1406E0450(__int64 a1, char a2)
{
  if ( a2 && !sub_14066D068(*(_BYTE *)(a1 + 2170), 0x31u) )
    return 3221225506LL;
  else
    return 0LL;
}
