/*
 * XREFs of ??0?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x1800B3AA8
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800B3A04 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@ti.c)
 * Callees:
 *     ??0_tip_SearchHideTest@@QEAA@XZ @ 0x1800B3B60 (--0_tip_SearchHideTest@@QEAA@XZ.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800B4B2C (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  __int128 v4; // [rsp+30h] [rbp-50h]
  _OWORD v5[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)&v4 + 1) = 0LL;
  *(_QWORD *)&v3 = 0xD10002423933LL;
  *((_QWORD *)&v3 + 1) = "SearchHideTest";
  LOWORD(v4) = 1281;
  v5[0] = v3;
  v5[1] = v4;
  v5[2] = 0uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v5);
  _tip_SearchHideTest::_tip_SearchHideTest((_tip_SearchHideTest *)(a1 + 248));
  *(_DWORD *)(a1 + 328) = 1;
  *(_QWORD *)(a1 + 256) = a1 + 16;
  result = a1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::`vftable';
  return result;
}
