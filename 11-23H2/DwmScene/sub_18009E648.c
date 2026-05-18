/*
 * XREFs of sub_18009E648 @ 0x18009E648
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18009E824 @ 0x18009E824 (sub_18009E824.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009E648(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000C8C8(a1 + 8, 16LL, 15LL);
  sub_18000C8C8(a1 + 248, 16LL, 15LL);
  sub_18000C8C8(a1 + 488, 16LL, 15LL);
  *(_BYTE *)(a1 + 1088) = 1;
  sub_18009E824(a1 + 488, a2 + 760);
  *(_OWORD *)(a1 + 848) = *(_OWORD *)(a2 + 1000);
  *(_OWORD *)(a1 + 864) = *(_OWORD *)(a2 + 1016);
  *(_OWORD *)(a1 + 880) = *(_OWORD *)(a2 + 1032);
  *(_QWORD *)(a1 + 896) = *(_QWORD *)(a2 + 1048);
  *(_DWORD *)(a1 + 904) = *(_DWORD *)(a2 + 1056);
  *(_OWORD *)(a1 + 1028) = *(_OWORD *)(a2 + 1060);
  *(_OWORD *)(a1 + 1044) = *(_OWORD *)(a2 + 1076);
  *(_OWORD *)(a1 + 1060) = *(_OWORD *)(a2 + 1092);
  *(_QWORD *)(a1 + 1076) = *(_QWORD *)(a2 + 1108);
  *(_DWORD *)(a1 + 1084) = *(_DWORD *)(a2 + 1116);
  return a1;
}
