/*
 * XREFs of ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C002F438
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00AF510 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00017A4 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00052B8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005408 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

char __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmpty(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, (struct _KTHREAD **)(a1 + 44512), 0);
  DXGPUSHLOCK::AcquireShared(v4);
  v5 = 1;
  LOBYTE(v1) = *(_QWORD *)(v1 + 44544) == v1 + 44544;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
  return v1;
}
