/*
 * XREFs of sub_18006120C @ 0x18006120C
 * Callers:
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006120C(__int64 a1)
{
  sub_18000C8D4(a1, 16LL, 12LL);
  sub_18000C8D4(a1 + 192, 16LL, 16LL);
  sub_18000C8D4(a1 + 448, 16LL, 16LL);
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_DWORD *)(a1 + 752) = 0;
  sub_18000C8D4(a1 + 760, 16LL, 15LL);
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_QWORD *)(a1 + 1128) = 0LL;
  *(_QWORD *)(a1 + 1136) = 0LL;
  *(_QWORD *)(a1 + 1144) = 0LL;
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1160) = 0LL;
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_DWORD *)(a1 + 1176) = 0;
  sub_18000C8D4(a1 + 1184, 16LL, 8LL);
  *(_QWORD *)(a1 + 1312) = 0LL;
  *(_QWORD *)(a1 + 1320) = 0LL;
  if ( a1 + 1000 <= (unsigned __int64)(a1 + 1060) )
    memset((void *)(a1 + 1000), 0, 4LL * (a1 + 1060 >= (unsigned __int64)(a1 + 1000) ? 0xF : 0));
  if ( a1 + 1060 <= (unsigned __int64)(a1 + 1120) )
    memset((void *)(a1 + 1060), 0, 4LL * (a1 + 1120 >= (unsigned __int64)(a1 + 1060) ? 0xF : 0));
  return a1;
}
