/*
 * XREFs of sub_180043668 @ 0x180043668
 * Callers:
 *     sub_180012450 @ 0x180012450 (sub_180012450.c)
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 *     sub_18001483C @ 0x18001483C (sub_18001483C.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180015E00 @ 0x180015E00 (sub_180015E00.c)
 *     sub_180017678 @ 0x180017678 (sub_180017678.c)
 *     sub_180026948 @ 0x180026948 (sub_180026948.c)
 *     sub_180030408 @ 0x180030408 (sub_180030408.c)
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_180040B40 @ 0x180040B40 (sub_180040B40.c)
 *     sub_180040BEC @ 0x180040BEC (sub_180040BEC.c)
 *     sub_180040DA0 @ 0x180040DA0 (sub_180040DA0.c)
 *     sub_180040E84 @ 0x180040E84 (sub_180040E84.c)
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_180041180 @ 0x180041180 (sub_180041180.c)
 *     sub_1800412FC @ 0x1800412FC (sub_1800412FC.c)
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_180041688 @ 0x180041688 (sub_180041688.c)
 *     sub_18004171C @ 0x18004171C (sub_18004171C.c)
 *     sub_180041EF4 @ 0x180041EF4 (sub_180041EF4.c)
 *     sub_18004231C @ 0x18004231C (sub_18004231C.c)
 *     sub_1800423C8 @ 0x1800423C8 (sub_1800423C8.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_180042D28 @ 0x180042D28 (sub_180042D28.c)
 *     sub_180042F0C @ 0x180042F0C (sub_180042F0C.c)
 *     sub_180043208 @ 0x180043208 (sub_180043208.c)
 *     sub_180043324 @ 0x180043324 (sub_180043324.c)
 *     sub_180043408 @ 0x180043408 (sub_180043408.c)
 *     sub_180044070 @ 0x180044070 (sub_180044070.c)
 *     sub_180044110 @ 0x180044110 (sub_180044110.c)
 *     sub_180046704 @ 0x180046704 (sub_180046704.c)
 *     sub_180046B98 @ 0x180046B98 (sub_180046B98.c)
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 *     sub_180047644 @ 0x180047644 (sub_180047644.c)
 *     sub_180047B60 @ 0x180047B60 (sub_180047B60.c)
 *     sub_18006AE34 @ 0x18006AE34 (sub_18006AE34.c)
 *     sub_18006AF04 @ 0x18006AF04 (sub_18006AF04.c)
 *     sub_18006AFD4 @ 0x18006AFD4 (sub_18006AFD4.c)
 *     sub_18006B0A4 @ 0x18006B0A4 (sub_18006B0A4.c)
 *     sub_1800729F8 @ 0x1800729F8 (sub_1800729F8.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_18007C0EC @ 0x18007C0EC (sub_18007C0EC.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_18008E85C @ 0x18008E85C (sub_18008E85C.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 *     sub_1800A5DE0 @ 0x1800A5DE0 (sub_1800A5DE0.c)
 *     sub_1800A72C0 @ 0x1800A72C0 (sub_1800A72C0.c)
 *     sub_1800B7A1C @ 0x1800B7A1C (sub_1800B7A1C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180043668(__int64 a1)
{
  __int64 v2; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v5 = *(_QWORD *)(a1 + 72);
        v7 = *(_OWORD *)(a1 + 72);
        goto LABEL_6;
      }
    }
  }
  v5 = v7;
LABEL_6:
  if ( v5 )
    sub_18002C73C(v5 + 16);
  return sub_180010910((__int64)&v7);
}
