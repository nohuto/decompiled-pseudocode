/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800862B4
 * Callers:
 *     ?EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ @ 0x1800221F4 (-EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z @ 0x1801B092C (-Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x180086358 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(char *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  SIZE_T v5; // rsi
  char *v6; // rdi

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v4 = *((_QWORD *)a1 + 1) - *(_QWORD *)a1;
  v5 = std::vector<unsigned char>::_Calculate_growth();
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memset_0(&v6[v4], 0, a2 - v4);
  memmove_0(v6, *(const void **)a1, *((_QWORD *)a1 + 1) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, v6, a2, v5);
}
