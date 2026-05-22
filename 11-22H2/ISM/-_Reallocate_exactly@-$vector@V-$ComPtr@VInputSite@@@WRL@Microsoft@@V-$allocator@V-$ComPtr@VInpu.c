/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180023DA0
 * Callers:
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180070DEC (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180025304 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800A9FB8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800AA78C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // r8
  _QWORD *i; // rcx
  char *result; // rax

  v3 = (__int64)(a1[1] - *a1) >> 3;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v4 = a2;
  if ( 8 * a2 >= 0x1000 )
  {
    v5 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * a2);
  }
  else if ( v4 * 8 )
  {
    v5 = operator new(8 * a2);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (_QWORD *)a1[1];
  v7 = v5;
  for ( i = (_QWORD *)*a1; i != v6; ++i )
  {
    *v7 = 0LL;
    if ( v7 != i )
    {
      *v7 = *i;
      *i = 0LL;
    }
    ++v7;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v5;
  a1[1] = &v5[v3];
  result = (char *)&v5[v4];
  a1[2] = &v5[v4];
  return result;
}
