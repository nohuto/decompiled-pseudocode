/*
 * XREFs of ??$split@V?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@std@@@stringutils@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@GV?$back_insert_iterator@V?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@2@@Z @ 0x1806E0F9C
 * Callers:
 *     ?split@stringutils@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1806E4BF8 (-split@stringutils@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180096C50 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180096CB4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x180622998 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180694708 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall stringutils::split<std::back_insert_iterator<std::vector<std::wstring>>>(
        _QWORD *a1,
        __int16 a2,
        __int64 a3)
{
  __int64 v5; // rax
  _QWORD v7[19]; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v8[104]; // [rsp+B8h] [rbp-A0h] BYREF
  _QWORD v9[2]; // [rsp+120h] [rbp-38h] BYREF
  __m128i si128; // [rsp+130h] [rbp-28h]

  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v7,
    a1);
  v9[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
    v5 = std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
           (__int64)v7,
           v9,
           a2);
    if ( !(unsigned __int8)std::ios_base::operator bool(v5 + *(int *)(*(_QWORD *)v5 + 4LL)) )
      break;
    if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
    {
      std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
        (_QWORD *)a3,
        *(_QWORD **)(a3 + 8),
        (__int64)v9);
    }
    else
    {
      std::wstring::wstring(*(_QWORD **)(a3 + 8), (__int64)v9);
      *(_QWORD *)(a3 + 8) += 32LL;
    }
  }
  std::wstring::_Tidy_deallocate((__int64)v9);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v8);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v8);
}
