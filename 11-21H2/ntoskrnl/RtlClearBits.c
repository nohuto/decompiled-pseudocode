/*
 * XREFs of RtlClearBits @ 0x140347580
 * Callers:
 *     sub_14020C5E4 @ 0x14020C5E4 (sub_14020C5E4.c)
 *     sub_140246CCC @ 0x140246CCC (sub_140246CCC.c)
 *     sub_1402482BC @ 0x1402482BC (sub_1402482BC.c)
 *     sub_140373880 @ 0x140373880 (sub_140373880.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_140386D24 @ 0x140386D24 (sub_140386D24.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403CDDB0 @ 0x1403CDDB0 (sub_1403CDDB0.c)
 *     sub_140457862 @ 0x140457862 (sub_140457862.c)
 *     sub_140503808 @ 0x140503808 (sub_140503808.c)
 *     sub_1405188FC @ 0x1405188FC (sub_1405188FC.c)
 *     sub_140522654 @ 0x140522654 (sub_140522654.c)
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140533520 @ 0x140533520 (sub_140533520.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 *     sub_14059C580 @ 0x14059C580 (sub_14059C580.c)
 *     RtlFindSetBitsAndClear @ 0x1405E5DA0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405E6BE0 (RtlShiftLeftBitMap.c)
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068CFE4 @ 0x14068CFE4 (sub_14068CFE4.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 *     sub_14079C290 @ 0x14079C290 (sub_14079C290.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_140909FA0 @ 0x140909FA0 (sub_140909FA0.c)
 *     sub_140976D80 @ 0x140976D80 (sub_140976D80.c)
 *     sub_140976EAC @ 0x140976EAC (sub_140976EAC.c)
 *     sub_140981070 @ 0x140981070 (sub_140981070.c)
 *     sub_1409D847C @ 0x1409D847C (sub_1409D847C.c)
 *     sub_140A509B0 @ 0x140A509B0 (sub_140A509B0.c)
 *     sub_140A68338 @ 0x140A68338 (sub_140A68338.c)
 *     sub_140A8833C @ 0x140A8833C (sub_140A8833C.c)
 *     sub_140B0751C @ 0x140B0751C (sub_140B0751C.c)
 *     sub_140B236AC @ 0x140B236AC (sub_140B236AC.c)
 *     sub_140B29EB4 @ 0x140B29EB4 (sub_140B29EB4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_140018DF0[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140018DF0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140015C40[v6];
      goto LABEL_4;
    }
  }
}
