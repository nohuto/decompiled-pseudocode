/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCompObjectDiagnosticsPrincipal@@AEBIPEAUHSTRING__@@PEAU2@@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@QEAAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU23@AEAPEAV3@AEBI$$QEAPEAUHSTRING__@@3@Z @ 0x18019C13C
 * Callers:
 *     ?AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z @ 0x18019CD1C (-AddContributor@CompObjectDiagnosticsPrincipal@@QEAAXIPEAV1@AEBUObjectPropertyStringTuple@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18007FE7C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAUContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@0PEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C4B0 (--$_Uninitialized_move@PEAUContributor@CompObjectDiagnosticsPrincipal@@V-$allocator@UContributor.c)
 *     ??$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@?$_Default_allocator_traits@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@SAXAEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@1@QEAUContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV4@AEBI$$QEAPEAUHSTRING__@@4@Z @ 0x18019C52C (--$construct@UContributor@CompObjectDiagnosticsPrincipal@@AEAPEAV2@AEBIPEAUHSTRING__@@PEAU3@@-$_.c)
 *     ?_Change_array@?$vector@UContributor@CompObjectDiagnosticsPrincipal@@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@AEAAXQEAUContributor@CompObjectDiagnosticsPrincipal@@_K1@Z @ 0x18019E52C (-_Change_array@-$vector@UContributor@CompObjectDiagnosticsPrincipal@@V-$allocator@UContributor@C.c)
 */

unsigned __int64 __fastcall std::vector<CompObjectDiagnosticsPrincipal::Contributor>::_Emplace_reallocate<CompObjectDiagnosticsPrincipal * &,unsigned int const &,HSTRING__ *,HSTRING__ *>(
        const char *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        HSTRING a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T size_of; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx

  v6 = 0x7FFFFFFFFFFFFFFLL;
  v7 = a2 - *(_QWORD *)a1;
  v9 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 5;
  if ( v9 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v13 = v9 + 1;
  v14 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 5;
  v15 = v14 >> 1;
  if ( v14 <= 0x7FFFFFFFFFFFFFFLL - (v14 >> 1) )
  {
    v6 = v15 + v14;
    if ( v15 + v14 < v13 )
      v6 = v9 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v6);
  v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v18 = v17 + (v7 & 0xFFFFFFFFFFFFFFE0uLL);
  v19 = v17;
  std::_Default_allocator_traits<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>::construct<CompObjectDiagnosticsPrincipal::Contributor,CompObjectDiagnosticsPrincipal * &,unsigned int const &,HSTRING__ *,HSTRING__ *>(
    a5,
    v18,
    a3,
    a4,
    a5,
    a6);
  v20 = *((_QWORD *)a1 + 1);
  v21 = v19;
  v22 = *(_QWORD *)a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CompObjectDiagnosticsPrincipal::Contributor *>(v22, a2, v19);
    v20 = *((_QWORD *)a1 + 1);
    v21 = v18 + 32;
    v22 = a2;
  }
  std::_Uninitialized_move<CompObjectDiagnosticsPrincipal::Contributor *>(v22, v20, v21);
  std::vector<CompObjectDiagnosticsPrincipal::Contributor>::_Change_array(a1, v19, v13, v6);
  return v18;
}
