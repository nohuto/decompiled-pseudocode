/*
 * XREFs of ??$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1801002BC
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x180102928 (-ReplaceAll@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUs.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180056D18 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Copy_unchecked@PEBUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@0PEAU1234@@Z @ 0x180100394 (--$_Copy_unchecked@PEBUUserResizeVisual@Transitions@Udwm@winrt@@PEAU1234@@std@@YAPEAUUserResizeV.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100424 (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180103D88 (-_Clear_and_reserve_geometric@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UU.c)
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Assign_range<winrt::Udwm::Transitions::UserResizeVisual const *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  winrt::Windows::Foundation::IUnknown *i; // rbx
  winrt::Udwm::Transitions::UserResizeVisual *v11; // rcx
  __int64 result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (winrt::Windows::Foundation::IUnknown *)(v7 + 8 * v6);
    std::_Copy_unchecked<winrt::Udwm::Transitions::UserResizeVisual const *,winrt::Udwm::Transitions::UserResizeVisual *>(
      a2,
      a3);
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = (_QWORD *)(a2 + 8 * v8);
    std::_Copy_unchecked<winrt::Udwm::Transitions::UserResizeVisual const *,winrt::Udwm::Transitions::UserResizeVisual *>(
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
  }
  result = std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v11);
  a1[1] = (__int64)i;
  return result;
}
