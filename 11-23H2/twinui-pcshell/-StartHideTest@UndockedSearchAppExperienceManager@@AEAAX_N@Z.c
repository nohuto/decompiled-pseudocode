/*
 * XREFs of ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180038054
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180037BE0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800381A0 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180038770 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180038A98 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180085A44 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@1@XZ @ 0x180086CE8 (--C-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_c.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180091F98 (--1-$test_data_control@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1801BD760 (--4-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803D4B3C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::StartHideTest(UndockedSearchAppExperienceManager *this, char a2)
{
  int v4; // ebx
  const unsigned __int16 *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rax
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-30h] BYREF

  pv = 0LL;
  v4 = *((_DWORD *)this + 184);
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                           &pv,
                           v12)
            + 276LL) = v4;
  tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(v12);
  *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                          &pv,
                          v12)
           + 264LL) = a2;
  tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(v12);
  v5 = winrt::hstring::c_str((UndockedSearchAppExperienceManager *)((char *)this + 840));
  v6 = std::wstring::wstring(v14, v5);
  v7 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                   &pv,
                   v13);
  std::wstring::operator=(*v7 + 296LL, v6);
  tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(v13);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v14);
  v8 = (_QWORD *)((char *)this + 864);
  v9 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data(&pv);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::operator=(
    v8,
    v9);
  if ( *v8 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v8 + 8LL) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset(v8);
  v10 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::ensure_data(v8);
  tip2::details::shared_data<0,0,0>::start(*v10 + 8LL, v13);
  if ( pv )
    tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release(pv);
}
