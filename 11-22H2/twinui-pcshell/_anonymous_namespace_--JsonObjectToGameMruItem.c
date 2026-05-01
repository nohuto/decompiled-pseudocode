/*
 * XREFs of _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1803E3CBC
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800AFBC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU34@AEAU34@@?$_Ref_count_obj2@UGameMruItem@@@std@@QEAA@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@1@AEAUhstring@winrt@@11@Z @ 0x1803E1938 (--$-0AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@23@@ch.c)
 *     ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803E3AF0 (-GetNamedString@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x1803E4580 (_anonymous_namespace_--TimeStringToTimePoint.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall anonymous_namespace_::JsonObjectToGameMruItem(_QWORD *a1, __int64 *a2)
{
  void *v4; // rax
  __int64 v5; // rax
  const char *v6; // r9
  _QWORD *result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp-A8h] BYREF
  volatile signed __int32 *v9[2]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-90h] BYREF
  _OWORD v11[2]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v13[4]; // [rsp+90h] [rbp-48h] BYREF
  _QWORD v14[5]; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  volatile signed __int32 *v18; // [rsp+F0h] [rbp+18h] BYREF
  volatile signed __int32 *v19; // [rsp+F8h] [rbp+20h] BYREF

  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v13, &LocaleName, 0);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v14, L"LastLaunched", 12);
  try
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      v9,
      v14,
      v13);
    v11[0] = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)v9, v12);
    anonymous_namespace_::TimeStringToTimePoint(v10, v11);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v12, &LocaleName, 0);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, L"Title", 5);
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v8,
      v11,
      v12);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v14, &LocaleName, 0);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v13, L"Aumid", 5);
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v19,
      v13,
      v14);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v12, &LocaleName, 0);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v11, L"ExePath", 7);
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v18,
      v11,
      v12);
    v4 = operator new(0x78uLL);
    v5 = std::_Ref_count_obj2<GameMruItem>::_Ref_count_obj2<GameMruItem>(
           (__int64)v4,
           (__int64)v10,
           (__int64)&v8,
           (__int64)&v19,
           (__int64 *)&v18);
    *a1 = v5 + 16;
    a1[1] = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v18);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v9);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    return a1;
  }
  return result;
}
