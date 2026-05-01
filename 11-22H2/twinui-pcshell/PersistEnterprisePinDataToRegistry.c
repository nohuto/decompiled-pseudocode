/*
 * XREFs of PersistEnterprisePinDataToRegistry @ 0x180287EFC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287684 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x1802877C4 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ?Stringify@?$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802887C4 (-Stringify@-$consume_Windows_Data_Json_IJsonValue@UIJsonArray@Json@Data@Windows@winrt@@@impl@win.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18028909C (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1803E4410 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x18046A3A4 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PersistEnterprisePinDataToRegistry(__int64 a1, __int64 a2)
{
  winrt::hstring *v4; // rax
  const unsigned __int16 *v5; // rax
  int v6; // eax
  int v7; // eax
  LSTATUS v8; // eax
  unsigned __int64 v9; // r9
  char v10; // bl
  char v11; // al
  LSTATUS v12; // eax
  unsigned __int64 v13; // r9
  const char *v14; // rdx
  const char *v15; // rax
  __int64 v16; // r9
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v20; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(a1) )
  {
    v4 = (winrt::hstring *)winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonArray>::Stringify(
                             a1,
                             &v20);
    v5 = winrt::hstring::c_str(v4);
    v6 = SHRegSetString(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinData",
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16C,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v6,
        v18);
    winrt::hstring::~hstring(&v20);
    v7 = SHRegSetDWORD(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinDataVersion",
           1u);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16E,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7,
        v18);
  }
  else
  {
    v8 = SHDeleteValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"EnterprisePinData");
    v9 = (unsigned int)v8;
    if ( v8 > 0 )
      v9 = (unsigned __int16)v8 | 0x80070000;
    if ( (int)(v9 + 0x80000000) < 0 || (_DWORD)v9 == -2147024894 )
    {
      v11 = 0;
      v10 = 1;
    }
    else
    {
      v10 = 1;
      v11 = 1;
    }
    if ( v11 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x175,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)v9,
        v18);
    v12 = SHDeleteValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"EnterprisePinDataVersion");
    v13 = (unsigned int)v12;
    if ( v12 > 0 )
      v13 = (unsigned __int16)v12 | 0x80070000;
    if ( (((_DWORD)v13 + 0x80000000) & 0x80000000) != 0 || (_DWORD)v13 == -2147024894 )
      v10 = 0;
    if ( v10 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x179,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)v13,
        v18);
  }
  tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
    a2,
    (__int64 *)&v20);
  v15 = tip::details::reason_string(
          (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_pin_data_persisted",
          v14);
  tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v16 + 8, 5LL, v15);
  return tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v20);
}
