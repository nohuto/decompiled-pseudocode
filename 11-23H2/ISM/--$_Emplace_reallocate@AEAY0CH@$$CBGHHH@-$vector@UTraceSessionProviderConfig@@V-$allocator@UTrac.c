/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800D6E78
 * Callers:
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA?A_TAEAY0CH@$$CBG$$QEAH11@Z @ 0x1800D7498 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003DD20 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@QEAU1@0PEAU1@AEAV?$allocator@UTraceSessionProviderConfig@@@0@@Z @ 0x1800D7390 (--$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@.c)
 *     ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x1800D743C (--$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@-$_Default_allocator_traits@V-$alloca.c)
 *     ?_Change_array@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAXQEAUTraceSessionProviderConfig@@_K1@Z @ 0x1800DC97C (-_Change_array@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@.c)
 */

char *__fastcall std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  size_t size_of; // rax
  char *v16; // rax
  char *v17; // rdi
  char *v18; // r14
  __int64 v19; // rdx
  char *v20; // r8
  __int64 v21; // rcx
  char *result; // rax
  void *v23; // [rsp+78h] [rbp+10h]

  v9 = (a2 - *a1) / 40;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v11 = 0x666666666666666LL;
  if ( v10 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v12 = v10 + 1;
  v13 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v14 = v13 >> 1;
  if ( v13 <= 0x666666666666666LL - (v13 >> 1) )
  {
    v11 = v14 + v13;
    if ( v14 + v13 < v12 )
      v11 = v12;
  }
  size_of = std::_Get_size_of_n<40>(v11);
  v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v17 = v16;
  v23 = v16;
  try
  {
    v18 = &v16[40 * v9];
    std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
      a5,
      v18,
      a3,
      a4,
      a5,
      a6);
    v19 = a1[1];
    v20 = v17;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<TraceSessionProviderConfig *>(v21, a2, v17);
      v20 = v18 + 40;
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<TraceSessionProviderConfig *>(v21, v19, v20);
    std::vector<TraceSessionProviderConfig>::_Change_array(a1, v17, v12, v11);
    result = v18;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, 40 * v11);
    throw;
  }
  return result;
}
