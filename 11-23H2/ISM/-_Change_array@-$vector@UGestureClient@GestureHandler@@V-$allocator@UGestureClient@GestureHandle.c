/*
 * XREFs of ?_Change_array@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAXQEAUGestureClient@GestureHandler@@_K1@Z @ 0x180157E80
 * Callers:
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@QEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801562EC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x1801527B8 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 */

__int64 __fastcall std::vector<GestureHandler::GestureClient>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  GestureHandler::GestureClient *v6; // rcx
  __int64 result; // rax

  v6 = *(GestureHandler::GestureClient **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(v6, *(GestureHandler::GestureClient **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 40 * a4;
  return result;
}
