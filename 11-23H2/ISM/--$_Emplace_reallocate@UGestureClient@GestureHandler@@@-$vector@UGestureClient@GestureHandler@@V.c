/*
 * XREFs of ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@QEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801562EC
 * Callers:
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180156798 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x1801564BC (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ?_Change_array@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAXQEAUGestureClient@GestureHandler@@_K1@Z @ 0x180157E80 (-_Change_array@-$vector@UGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHandle.c)
 */

char *__fastcall std::vector<GestureHandler::GestureClient>::_Emplace_reallocate<GestureHandler::GestureClient>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  GestureHandler::GestureClient *v13; // rsi
  char *v14; // rdi
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  GestureHandler::GestureClient *v19; // r8
  __int64 v20; // rcx
  char *result; // rax
  void *v22; // [rsp+20h] [rbp-48h]
  GestureHandler::GestureClient *v23; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) / 40;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v8 = 0x666666666666666LL;
  if ( v7 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<40>(v8);
  v13 = (GestureHandler::GestureClient *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (char *)v13 + 40 * v6;
  try
  {
    *(_QWORD *)v14 = *(_QWORD *)a3;
    v15 = (_QWORD *)(a3 + 8);
    *((_QWORD *)v14 + 1) = 0LL;
    if ( v14 + 8 != (char *)(a3 + 8) )
    {
      *((_QWORD *)v14 + 1) = *v15;
      *v15 = 0LL;
    }
    v16 = (_QWORD *)(a3 + 16);
    *((_QWORD *)v14 + 2) = 0LL;
    if ( v14 + 16 != (char *)(a3 + 16) )
    {
      *((_QWORD *)v14 + 2) = *v16;
      *v16 = 0LL;
    }
    v17 = (_QWORD *)(a3 + 24);
    *((_QWORD *)v14 + 3) = 0LL;
    if ( v14 + 24 != (char *)(a3 + 24) )
    {
      *((_QWORD *)v14 + 3) = *v17;
      *v17 = 0LL;
    }
    v14[32] = *(_BYTE *)(a3 + 32);
    v23 = (GestureHandler::GestureClient *)v14;
    v18 = a1[1];
    v19 = v13;
    v20 = *a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<GestureHandler::GestureClient *>(v20, a2, v13);
      v23 = v13;
      v19 = (GestureHandler::GestureClient *)(v14 + 40);
      v18 = a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<GestureHandler::GestureClient *>(v20, v18, v19);
    std::vector<GestureHandler::GestureClient>::_Change_array(a1, v13, v9, v8, v13);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(v23, (GestureHandler::GestureClient *)(v14 + 40));
    std::_Deallocate<16,0>(v22, 40 * v8);
    throw;
  }
  return result;
}
