/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38
 * Callers:
 *     ??$?0AEAY0CI@$$CBGAEAM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0CI@$$CBGAEAM@Z @ 0x180047D78 (--$-0AEAY0CI@$$CBGAEAM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ??$?0AEAY0CG@$$CBGAEAM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0CG@$$CBGAEAM@Z @ 0x180047DD8 (--$-0AEAY0CG@$$CBGAEAM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800489E0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x1800AA05C (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800AA60C (--$_Integral_to_string@GH@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@H@.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800AB950 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     GetHolographicInputSession @ 0x1800D8CB8 (GetHolographicInputSession.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800DBC78 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18016BFB0 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801A670C (--0PenInterface@@QEAA@PEAX0@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801C9CDC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801CA49C (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801CA554 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180047FF0 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180099DB4 (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::assign(void **a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // r15
  char *v8; // rax
  size_t v9; // rbx
  char *v10; // rbp
  char *v12; // rbp
  __int64 v13; // rbx

  v3 = (unsigned __int64)a1[3];
  if ( a3 <= v3 )
  {
    v12 = (char *)a1;
    if ( v3 >= 8 )
      v12 = (char *)*a1;
    a1[2] = (void *)a3;
    v13 = 2 * a3;
    memmove_0(v12, Src, 2 * a3);
    *(_WORD *)&v12[v13] = 0;
  }
  else
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlen_string();
    v7 = std::wstring::_Calculate_growth(a3, a1[3]);
    if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v7 + 1));
    a1[2] = (void *)a3;
    v9 = 2 * a3;
    a1[3] = (void *)v7;
    v10 = v8;
    memcpy_0(v8, Src, v9);
    *(_WORD *)&v10[v9] = 0;
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*a1, 2 * v3 + 2);
    *a1 = v10;
  }
  return a1;
}
