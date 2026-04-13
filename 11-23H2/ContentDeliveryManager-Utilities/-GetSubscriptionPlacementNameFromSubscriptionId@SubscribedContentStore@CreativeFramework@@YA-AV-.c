/*
 * XREFs of ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18006902C
 * Callers:
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x1800683C8 (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180051870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1800658C0 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x180066E8C (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??_D?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x1800678F0 (--_D-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18006C100 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(
        __int64 a1,
        _WORD *a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v10[232]; // [rsp+48h] [rbp-120h] BYREF
  _QWORD v11[4]; // [rsp+130h] [rbp-38h] BYREF

  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v8,
    (__int64)a2,
    a3);
  v5 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v9, L"SubscribedContent");
  v6 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v5, L"-");
  std::operator<<<unsigned short,std::char_traits<unsigned short>>(v6, a2);
  std::basic_stringbuf<unsigned short>::str(v10, v11);
  std::wstring::wstring(a1, (__int64)v11);
  std::wstring::_Tidy(v11, 1, 0LL);
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'((__int64)v8);
  return a1;
}
