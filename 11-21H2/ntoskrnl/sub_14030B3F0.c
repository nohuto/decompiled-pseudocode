/*
 * XREFs of sub_14030B3F0 @ 0x14030B3F0
 * Callers:
 *     sub_1402A0A4C @ 0x1402A0A4C (sub_1402A0A4C.c)
 *     sub_1402EEE7C @ 0x1402EEE7C (sub_1402EEE7C.c)
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_140345DA0 @ 0x140345DA0 (sub_140345DA0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140349670 @ 0x140349670 (sub_140349670.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_1403545B0 @ 0x1403545B0 (sub_1403545B0.c)
 *     sub_14056D9C0 @ 0x14056D9C0 (sub_14056D9C0.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14030B3F0(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)word_140D05000 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C506D8 + 4LL * (*a2 + (unsigned int)(unsigned __int16)word_140D05000 * a1));
}
