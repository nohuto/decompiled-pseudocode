/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800D55D0
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800D6258 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800D44AC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800D44AC.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x1800D5168 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@U_String_constructor_concat.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800D77A0 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@N@Z.c)
 */

// Hidden C++ exception states: #wind=6
char **__fastcall ISMTracing::GetVector3AsString(char **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  char *v7[3]; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-61h]
  void *v9[3]; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp-41h]
  void *v11[3]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp-21h]
  void *v13[3]; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp-1h]
  void *v15[3]; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 v16; // [rsp+C8h] [rbp+1Fh]
  void *v17[3]; // [rsp+D0h] [rbp+27h] BYREF
  unsigned __int64 v18; // [rsp+E8h] [rbp+3Fh]

  std::to_string(v17);
  std::to_string(v11);
  std::to_string(v9);
  v2 = std::operator+<char>(v15, v9, (__int64)", ");
  std::string::string(v7, v3, v2, v11);
  v4 = std::operator+<char>(v13, v7, (__int64)", ");
  std::string::string(a1, v5, v4, v17);
  if ( v14 >= 0x10 )
    std::_Deallocate<16,0>(v13[0], v14 + 1);
  v13[2] = 0LL;
  v14 = 15LL;
  LOBYTE(v13[0]) = 0;
  if ( v8 >= 0x10 )
    std::_Deallocate<16,0>(v7[0], v8 + 1);
  v7[2] = 0LL;
  v8 = 15LL;
  LOBYTE(v7[0]) = 0;
  if ( v16 >= 0x10 )
    std::_Deallocate<16,0>(v15[0], v16 + 1);
  v15[2] = 0LL;
  v16 = 15LL;
  LOBYTE(v15[0]) = 0;
  if ( v10 >= 0x10 )
    std::_Deallocate<16,0>(v9[0], v10 + 1);
  v9[2] = 0LL;
  v10 = 15LL;
  LOBYTE(v9[0]) = 0;
  if ( v12 >= 0x10 )
    std::_Deallocate<16,0>(v11[0], v12 + 1);
  v11[2] = 0LL;
  v12 = 15LL;
  LOBYTE(v11[0]) = 0;
  if ( v18 >= 0x10 )
    std::_Deallocate<16,0>(v17[0], v18 + 1);
  return a1;
}
