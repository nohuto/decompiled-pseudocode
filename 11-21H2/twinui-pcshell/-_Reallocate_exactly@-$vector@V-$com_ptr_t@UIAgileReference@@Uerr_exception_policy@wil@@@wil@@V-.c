/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18007CBD0
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18018FCB0 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1802DE4C0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 *v6; // rdx
  __int64 *v7; // rcx
  _QWORD *i; // r8
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
  v7 = *a1;
  for ( i = v5; v7 != v6; ++v7 )
  {
    v10 = *v7;
    *v7 = 0LL;
    *i++ = v10;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(*a1);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v5;
  a1[1] = &v5[v3];
  result = (char *)&v5[v4];
  a1[2] = &v5[v4];
  return result;
}
