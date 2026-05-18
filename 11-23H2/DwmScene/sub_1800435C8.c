/*
 * XREFs of sub_1800435C8 @ 0x1800435C8
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_180054690 @ 0x180054690 (sub_180054690.c)
 *     sub_180054B0C @ 0x180054B0C (sub_180054B0C.c)
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 *     sub_1800563E8 @ 0x1800563E8 (sub_1800563E8.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_18005A1F0 @ 0x18005A1F0 (sub_18005A1F0.c)
 *     sub_18005BA84 @ 0x18005BA84 (sub_18005BA84.c)
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 *     sub_18006FCD0 @ 0x18006FCD0 (sub_18006FCD0.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 *     sub_180088290 @ 0x180088290 (sub_180088290.c)
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 *     sub_180088C1C @ 0x180088C1C (sub_180088C1C.c)
 *     sub_18008AFA0 @ 0x18008AFA0 (sub_18008AFA0.c)
 *     sub_18008B0A8 @ 0x18008B0A8 (sub_18008B0A8.c)
 *     sub_1800D0568 @ 0x1800D0568 (sub_1800D0568.c)
 *     sub_1800D1BA0 @ 0x1800D1BA0 (sub_1800D1BA0.c)
 * Callees:
 *     sub_180043640 @ 0x180043640 (sub_180043640.c)
 */

__int64 __fastcall sub_1800435C8(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180043640(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_DWORD *)(v6 + 32) )
    return *(_QWORD *)v2;
  return result;
}
