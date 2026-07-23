/*
 * XREFs of sub_1407A6A34 @ 0x1407A6A34
 * Callers:
 *     sub_1406622B8 @ 0x1406622B8 (sub_1406622B8.c)
 *     sub_140663FAC @ 0x140663FAC (sub_140663FAC.c)
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_14066C1DC @ 0x14066C1DC (sub_14066C1DC.c)
 *     sub_14066C5B0 @ 0x14066C5B0 (sub_14066C5B0.c)
 *     sub_1406C31C0 @ 0x1406C31C0 (sub_1406C31C0.c)
 *     sub_1406C7C20 @ 0x1406C7C20 (sub_1406C7C20.c)
 *     sub_1406D7014 @ 0x1406D7014 (sub_1406D7014.c)
 *     sub_1406E0930 @ 0x1406E0930 (sub_1406E0930.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_14074DEF4 @ 0x14074DEF4 (sub_14074DEF4.c)
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 *     sub_14074E73C @ 0x14074E73C (sub_14074E73C.c)
 *     sub_14074EB48 @ 0x14074EB48 (sub_14074EB48.c)
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A717C @ 0x1407A717C (sub_1407A717C.c)
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_140966F60 @ 0x140966F60 (sub_140966F60.c)
 *     sub_140967328 @ 0x140967328 (sub_140967328.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1407A6A34(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
