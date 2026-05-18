/*
 * XREFs of sub_180021530 @ 0x180021530
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180020ED8 @ 0x180020ED8 (sub_180020ED8.c)
 *     sub_180020EEC @ 0x180020EEC (sub_180020EEC.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180020F14 @ 0x180020F14 (sub_180020F14.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180021530(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-10h] BYREF

  v2 = sub_18001D684();
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ETWTraceProvider>::`vftable';
    sub_180020F00((_QWORD *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  v11 = v3 + 16;
  v12 = v3;
  sub_180020FCC(v15, &v11);
  sub_180010910((__int64)&v11);
  v4 = sub_18001D684();
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Utils::DefaultTimeProvider>::`vftable';
    sub_180020EEC((_QWORD *)(v4 + 16));
  }
  else
  {
    v5 = 0LL;
  }
  v11 = v5 + 16;
  v12 = v5;
  sub_180020FCC(v14, &v11);
  sub_180010910((__int64)&v11);
  v6 = sub_18001D684();
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::DefaultMemoryStatsProvider>::`vftable';
    sub_180020ED8((_QWORD *)(v6 + 16));
  }
  else
  {
    v7 = 0LL;
  }
  v11 = v7 + 16;
  v12 = v7;
  sub_180020FCC(v13, &v11);
  sub_180010910((__int64)&v11);
  v8 = sub_18001D684();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Utils::PerformanceLogger>::`vftable';
    sub_180020F14(v8 + 16, v15, v14, v13);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 16;
  a1[1] = v9;
  sub_180010910((__int64)v13);
  sub_180010910((__int64)v14);
  sub_180010910((__int64)v15);
  return a1;
}
