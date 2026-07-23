/*
 * XREFs of sub_1407B0F40 @ 0x1407B0F40
 * Callers:
 *     sub_1406622B8 @ 0x1406622B8 (sub_1406622B8.c)
 *     sub_140663FAC @ 0x140663FAC (sub_140663FAC.c)
 *     sub_14066C1DC @ 0x14066C1DC (sub_14066C1DC.c)
 *     sub_14066C5B0 @ 0x14066C5B0 (sub_14066C5B0.c)
 *     sub_1406C31C0 @ 0x1406C31C0 (sub_1406C31C0.c)
 *     sub_1406C7C20 @ 0x1406C7C20 (sub_1406C7C20.c)
 *     sub_1406D7014 @ 0x1406D7014 (sub_1406D7014.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A717C @ 0x1407A717C (sub_1407A717C.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 *     sub_140967328 @ 0x140967328 (sub_140967328.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407A5A90 @ 0x1407A5A90 (sub_1407A5A90.c)
 */

void __fastcall sub_1407B0F40(ULONG_PTR BugCheckParameter2)
{
  char v1; // r8
  int v2; // eax
  signed __int64 BugCheckParameter4; // rdx
  ULONG_PTR v4; // rbx

  v1 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v1 & 1) != 0
    && (v2 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v1 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v2 > 0)
    && (BugCheckParameter4 = v2
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v2 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    sub_1407A5A90(BugCheckParameter2, 1LL);
  }
  else
  {
    v4 = BugCheckParameter2 - 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 - 16);
    sub_1402AFC00(v4);
  }
}
