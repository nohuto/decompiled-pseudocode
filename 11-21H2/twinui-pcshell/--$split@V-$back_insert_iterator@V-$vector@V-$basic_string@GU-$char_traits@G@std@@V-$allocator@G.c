/*
 * XREFs of ??$split@V?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@@stringutils@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@GV?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@2@@Z @ 0x1805DCD7C
 * Callers:
 *     ?split@stringutils@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1805DEAA8 (-split@stringutils@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1803D519C (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1805650F8 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x1805BBF78 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1805BC8AC (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall stringutils::split<std::back_insert_iterator<std::vector<std::wstring>>>(
        _QWORD *a1,
        unsigned __int16 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  _QWORD v7[19]; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v8[104]; // [rsp+B8h] [rbp-A0h] BYREF
  void *v9[4]; // [rsp+120h] [rbp-38h] BYREF

  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v7,
    a1);
  v9[2] = 0LL;
  v9[3] = (void *)7;
  LOWORD(v9[0]) = 0;
  while ( 1 )
  {
    v5 = std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
           (__int64)v7,
           v9,
           a2);
    if ( !(unsigned __int8)std::ios_base::operator bool(v5 + *(int *)(*(_QWORD *)v5 + 4LL)) )
      break;
    if ( a3[1] == a3[2] )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(a3, (_QWORD *)a3[1], (__int64)v9);
    }
    else
    {
      std::wstring::wstring(a3[1], (__int64)v9);
      a3[1] += 32LL;
    }
  }
  std::wstring::_Tidy_deallocate((__int64)v9);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v8);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v8);
}
