/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F2D88
 * Callers:
 *     ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800428FC (--$process@AEAV-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800C89FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C8A9C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1800F28B0 (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2C0C (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@ce.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800F3238 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall wil::save<cereal::JSONOutputArchive>(__int64 a1, int *a2)
{
  const unsigned __int16 *v4; // rbx
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 *v6; // rdx
  wchar_t *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  __int16 v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v20[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+C8h] [rbp-38h]
  void *v22[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+E8h] [rbp-18h]
  void *v24[3]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+108h] [rbp+8h]
  _QWORD v26[4]; // [rsp+110h] [rbp+10h] BYREF

  v13 = a2[2];
  v4 = &word_180118A58;
  v5 = &word_180118A58;
  if ( *((_QWORD *)a2 + 7) )
    v5 = (const unsigned __int16 *)*((_QWORD *)a2 + 7);
  std::string::string(v24, v5);
  v11 = *((_WORD *)a2 + 32);
  v6 = &word_180118A58;
  if ( *((_QWORD *)a2 + 16) )
    v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
  std::string::string(v22, v6);
  v12 = *a2;
  v7 = word_180118A5C;
  if ( *((_QWORD *)a2 + 3) )
    v7 = (wchar_t *)*((_QWORD *)a2 + 3);
  std::wstring::wstring(v26, (__int64)v7);
  if ( *((_QWORD *)a2 + 9) )
    v4 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
  std::string::string(v20, v4);
  v14[0] = "context";
  v14[1] = v20;
  v15[0] = "message";
  v15[1] = v26;
  v16[0] = "type";
  v16[1] = &v12;
  v17[0] = "module";
  v17[1] = v22;
  v18[0] = "line";
  v18[1] = &v11;
  v19[0] = "file";
  v19[1] = v24;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v9 + 408) = "hr";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v9 + 32), &v13);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
    *(_QWORD *)(v8 + 32),
    v19,
    (__int64)v18,
    (int)v17,
    (__int64)v16,
    (__int64)v15,
    (__int64)v14);
  if ( v21 >= 0x10 )
    std::_Deallocate<16,0>(v20[0], v21 + 1);
  v20[2] = 0LL;
  v21 = 15LL;
  LOBYTE(v20[0]) = 0;
  result = std::wstring::_Tidy_deallocate((__int64)v26);
  if ( v23 >= 0x10 )
    result = std::_Deallocate<16,0>(v22[0], v23 + 1);
  v22[2] = 0LL;
  v23 = 15LL;
  LOBYTE(v22[0]) = 0;
  if ( v25 >= 0x10 )
    return std::_Deallocate<16,0>(v24[0], v25 + 1);
  return result;
}
