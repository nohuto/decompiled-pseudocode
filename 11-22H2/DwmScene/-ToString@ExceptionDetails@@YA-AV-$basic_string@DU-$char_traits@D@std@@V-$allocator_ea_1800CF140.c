/*
 * XREFs of ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF140
 * Callers:
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 * Callees:
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800205F0 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??_D?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180020748 (--_D-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180020F24 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU.c)
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800CCAB4 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_SUBRESO.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExceptionDetails::ToString(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0LL;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)v11);
  if ( *a2 != a2[1] )
  {
    std::operator<<<std::char_traits<char>>((__int64)v12, (__int64)"{");
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = std::operator<<<std::char_traits<char>>((__int64)v12, (__int64)"[");
        v7 = std::ostream::operator<<(v6, v4);
        v8 = std::operator<<<std::char_traits<char>>(v7, (__int64)"] = ");
        v9 = ExceptionDetails::operator<<(v8, v5 + *a2);
        std::operator<<<std::char_traits<char>>(v9, (__int64)",");
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    std::operator<<<std::char_traits<char>>((__int64)v12, (__int64)"}");
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str((__int64)v11, a1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'((__int64)v11);
  return a1;
}
