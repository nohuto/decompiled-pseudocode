/*
 * XREFs of sub_180091D14 @ 0x180091D14
 * Callers:
 *     sub_180063A80 @ 0x180063A80 (sub_180063A80.c)
 *     sub_180091A24 @ 0x180091A24 (sub_180091A24.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001D3D4 @ 0x18001D3D4 (sub_18001D3D4.c)
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 *     sub_180092E30 @ 0x180092E30 (sub_180092E30.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180091D14(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = sub_18001246C(v7, a2);
  sub_18005938C(a1, (__int64)v4);
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
  *(_DWORD *)(a1 + 1904) = sub_18001D3D4((__int64)&unk_1801D3D8C);
  *(_QWORD *)(a1 + 1884) = 0LL;
  *(_DWORD *)(a1 + 1840) = 1048971922;
  *(_DWORD *)(a1 + 1836) = -1077342245;
  *(_DWORD *)(a1 + 1856) = 1082130432;
  *(_DWORD *)(a1 + 1844) = 1077936128;
  *(_DWORD *)(a1 + 1852) = 1069547520;
  *(_DWORD *)(a1 + 1860) = 1084227584;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1808) = 0;
  sub_180092E30(a1);
  v5 = a2[1];
  if ( v5 )
    sub_180010530(v5);
  return a1;
}
