/*
 * XREFs of ??1?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18006A1A8
 * Callers:
 *     ?Release@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18006AABC (-Release@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@.c)
 * Callees:
 *     ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x18006A3DC (--1stored_flag_requirements@details@tip2@@QEAA@XZ.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18006B110 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::~merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_GamepadInterceptionUsageTipTest_attributes,tip2::test_data_basic>::`vftable';
  if ( *(_QWORD *)(a1 + 240) && (*(_BYTE *)(a1 + 28) & 1) == 0 )
    tip2::details::shared_data<0,0,1>::complete_helper(a1 + 8, 4LL);
  tip2::details::stored_flag_requirements::~stored_flag_requirements((tip2::details::stored_flag_requirements *)(a1 + 256));
  return tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 8);
}
