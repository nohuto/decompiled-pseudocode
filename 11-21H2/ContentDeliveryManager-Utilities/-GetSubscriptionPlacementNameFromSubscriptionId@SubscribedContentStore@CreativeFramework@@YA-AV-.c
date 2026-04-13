/*
 * XREFs of ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180070718
 * Callers:
 *     ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x18006DE30 (--0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18006C850 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x18006DC44 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18006E2BC (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18007435C (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(
        _QWORD *a1,
        _WORD *a2,
        char a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rax
  _QWORD *v7; // rax
  _QWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10[17]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v11[13]; // [rsp+C8h] [rbp-38h] BYREF
  void *v12[3]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+148h] [rbp+48h]

  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v9,
    (__int64)a2,
    a3);
  v5 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v10, L"SubscribedContent");
  v6 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v5, L"-");
  std::operator<<<unsigned short,std::char_traits<unsigned short>>(v6, a2);
  v7 = (_QWORD *)std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
                   v9,
                   v12);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v7);
  if ( v13 >= 8 )
    operator delete(v12[0]);
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v11);
  v11[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v11);
  return a1;
}
