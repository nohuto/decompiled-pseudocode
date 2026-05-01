/*
 * XREFs of sub_18001F1C4 @ 0x18001F1C4
 * Callers:
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180012BB4 @ 0x180012BB4 (sub_180012BB4.c)
 *     sub_180012BD0 @ 0x180012BD0 (sub_180012BD0.c)
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 *     sub_180013578 @ 0x180013578 (sub_180013578.c)
 *     sub_180013640 @ 0x180013640 (sub_180013640.c)
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 *     sub_180013980 @ 0x180013980 (sub_180013980.c)
 *     sub_180013C10 @ 0x180013C10 (sub_180013C10.c)
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 *     sub_18001417C @ 0x18001417C (sub_18001417C.c)
 *     sub_1800142CC @ 0x1800142CC (sub_1800142CC.c)
 *     sub_18001435C @ 0x18001435C (sub_18001435C.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 *     HamCompleteActivityRestore @ 0x180014870 (HamCompleteActivityRestore.c)
 *     sub_180015FBC @ 0x180015FBC (sub_180015FBC.c)
 *     sub_180016120 @ 0x180016120 (sub_180016120.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_18001F1C4(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
