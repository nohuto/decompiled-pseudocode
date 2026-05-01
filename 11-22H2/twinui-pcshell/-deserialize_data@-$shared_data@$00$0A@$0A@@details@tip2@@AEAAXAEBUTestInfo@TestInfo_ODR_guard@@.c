/*
 * XREFs of ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18046BF0C
 * Callers:
 *     ?update_from_test_info@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180013178 (-update_from_test_info@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_gu.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x180462F40 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180462FB8 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$load_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1804630CC (--$load_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18046323C (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18046531C (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x180466028 (--0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z.c)
 *     ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1804660B4 (--0read_buffer@tson@@QEAA@PEBD@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?deserialize@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z @ 0x18046BE88 (-deserialize@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEAVinput_archive@tson@@@Z.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x18046CAC4 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@QEAAXPEAD@Z @ 0x18046D7D4 (-reset@-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18046E058 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x18046E0EC (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

void __fastcall tip2::details::shared_data<1,0,0>::deserialize_data(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // dl
  bool v5; // zf
  __int64 *v6; // rdi
  LPVOID v7; // rax
  unsigned __int8 v8; // dl
  int v9; // eax
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // r8
  _BYTE *v12; // rcx
  unsigned __int8 v13[8]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v14; // [rsp+28h] [rbp-91h] BYREF
  SIZE_T cb; // [rsp+30h] [rbp-89h]
  char v16; // [rsp+38h] [rbp-81h]
  _BYTE v17[32]; // [rsp+40h] [rbp-79h] BYREF
  tson::read_buffer *v18; // [rsp+60h] [rbp-59h] BYREF
  int v19; // [rsp+68h] [rbp-51h]
  const char *v20; // [rsp+70h] [rbp-49h]
  char v21; // [rsp+78h] [rbp-41h]
  char v22; // [rsp+80h] [rbp-39h]

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
    goto LABEL_26;
  tson::read_buffer::read_buffer((tson::read_buffer *)v17, *(const char **)(a2 + 24));
  tson::input_archive::input_archive((tson::input_archive *)&v18, (struct tson::read_buffer *)v17, *(_BYTE *)(a1 + 33));
  if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24) == 0LL;
    v20 = "name";
    v21 = 4;
    if ( v5 )
    {
      v14 = 0LL;
      cb = 0LL;
      v6 = (__int64 *)(a1 + 8);
      v16 = 0;
      tson::input_archive::read_string_two_phase<tson::ansistring_tag>((tson::input_archive *)&v18, v4, (__int64)&v14);
      if ( cb )
      {
        v7 = CoTaskMemAlloc(cb);
        wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>::reset(
          a1 + 8,
          v7);
        if ( *v6 )
        {
          v14 = *v6;
          tson::input_archive::read_string_two_phase<tson::ansistring_tag>(
            (tson::input_archive *)&v18,
            v8,
            (__int64)&v14);
          goto LABEL_11;
        }
        v9 = v19;
        if ( v19 >= 0 )
          v9 = -2147024882;
        v19 = v9;
      }
      wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>::reset(
        a1 + 8,
        0LL);
LABEL_11:
      if ( *v6 )
        *(_QWORD *)(a1 + 24) = *v6;
      goto LABEL_18;
    }
    if ( tson::input_archive::search((tson::input_archive *)&v18) )
    {
      tson::input_archive::consume_expected_marker(&v18);
      v13[0] = 0;
      tson::read_buffer::consume<unsigned char>((__int64)v18, v13);
      if ( v13[0] > 1u )
      {
        v10 = tson::input_archive::upgrade_string_size((tson::input_archive *)&v18, v13[0]);
        v11 = *((_QWORD *)v18 + 1) + (unsigned __int16)(v10 - 1);
        if ( v11 > *((_QWORD *)v18 + 2) )
          *((_BYTE *)v18 + 24) = 1;
        else
          *((_QWORD *)v18 + 1) = v11;
      }
    }
  }
LABEL_18:
  v21 = 3;
  v20 = "log";
  tson::input_archive::startNode((tson::input_archive *)&v18);
  tson::load_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
    (tson::input_archive *)&v18,
    (_QWORD *)(a1 + 96));
  tson::input_archive::finishNode((tson::input_archive *)&v18);
  v21 = 6;
  v20 = "errors";
  tson::input_archive::startNode((tson::input_archive *)&v18);
  tson::load_nothrow<wil::StoredFailureInfo>((tson *)&v18, (_QWORD *)(a1 + 72));
  tson::input_archive::finishNode((tson::input_archive *)&v18);
  v21 = 5;
  v20 = "flags";
  tson::input_archive::startNode((tson::input_archive *)&v18);
  tson::load_nothrow<tip2::test_flag>((tson *)&v18, (_QWORD *)(a1 + 120));
  tson::input_archive::finishNode((tson::input_archive *)&v18);
  v12 = (_BYTE *)*((_QWORD *)v18 + 1);
  if ( (unsigned __int64)v12 < *((_QWORD *)v18 + 2) && *v12 == 8 )
    tson::input_archive::consume_expected_marker(&v18);
  else
    tip2::details::shared_data<1,0,0>::deserialize((__int64 *)a1, (__int64)&v18);
  if ( v19 >= 0 && !*((_BYTE *)v18 + 24) && !v22 )
  {
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 16);
    return;
  }
LABEL_26:
  *(_DWORD *)(a1 + 64) |= 0x80000u;
}
