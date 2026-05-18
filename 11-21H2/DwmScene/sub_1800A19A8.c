/*
 * XREFs of sub_1800A19A8 @ 0x1800A19A8
 * Callers:
 *     sub_18006B7D8 @ 0x18006B7D8 (sub_18006B7D8.c)
 *     sub_1800A1704 @ 0x1800A1704 (sub_1800A1704.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 *     sub_1800A2B70 @ 0x1800A2B70 (sub_1800A2B70.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800A19A8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v6 = *a2;
  *((_QWORD *)&v6 + 1) = v4;
  sub_180060E7C(a1, (__int64)&v6);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerCamera::`vftable';
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1828) = 1061158912;
  *(_DWORD *)(a1 + 1832) = 1092616192;
  *(_DWORD *)(a1 + 1880) = 1071644672;
  *(_DWORD *)(a1 + 1904) = _InterlockedIncrement((volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F7E94));
  *(_QWORD *)(a1 + 1884) = 0LL;
  *(_DWORD *)(a1 + 1840) = 1048971922;
  *(_DWORD *)(a1 + 1836) = -1077342245;
  *(_DWORD *)(a1 + 1856) = 1082130432;
  *(_DWORD *)(a1 + 1844) = 1077936128;
  *(_DWORD *)(a1 + 1852) = 1069547520;
  *(_DWORD *)(a1 + 1860) = 1084227584;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  sub_1800A2B70(a1);
  sub_180010910((__int64)a2);
  return a1;
}
