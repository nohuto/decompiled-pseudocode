/*
 * XREFs of sub_1800B4B60 @ 0x1800B4B60
 * Callers:
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 *     sub_1800B60F8 @ 0x1800B60F8 (sub_1800B60F8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028864 @ 0x180028864 (sub_180028864.c)
 *     sub_1800B3D60 @ 0x1800B3D60 (sub_1800B3D60.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B4100 @ 0x1800B4100 (sub_1800B4100.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800B4B60(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  sub_1800FC230(a1 + 8);
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  sub_180028864(a5, a1 + 32);
  sub_1800B3D60(a1 + 216);
  if ( sub_1800B4028() )
  {
    v12 = 0LL;
    v9 = a4[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = a4[1];
    }
    *(_QWORD *)&v12 = *a4;
    *((_QWORD *)&v12 + 1) = v9;
    v13 = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a3[1];
    }
    *(_QWORD *)&v13 = *a3;
    *((_QWORD *)&v13 + 1) = v10;
    sub_1800B4100((_QWORD *)(a1 + 32), (__int64 *)&v13, (__int64 *)&v12);
  }
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  return a1;
}
