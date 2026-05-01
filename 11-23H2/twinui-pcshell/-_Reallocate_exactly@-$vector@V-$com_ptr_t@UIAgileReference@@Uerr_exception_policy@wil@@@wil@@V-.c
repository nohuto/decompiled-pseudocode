/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1800C90D0
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1801D0558 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1802CEF52 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18039122C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1803920F4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 *v6; // rdx
  _QWORD *v7; // r8
  __int64 *i; // rcx
  char *result; // rax
  __int64 v10; // rax

  v3 = a1[1] - *a1;
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
  v6 = a1[1];
  v7 = v5;
  for ( i = *a1; i != v6; ++i )
  {
    v10 = *i;
    *i = 0LL;
    *v7++ = v10;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(*a1, a1[1], v7);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v5;
  a1[1] = &v5[v3];
  result = (char *)&v5[v4];
  a1[2] = &v5[v4];
  return result;
}
