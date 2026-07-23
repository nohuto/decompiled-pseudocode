/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402631C0
 * Callers:
 *     sub_140259EC4 @ 0x140259EC4 (sub_140259EC4.c)
 *     sub_1402630FC @ 0x1402630FC (sub_1402630FC.c)
 *     sub_140263154 @ 0x140263154 (sub_140263154.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_14039E71C @ 0x14039E71C (sub_14039E71C.c)
 *     sub_14039F0DC @ 0x14039F0DC (sub_14039F0DC.c)
 *     sub_14039F294 @ 0x14039F294 (sub_14039F294.c)
 *     sub_1403A0424 @ 0x1403A0424 (sub_1403A0424.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_1403D2700 @ 0x1403D2700 (sub_1403D2700.c)
 *     sub_1403D9134 @ 0x1403D9134 (sub_1403D9134.c)
 *     KeQueryMaximumProcessorCount @ 0x14056D7D0 (KeQueryMaximumProcessorCount.c)
 *     sub_14057158C @ 0x14057158C (sub_14057158C.c)
 *     sub_1405D997C @ 0x1405D997C (sub_1405D997C.c)
 *     sub_1405D9B84 @ 0x1405D9B84 (sub_1405D9B84.c)
 *     sub_1406360C0 @ 0x1406360C0 (sub_1406360C0.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 *     sub_1409E01E4 @ 0x1409E01E4 (sub_1409E01E4.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_1409EF014 @ 0x1409EF014 (sub_1409EF014.c)
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 *     sub_140B1DD34 @ 0x140B1DD34 (sub_140B1DD34.c)
 *     sub_140B2E208 @ 0x140B2E208 (sub_140B2E208.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rcx
  unsigned __int64 v3; // rax

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && word_140D05018 == 1 )
      return dword_140D068E8;
    else
      return GroupNumber < (USHORT)word_140D05018 ? dword_140D0503C : 0;
  }
  else
  {
    if ( GroupNumber == 0xFFFF )
    {
      LODWORD(v1) = dword_140D06884;
    }
    else if ( GroupNumber >= (unsigned __int16)word_140D05014 )
    {
      LODWORD(v1) = 0;
    }
    else
    {
      v3 = qword_140D06E48[GroupNumber] - (((unsigned __int64)qword_140D06E48[GroupNumber] >> 1) & 0x5555555555555555LL);
      return (0x101010101010101LL
            * (((v3 & 0x3333333333333333LL)
              + ((v3 >> 2) & 0x3333333333333333LL)
              + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
    return v1;
  }
}
