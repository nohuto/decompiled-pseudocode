/*
 * XREFs of ?_Init@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXPEBD_KH@Z @ 0x180051D7C
 * Callers:
 *     ??0?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x180050FD4 (--0-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@D.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

void __fastcall std::stringbuf::_Init(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  unsigned int v5; // ebx
  char *v8; // rsi
  char *v9; // r8

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (v5 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a3);
    memcpy_0(v8, a2, a3);
    *(_QWORD *)(a1 + 104) = &v8[a3];
    if ( (v5 & 4) == 0 )
      std::streambuf::setg(a1, v8, v8, &v8[a3]);
    if ( (v5 & 2) == 0 )
    {
      v9 = v8;
      if ( (v5 & 0x18) != 0 )
        v9 = *(char **)(a1 + 104);
      std::streambuf::setp(a1, v8, v9, *(_QWORD *)(a1 + 104));
      if ( (v5 & 4) != 0 )
        std::streambuf::setg(a1, v8, 0LL, v8);
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
