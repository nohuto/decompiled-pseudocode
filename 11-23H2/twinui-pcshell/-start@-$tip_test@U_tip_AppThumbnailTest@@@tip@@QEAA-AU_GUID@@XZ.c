/*
 * XREFs of ?start@?$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180550F8C
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA?A_PXZ @ 0x18054BDBC (--$start_and_watch_errors@V-$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA-A_PXZ.c)
 * Callees:
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@@std@@QEAA@XZ @ 0x18054AF20 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@@std@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall tip::tip_test<_tip_AppThumbnailTest>::start(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  void *v6; // rax
  std::_Ref_count_base *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]

  v4 = *a1;
  if ( v4 )
  {
    if ( tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
    {
      *a1 = 0LL;
      v5 = (std::_Ref_count_base *)a1[1];
      a1[1] = 0LL;
      if ( v5 )
        std::_Ref_count_base::_Decref(v5);
    }
  }
  if ( !*a1 )
  {
    v6 = operator new(0xC8uLL);
    v7 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>((__int64)v6);
    v9 = (__int64)v7 + 16;
    v10 = v7;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v9);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  tip::details::test_common_data<1>::start(*a1 + 8, a2);
  return a2;
}
