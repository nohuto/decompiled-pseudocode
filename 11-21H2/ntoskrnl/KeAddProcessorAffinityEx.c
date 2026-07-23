/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140294460
 * Callers:
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_1402485E0 @ 0x1402485E0 (sub_1402485E0.c)
 *     sub_140293444 @ 0x140293444 (sub_140293444.c)
 *     sub_1402943C0 @ 0x1402943C0 (sub_1402943C0.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_1402F36BC @ 0x1402F36BC (sub_1402F36BC.c)
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 *     sub_140303740 @ 0x140303740 (sub_140303740.c)
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     sub_14035C7A4 @ 0x14035C7A4 (sub_14035C7A4.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     sub_140398BE0 @ 0x140398BE0 (sub_140398BE0.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_1403CF26C @ 0x1403CF26C (sub_1403CF26C.c)
 *     sub_1403D1870 @ 0x1403D1870 (sub_1403D1870.c)
 *     sub_14045A748 @ 0x14045A748 (sub_14045A748.c)
 *     sub_14050EB80 @ 0x14050EB80 (sub_14050EB80.c)
 *     sub_140571D50 @ 0x140571D50 (sub_140571D50.c)
 *     sub_140574B54 @ 0x140574B54 (sub_140574B54.c)
 *     sub_140577F60 @ 0x140577F60 (sub_140577F60.c)
 *     sub_1405C6C1C @ 0x1405C6C1C (sub_1405C6C1C.c)
 *     sub_1405C8980 @ 0x1405C8980 (sub_1405C8980.c)
 *     sub_1405C8D78 @ 0x1405C8D78 (sub_1405C8D78.c)
 *     sub_1405C8FE4 @ 0x1405C8FE4 (sub_1405C8FE4.c)
 *     sub_1405C94E0 @ 0x1405C94E0 (sub_1405C94E0.c)
 *     sub_1405C9740 @ 0x1405C9740 (sub_1405C9740.c)
 *     sub_1405D6FBC @ 0x1405D6FBC (sub_1405D6FBC.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140829930 @ 0x140829930 (sub_140829930.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     HalAllocateHardwareCounters @ 0x1409084C0 (HalAllocateHardwareCounters.c)
 *     sub_14095FD08 @ 0x14095FD08 (sub_14095FD08.c)
 *     sub_140A557A0 @ 0x140A557A0 (sub_140A557A0.c)
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     sub_140A59C88 @ 0x140A59C88 (sub_140A59C88.c)
 *     sub_140A61A60 @ 0x140A61A60 (sub_140A61A60.c)
 *     sub_140A63680 @ 0x140A63680 (sub_140A63680.c)
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 *     sub_140B036D4 @ 0x140B036D4 (sub_140B036D4.c)
 *     sub_140B1B59C @ 0x140B1B59C (sub_140B1B59C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = dword_140D0E5E0[a2] & 0x3F;
  v4 = (unsigned int)dword_140D0E5E0[a2] >> 6;
  if ( *a1 > (unsigned int)v4 )
    goto LABEL_2;
  result = a1[1];
  if ( (unsigned int)result > (unsigned int)v4 )
  {
    *a1 = v4 + 1;
LABEL_2:
    v5 = (unsigned int)v4;
    v6 = *(_QWORD *)&a1[4 * v4 + 4];
    result = v3;
    _bittestandset64(&v6, v3);
    *(_QWORD *)&a1[4 * v5 + 4] = v6;
  }
  return result;
}
