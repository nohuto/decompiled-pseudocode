/*
 * XREFs of ?_Change_array@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3D@@_K1@Z @ 0x1800A1450
 * Callers:
 *     ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x18009C800 (--$_Emplace_reallocate@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<PointData3D>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 184 * a3;
  result = a2 + 184 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
