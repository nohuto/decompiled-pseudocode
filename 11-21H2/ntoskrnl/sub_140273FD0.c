/*
 * XREFs of sub_140273FD0 @ 0x140273FD0
 * Callers:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_140217060 @ 0x140217060 (sub_140217060.c)
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_14022900C @ 0x14022900C (sub_14022900C.c)
 *     sub_14022973C @ 0x14022973C (sub_14022973C.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402D92AC @ 0x1402D92AC (sub_1402D92AC.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_14033F8E0 @ 0x14033F8E0 (sub_14033F8E0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059E1E8 @ 0x14059E1E8 (sub_14059E1E8.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405BACCC @ 0x1405BACCC (sub_1405BACCC.c)
 *     sub_1405C4A48 @ 0x1405C4A48 (sub_1405C4A48.c)
 *     sub_140B05434 @ 0x140B05434 (sub_140B05434.c)
 *     sub_140B19724 @ 0x140B19724 (sub_140B19724.c)
 * Callees:
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1405AD6C8 @ 0x1405AD6C8 (sub_1405AD6C8.c)
 */

__int64 __fastcall sub_140273FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    sub_1405AD6C8(a1, a2, a3, a4);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4 ^ (((v4 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v4) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v4 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return sub_1402BF640(a1);
  else
    return 2LL;
}
