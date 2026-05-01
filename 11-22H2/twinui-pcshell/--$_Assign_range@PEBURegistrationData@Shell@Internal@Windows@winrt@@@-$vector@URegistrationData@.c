/*
 * XREFs of ??$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBURegistrationData@Shell@Internal@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x180702090
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXU?$array_view@$$CBURegistrationData@Shell@Internal@Windows@winrt@@@2@@Z @ 0x180707428 (-ReplaceAll@-$vector_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vect.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0 (--$_Destroy_range@V-$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPE.c)
 *     ??$_Copy_unchecked@PEBURegistrationData@Shell@Internal@Windows@winrt@@PEAU12345@@std@@YAPEAURegistrationData@Shell@Internal@Windows@winrt@@PEBU12345@0PEAU12345@@Z @ 0x180702168 (--$_Copy_unchecked@PEBURegistrationData@Shell@Internal@Windows@winrt@@PEAU12345@@std@@YAPEAURegi.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180707B50 (-_Clear_and_reserve_geometric@-$vector@URegistrationData@Shell@Internal@Windows@winrt@@V-$alloca.c)
 */

void *__fastcall std::vector<winrt::Windows::Internal::Shell::RegistrationData>::_Assign_range<winrt::Windows::Internal::Shell::RegistrationData const *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  winrt::Windows::Foundation::IUnknown *i; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *v11; // rcx
  winrt::Windows::Internal::Shell::RegistrationData *v12; // rdx
  void *result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (winrt::Windows::Foundation::IUnknown *)(v7 + 8 * v6);
    std::_Copy_unchecked<winrt::Windows::Internal::Shell::RegistrationData const *,winrt::Windows::Internal::Shell::RegistrationData *>(
      a2,
      a3);
    v12 = (winrt::Windows::Internal::Shell::RegistrationData *)a1[1];
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::Windows::Internal::Shell::RegistrationData>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = (_QWORD *)(a2 + 8 * v8);
    std::_Copy_unchecked<winrt::Windows::Internal::Shell::RegistrationData const *,winrt::Windows::Internal::Shell::RegistrationData *>(
      a2,
      v9);
    for ( i = (winrt::Windows::Foundation::IUnknown *)a1[1]; ; i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
    {
      v11 = i;
      if ( v9 == a3 )
        break;
      *(_QWORD *)i = *v9;
      winrt::Windows::Foundation::IUnknown::add_ref(i);
      ++v9;
    }
    v12 = i;
  }
  result = std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(v11, v12);
  a1[1] = (__int64)i;
  return result;
}
