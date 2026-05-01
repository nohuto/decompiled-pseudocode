/*
 * XREFs of ?_Init@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXPEBD_KH@Z @ 0x180350D38
 * Callers:
 *     ??0?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x18022C184 (--0-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@DU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

void __fastcall std::stringbuf::_Init(__int64 a1, const void *a2, size_t a3, int a4)
{
  char *v8; // rsi
  char *v9; // r8

  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (a4 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a3);
    memcpy_0(v8, a2, a3);
    *(_QWORD *)(a1 + 104) = &v8[a3];
    if ( (a4 & 4) == 0 )
      std::streambuf::setg(a1, v8, v8, &v8[a3]);
    if ( (a4 & 2) == 0 )
    {
      v9 = v8;
      if ( (a4 & 0x18) != 0 )
        v9 = *(char **)(a1 + 104);
      std::streambuf::setp(a1, v8, v9, *(_QWORD *)(a1 + 104));
      if ( (a4 & 4) != 0 )
        std::streambuf::setg(a1, v8, 0LL, v8);
    }
    a4 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = a4;
}
