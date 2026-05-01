/*
 * XREFs of ??$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18022F224
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUUri@Foundation@Windows@winrt@@@2@@Z @ 0x180241BF8 (-ReplaceAll@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundatio.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??$_Copy_unchecked@PEBUUri@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAUUri@Foundation@Windows@winrt@@PEBU1234@0PEAU1234@@Z @ 0x18022F2F8 (--$_Copy_unchecked@PEBUUri@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAUUri@Foundation@Windows.c)
 *     ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348 (--$_Destroy_range@V-$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180247E74 (-_Clear_and_reserve_geometric@-$vector@UUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundati.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::Uri>::_Assign_range<winrt::Windows::Foundation::Uri const *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  winrt::Windows::Foundation::IUnknown *i; // rbx
  winrt::Windows::Foundation::IUnknown *v11; // rcx
  winrt::Windows::Foundation::IUnknown *v12; // rdx
  __int64 result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (winrt::Windows::Foundation::IUnknown *)(v7 + 8 * v6);
    std::_Copy_unchecked<winrt::Windows::Foundation::Uri const *,winrt::Windows::Foundation::Uri *>(a2, a3);
    v12 = (winrt::Windows::Foundation::IUnknown *)a1[1];
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::Windows::Foundation::Uri>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = (_QWORD *)(a2 + 8 * v8);
    std::_Copy_unchecked<winrt::Windows::Foundation::Uri const *,winrt::Windows::Foundation::Uri *>(a2, v9);
    for ( i = (winrt::Windows::Foundation::IUnknown *)a1[1]; ; i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
    {
      v11 = i;
      if ( v9 == a3 )
        break;
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
        i,
        v9++);
    }
    v12 = i;
  }
  result = std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(v11, v12);
  a1[1] = (__int64)i;
  return result;
}
