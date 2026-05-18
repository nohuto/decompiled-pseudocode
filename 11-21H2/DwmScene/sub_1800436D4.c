/*
 * XREFs of sub_1800436D4 @ 0x1800436D4
 * Callers:
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_180014564 @ 0x180014564 (sub_180014564.c)
 *     sub_1800146D0 @ 0x1800146D0 (sub_1800146D0.c)
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 *     sub_18003F590 @ 0x18003F590 (sub_18003F590.c)
 *     sub_18003FCC8 @ 0x18003FCC8 (sub_18003FCC8.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_180040BEC @ 0x180040BEC (sub_180040BEC.c)
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_180041E84 @ 0x180041E84 (sub_180041E84.c)
 *     sub_180041EF4 @ 0x180041EF4 (sub_180041EF4.c)
 *     sub_1800421D0 @ 0x1800421D0 (sub_1800421D0.c)
 *     sub_1800423FC @ 0x1800423FC (sub_1800423FC.c)
 *     GsDriverEntry @ 0x18004247C (GsDriverEntry.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_180042AB0 @ 0x180042AB0 (sub_180042AB0.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_180042BA8 @ 0x180042BA8 (sub_180042BA8.c)
 *     sub_180042C3C @ 0x180042C3C (sub_180042C3C.c)
 *     sub_180042F0C @ 0x180042F0C (sub_180042F0C.c)
 *     sub_1800430C4 @ 0x1800430C4 (sub_1800430C4.c)
 *     sub_180043324 @ 0x180043324 (sub_180043324.c)
 *     sub_180043408 @ 0x180043408 (sub_180043408.c)
 *     sub_1800434A0 @ 0x1800434A0 (sub_1800434A0.c)
 *     sub_18004819C @ 0x18004819C (sub_18004819C.c)
 *     sub_180050214 @ 0x180050214 (sub_180050214.c)
 *     sub_1800511A0 @ 0x1800511A0 (sub_1800511A0.c)
 *     sub_180052B30 @ 0x180052B30 (sub_180052B30.c)
 *     sub_18006A16C @ 0x18006A16C (sub_18006A16C.c)
 *     sub_18006A2D8 @ 0x18006A2D8 (sub_18006A2D8.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 */

__int64 __fastcall sub_1800436D4(__int64 a1)
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
    sub_18002C7C4(v5 + 16);
  return sub_180010910((__int64)&v7);
}
