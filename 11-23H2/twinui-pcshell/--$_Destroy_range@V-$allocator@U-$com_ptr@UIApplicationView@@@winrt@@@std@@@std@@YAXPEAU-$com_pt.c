/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x180681040
 * Callers:
 *     _std::vector_winrt::com_ptr_IApplicationView__std::allocator_winrt::com_ptr_IApplicationView_____::_Emplace_reallocate_winrt::com_ptr_IApplicationView__&__::_1_::catch$0 @ 0x1806811E0 (_std--vector_winrt--com_ptr_IApplicationView__std--allocator_winrt--com_ptr_IApplicationView____.c)
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@0@@Z @ 0x180681D58 (--$_Uninitialized_move@PEAU-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplic.c)
 *     ?_Change_array@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UIApplicationView@@@winrt@@_K1@Z @ 0x180685AC8 (-_Change_array@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicat.c)
 *     ?_Tidy@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXXZ @ 0x180685DFC (-_Tidy@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationView@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::com_ptr<IApplicationView>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
