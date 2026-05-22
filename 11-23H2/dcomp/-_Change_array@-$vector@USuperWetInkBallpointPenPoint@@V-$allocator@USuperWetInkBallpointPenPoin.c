/*
 * XREFs of ?_Change_array@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAXQEAUSuperWetInkBallpointPenPoint@@_K1@Z @ 0x1800E713C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@AEBU2@@Z @ 0x1800E62B0 (--$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint.c)
 *     ?_Reallocate_exactly@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAX_K@Z @ 0x1800E7468 (-_Reallocate_exactly@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<SuperWetInkBallpointPenPoint>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
