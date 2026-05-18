/*
 * XREFs of sub_1800B4A98 @ 0x1800B4A98
 * Callers:
 *     sub_1800B4738 @ 0x1800B4738 (sub_1800B4738.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B3D60 @ 0x1800B3D60 (sub_1800B3D60.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800B4A98(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_1800FC230(a1 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_1800B3D60(a1 + 32);
  sub_1800B3D60(a1 + 216);
  sub_18002C84C(v4);
  sub_18002C84C(a2 + 8);
  sub_1800B3E48(a1 + 32, (__int64 *)(a2 + 32));
  sub_1800B3E48(a1 + 216, (__int64 *)(a2 + 216));
  j_LanguageEnumProc(a2 + 8);
  j_LanguageEnumProc(v4);
  return a1;
}
