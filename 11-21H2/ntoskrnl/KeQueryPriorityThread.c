/*
 * XREFs of KeQueryPriorityThread @ 0x14035D5C0
 * Callers:
 *     PoNotifyMediaBuffering @ 0x140258980 (PoNotifyMediaBuffering.c)
 *     sub_14035CA04 @ 0x14035CA04 (sub_14035CA04.c)
 *     sub_14035D158 @ 0x14035D158 (sub_14035D158.c)
 *     sub_14035D3E0 @ 0x14035D3E0 (sub_14035D3E0.c)
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 *     sub_140373F2C @ 0x140373F2C (sub_140373F2C.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_14037D2EC @ 0x14037D2EC (sub_14037D2EC.c)
 *     sub_140384F50 @ 0x140384F50 (sub_140384F50.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_1406EBCCC @ 0x1406EBCCC (sub_1406EBCCC.c)
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 *     sub_1407D7544 @ 0x1407D7544 (sub_1407D7544.c)
 *     sub_1407D7AE0 @ 0x1407D7AE0 (sub_1407D7AE0.c)
 *     sub_140A914C4 @ 0x140A914C4 (sub_140A914C4.c)
 * Callees:
 *     sub_140577B4C @ 0x140577B4C (sub_140577B4C.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( *((_UNKNOWN **)Thread + 68) == &unk_140D32B00 )
    return 1;
  if ( (*((_DWORD *)Thread + 30) & 0x400000) != 0 )
    sub_140577B4C((ULONG_PTR)Thread);
  return *((char *)Thread + 195);
}
