/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180348A64
 * Callers:
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x18011EDCC (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x18011F994 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349400 (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349570 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     _std::vector_std::basic_string_char_std::char_traits_char__std::allocator_char____std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$11 @ 0x1803496A3 (_std--vector_std--basic_string_char_std--char_traits_char__std--allocator_char____std--allocator.c)
 *     ?_Change_array@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@_K1@Z @ 0x180350BA0 (-_Change_array@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::string>>(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  void *v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 != a2 )
  {
    v8 = a3;
    v4 = a1;
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      if ( v5 >= 0x10 )
      {
        v6 = *(void **)v4;
        v8 = v5 + 1;
        v7 = v6;
        if ( v5 + 1 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v7, &v8, a3);
          v6 = v7;
        }
        operator delete(v6);
      }
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 15LL;
      *(_BYTE *)v4 = 0;
      v4 += 32LL;
    }
    while ( v4 != a2 );
  }
}
