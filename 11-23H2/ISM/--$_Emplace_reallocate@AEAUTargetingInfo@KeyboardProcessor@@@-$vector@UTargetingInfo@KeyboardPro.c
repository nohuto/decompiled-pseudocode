/*
 * XREFs of ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x1801B08B0
 * Callers:
 *     ??$emplace@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@AEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x1801B0B04 (--$emplace@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardProcessor@@V-$a.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801B0AAC (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x1801B0E40 (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ?_Change_array@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAXQEAUTargetingInfo@KeyboardProcessor@@_K1@Z @ 0x1801B1B5C (-_Change_array@-$vector@UTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@KeyboardPr.c)
 */

__int64 *__fastcall std::vector<KeyboardProcessor::TargetingInfo>::_Emplace_reallocate<KeyboardProcessor::TargetingInfo &>(
        __int64 *a1,
        __int64 a2,
        const struct KeyboardProcessor::TargetingInfo *a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 *result; // rax
  char *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+78h] [rbp+10h]

  v5 = (a2 - *a1) / 384;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 7);
  if ( v6 == 0xAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 7);
  v9 = v8 >> 1;
  if ( v8 <= 0xAAAAAAAAAAAAAALL - (v8 >> 1) )
  {
    v10 = v6 + 1;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    v21 = v10;
    if ( v10 > 0xAAAAAAAAAAAAAALL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0xAAAAAAAAAAAAAALL;
    v21 = 0xAAAAAAAAAAAAAALL;
  }
  v11 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(384 * v10);
  v12 = v11;
  v18 = (char *)v11;
  v13 = &v11[48 * v5];
  try
  {
    KeyboardProcessor::TargetingInfo::TargetingInfo((KeyboardProcessor::TargetingInfo *)v13, a3);
    v20 = v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(v16, a2, v12);
      v20 = v12;
      v15 = v13 + 48;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(v16, v14, v15);
    std::vector<KeyboardProcessor::TargetingInfo>::_Change_array(a1, v12, v7, v10, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(v20, v13 + 48);
    std::_Deallocate<16,0>(v19, 384 * v21);
    throw;
  }
  return result;
}
