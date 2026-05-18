/*
 * XREFs of sub_1800A26C0 @ 0x1800A26C0
 * Callers:
 *     sub_1800A23F4 @ 0x1800A23F4 (sub_1800A23F4.c)
 * Callees:
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A1BDC @ 0x1800A1BDC (sub_1800A1BDC.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800A26C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_1800E0D60(a1 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_1800A1BDC(a1 + 32);
  sub_1800A1BDC(a1 + 216);
  sub_18002A570(v4);
  sub_18002A570(a2 + 8);
  sub_1800A1CB4(a1 + 32, (__int64 *)(a2 + 32));
  sub_1800A1CB4(a1 + 216, (__int64 *)(a2 + 216));
  sub_18002A62C(a2 + 8);
  sub_18002A62C(v4);
  return a1;
}
