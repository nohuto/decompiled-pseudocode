/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180038A10
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180038070 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x180080F94 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x1800939E8 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x180093F8C (--$_Integral_to_string@GH@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@H@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180094448 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x180095300 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     GetHolographicInputSession @ 0x1800BFD44 (GetHolographicInputSession.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800C2C94 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18014D870 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801885E8 (--0PenInterface@@QEAA@PEAX0@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AB8E8 (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AC0AC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AC164 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::assign(void **a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  size_t v9; // rcx
  void *v10; // r14
  char *v12; // r14
  __int64 v13; // rdi

  v3 = (unsigned __int64)a1[3];
  if ( a3 > v3 )
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (a3 | 7) > 0x7FFFFFFFFFFFFFFELL )
    {
      v9 = -2LL;
    }
    else
    {
      v8 = v3 >> 1;
      if ( v3 > 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
      {
        v9 = -2LL;
      }
      else
      {
        v7 = a3 | 7;
        if ( (a3 | 7) < v8 + v3 )
          v7 = v8 + v3;
        if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
        v9 = 2 * (v7 + 1);
        if ( v9 < 0x1000 )
        {
          if ( v9 )
            v10 = operator new(v9);
          else
            v10 = 0LL;
          goto LABEL_11;
        }
      }
    }
    v10 = (void *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v9);
LABEL_11:
    a1[3] = (void *)v7;
    a1[2] = (void *)a3;
    memcpy_0(v10, Src, 2 * a3);
    *((_WORD *)v10 + a3) = 0;
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*a1, 2 * v3 + 2);
    *a1 = v10;
    return a1;
  }
  v12 = (char *)a1;
  if ( v3 >= 8 )
    v12 = (char *)*a1;
  v13 = 2 * a3;
  a1[2] = (void *)a3;
  memmove_0(v12, Src, 2 * a3);
  *(_WORD *)&v12[v13] = 0;
  return a1;
}
