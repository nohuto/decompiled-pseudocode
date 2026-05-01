/*
 * XREFs of ??0?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1801C4080
 * Callers:
 *     ??$open@V?$tip_test@U_tip_AppPrelaunch@@@tip@@@tip@@YA?AV?$tip_test@U_tip_AppPrelaunch@@@0@W4TestRetrievalOptions@@@Z @ 0x1801C3050 (--$open@V-$tip_test@U_tip_AppPrelaunch@@@tip@@@tip@@YA-AV-$tip_test@U_tip_AppPrelaunch@@@0@W4Tes.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_AppPrelaunch>::test_merged_data<_tip_AppPrelaunch>(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)(a1 + 16) = &tip::details::test_merged_data<_tip_AppPrelaunch>::c_details;
  v2 = a1 + 8;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)v2 = a1;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 80) = 0LL;
  *(_WORD *)(v2 + 98) = -1;
  *(_BYTE *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)a1 = &tip::details::test_merged_data<_tip_AppPrelaunch>::`vftable';
  *(_QWORD *)(a1 + 144) = a1 + 32;
  *(_BYTE *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  tip::details::test_common_data<1>::open_without_lock();
  return a1;
}
