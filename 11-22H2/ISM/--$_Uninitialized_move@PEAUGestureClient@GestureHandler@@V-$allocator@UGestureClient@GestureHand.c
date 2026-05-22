/*
 * XREFs of ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x18016479C
 * Callers:
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@QEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801645CC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180160A98 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 */

GestureHandler::GestureClient *__fastcall std::_Uninitialized_move<GestureHandler::GestureClient *>(
        __int64 a1,
        __int64 a2,
        GestureHandler::GestureClient *a3)
{
  __int64 v5; // r8
  char *v6; // r9
  char *v7; // rdx
  _QWORD *v8; // rcx
  char *v9; // rdx
  _QWORD *v10; // rcx

  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    v6 = (char *)a3 - a1;
    do
    {
      v7 = &v6[v5 - 8];
      *(_QWORD *)a3 = *(_QWORD *)(v5 - 16);
      v8 = (_QWORD *)(v5 - 8);
      *(_QWORD *)v7 = 0LL;
      if ( v7 != (char *)(v5 - 8) )
      {
        *(_QWORD *)v7 = *v8;
        *v8 = 0LL;
      }
      *(_QWORD *)&v6[v5] = 0LL;
      if ( &v6[v5] != (char *)v5 )
      {
        *(_QWORD *)&v6[v5] = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      v9 = &v6[v5 + 8];
      v10 = (_QWORD *)(v5 + 8);
      *(_QWORD *)v9 = 0LL;
      if ( v9 != (char *)(v5 + 8) )
      {
        *(_QWORD *)v9 = *v10;
        *v10 = 0LL;
      }
      a3 = (GestureHandler::GestureClient *)((char *)a3 + 40);
      v6[v5 + 16] = *(_BYTE *)(v5 + 16);
      v5 += 40LL;
    }
    while ( v5 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(a3, a3);
  return a3;
}
