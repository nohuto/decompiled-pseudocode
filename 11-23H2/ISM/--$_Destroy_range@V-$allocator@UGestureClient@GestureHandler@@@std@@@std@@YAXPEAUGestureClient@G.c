/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x1801527B8
 * Callers:
 *     ??1GestureHandler@@QEAA@XZ @ 0x180152C90 (--1GestureHandler@@QEAA@XZ.c)
 *     _std::vector_GestureHandler::GestureClient_std::allocator_GestureHandler::GestureClient___::_Emplace_reallocate_GestureHandler::GestureClient__::_1_::catch$1 @ 0x180156477 (_std--vector_GestureHandler--GestureClient_std--allocator_GestureHandler--GestureClient___--_Emp.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x1801564BC (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180157B04 (-RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     ?_Change_array@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAXQEAUGestureClient@GestureHandler@@_K1@Z @ 0x180157E80 (-_Change_array@-$vector@UGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHandle.c)
 * Callees:
 *     ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x180152C08 (--1GestureClient@GestureHandler@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
        GestureHandler::GestureClient *this,
        GestureHandler::GestureClient *a2)
{
  GestureHandler::GestureClient *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      GestureHandler::GestureClient::~GestureClient(v3);
      v3 = (GestureHandler::GestureClient *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
