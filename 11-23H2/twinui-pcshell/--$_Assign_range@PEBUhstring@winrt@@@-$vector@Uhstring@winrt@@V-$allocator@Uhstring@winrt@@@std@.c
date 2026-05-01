/*
 * XREFs of ??$_Assign_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1806F76F4
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x1806FC008 (-ReplaceAll@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@.c)
 * Callees:
 *     ??$_Copy_unchecked@PEBUhstring@winrt@@PEAU12@@std@@YAPEAUhstring@winrt@@PEBU12@0PEAU12@@Z @ 0x1806F77B0 (--$_Copy_unchecked@PEBUhstring@winrt@@PEAU12@@std@@YAPEAUhstring@winrt@@PEBU12@0PEAU12@@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 *     ??$_Uninitialized_copy@PEBUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEBU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7AA4 (--$_Uninitialized_copy@PEBUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ?_Clear_and_reserve_geometric@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806FC54C (-_Clear_and_reserve_geometric@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@.c)
 */

__int64 __fastcall std::vector<winrt::hstring>::_Assign_range<winrt::hstring const *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rbx

  v6 = (a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    v11 = v7 + 8 * v6;
    std::_Copy_unchecked<winrt::hstring const *,winrt::hstring *>(a2, a3);
    result = std::_Destroy_range<std::allocator<winrt::hstring>>(v11, a1[1]);
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::hstring>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = a2 + 8 * v8;
    std::_Copy_unchecked<winrt::hstring const *,winrt::hstring *>(a2, v9);
    result = std::_Uninitialized_copy<winrt::hstring const *>(v9, a3, a1[1], a1);
    v11 = result;
  }
  a1[1] = v11;
  return result;
}
