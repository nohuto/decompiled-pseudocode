/*
 * XREFs of sub_14033D760 @ 0x14033D760
 * Callers:
 *     sub_14023C3B4 @ 0x14023C3B4 (sub_14023C3B4.c)
 *     sub_14023ECD8 @ 0x14023ECD8 (sub_14023ECD8.c)
 *     sub_140253510 @ 0x140253510 (sub_140253510.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14033B6F0 @ 0x14033B6F0 (sub_14033B6F0.c)
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 *     sub_14033E1B0 @ 0x14033E1B0 (sub_14033E1B0.c)
 *     IoRetrievePriorityInfo @ 0x14033FD80 (IoRetrievePriorityInfo.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 *     sub_14035D3E0 @ 0x14035D3E0 (sub_14035D3E0.c)
 *     sub_140366BE8 @ 0x140366BE8 (sub_140366BE8.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1403AB344 @ 0x1403AB344 (sub_1403AB344.c)
 *     sub_140557078 @ 0x140557078 (sub_140557078.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_1406CA810 @ 0x1406CA810 (sub_1406CA810.c)
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14033D760(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
  {
    result = 0LL;
  }
  else if ( (unsigned int)result >= 2 )
  {
    return result;
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1440) )
      return 2LL;
  }
  return result;
}
