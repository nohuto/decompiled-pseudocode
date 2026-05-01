/*
 * XREFs of ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppThumbnailTest@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x18049521C
 * Callers:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx

  v3 = (_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppThumbnailTest>>::`vftable';
  v5 = a1 + 24;
  v6 = *a3;
  v7 = *a2;
  *(_QWORD *)(v5 + 8) = &tip::details::test_merged_data<_tip_AppThumbnailTest>::c_details;
  *(_QWORD *)v5 = v3;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 80) = 0LL;
  *(_WORD *)(v5 + 98) = -1;
  *(_BYTE *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 120) = 0LL;
  *(_DWORD *)(v5 + 128) = 0;
  *v3 = &tip::details::test_merged_data<_tip_AppThumbnailTest>::`vftable';
  v3[18] = v3 + 4;
  tip::details::test_common_data<1>::open_without_lock(v5, v7, v6);
  return a1;
}
