/*
 * XREFs of ??0?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180233B3C
 * Callers:
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@0@XZ @ 0x180230A1C (--$open@V-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV-$ti.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800B4B2C (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_AppPrelaunch@@QEAA@XZ @ 0x1801BCEF8 (--0_tip_AppPrelaunch@@QEAA@XZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x1802033A0 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_AppPrelaunch::_tip_AppPrelaunch((_tip_AppPrelaunch *)(a1 + 248));
  *(_DWORD *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 256) = a1 + 16;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::`vftable';
  tip2::details::shared_data<1,0,0>::open_without_lock(
    a1 + 8,
    a2,
    (__int64)&tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::`vftable');
  return a1;
}
