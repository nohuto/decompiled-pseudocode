/*
 * XREFs of ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801D6394
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801D754C (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BD280 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801D6748 (--$_Uninitialized_move@PEAUCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@YAPEA.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x1801D7E40 (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 */

char *__fastcall std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  CandidateIdentity *v12; // rdi
  char *v13; // rsi
  __int64 v14; // rdx
  CandidateIdentity *v15; // r8
  __int64 v16; // rcx
  CandidateIdentity *v18; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 40;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v7 = 0x666666666666666LL;
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v12 = (CandidateIdentity *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (char *)v12 + 40 * v5;
  try
  {
    std::wstring::wstring(v13, a3);
    *((_DWORD *)v13 + 8) = *(_DWORD *)(a3 + 32);
    v18 = (CandidateIdentity *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<CandidateIdentity *>(v16, a2, v12);
      v18 = v12;
      v15 = (CandidateIdentity *)(v13 + 40);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<CandidateIdentity *>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(v18, (CandidateIdentity *)(v13 + 40));
    std::_Deallocate<16,0>(v12, 40 * v7);
    throw;
  }
  std::vector<CandidateIdentity>::_Change_array(a1, v12, v8, v7, v12);
  return v13;
}
