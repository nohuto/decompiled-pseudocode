/*
 * XREFs of sub_1800A2788 @ 0x1800A2788
 * Callers:
 *     sub_1800A2BB0 @ 0x1800A2BB0 (sub_1800A2BB0.c)
 *     sub_1800A3948 @ 0x1800A3948 (sub_1800A3948.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026844 @ 0x180026844 (sub_180026844.c)
 *     sub_1800A1BDC @ 0x1800A1BDC (sub_1800A1BDC.c)
 *     sub_1800A1DF4 @ 0x1800A1DF4 (sub_1800A1DF4.c)
 *     sub_1800A1E84 @ 0x1800A1E84 (sub_1800A1E84.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800A2788(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  sub_1800E0D60(a1 + 8);
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  sub_180026844(a5, a1 + 32, 1u);
  sub_1800A1BDC(a1 + 216);
  if ( sub_1800A1DF4() )
  {
    sub_18001246C(&v14, a4);
    v9 = sub_18001246C(v15, a3);
    sub_1800A1E84(a1 + 32, v9, v10);
  }
  v11 = a3[1];
  if ( v11 )
    sub_180010530(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010530(v12);
  return a1;
}
