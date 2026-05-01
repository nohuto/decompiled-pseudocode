/*
 * XREFs of _anonymous_namespace_::TimeStringToTimePoint @ 0x1803E4580
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1803E3CBC (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180096C50 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180096CB4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?5GU?$char_traits@G@std@@G@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x1803E19EC (--$-5GU-$char_traits@G@std@@G@std@@YAAEAV-$basic_istream@GU-$char_traits@G@std@@@0@AEAV10@AEBU-$.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::TimeStringToTimePoint(_QWORD *a1, _WORD **a2)
{
  const wchar_t *v3; // rax
  __int64 v5[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v6[19]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v7[104]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+140h] [rbp+40h] BYREF
  struct tm Tm; // [rsp+160h] [rbp+60h] BYREF

  std::wstring::wstring(v8, *a2);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v6,
    v8);
  std::wstring::_Tidy_deallocate((__int64)v8);
  v5[0] = (__int64)&Tm;
  v3 = L"%Y-%m-%dT%H:%M:%SZ";
  v5[1] = (__int64)L"%Y-%m-%dT%H:%M:%SZ";
  do
    ++v3;
  while ( *v3 );
  v5[2] = (__int64)v3;
  std::operator>><unsigned short,std::char_traits<unsigned short>,unsigned short>((__int64)v6, v5);
  if ( std::ios_base::fail((std::ios_base *)((char *)v6 + *(int *)(v6[0] + 4LL))) )
    *a1 = 0LL;
  else
    *a1 = 10000000 * _mkgmtime64(&Tm);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v7);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v7);
  return a1;
}
