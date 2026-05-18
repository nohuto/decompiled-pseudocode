/*
 * XREFs of ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EDFC
 * Callers:
 *     ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@AEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EFCC (--$-5DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_istream@DU-$char_t_ea_18008EFCC.c)
 * Callees:
 *     ??1_Sentry_base@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18001E500 (--1_Sentry_base@-$basic_istream@DU-$char_traits@D@std@@@std@@QEAA@XZ.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18001E54C (--1locale@std@@QEAA@XZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18001E784 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x18001EF28 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??0sentry@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1800511D4 (--0sentry@-$basic_istream@DU-$char_traits@D@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K@Z @ 0x180051EBC (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator>><char>(__int64 a1, void **a2)
{
  unsigned int v4; // ebp
  char v5; // r15
  std::locale *v6; // rax
  struct std::_Facet_base *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  int i; // eax
  __int64 v11; // r8
  char v12; // si
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE v17[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  std::istream::sentry::sentry((__int64)v17, a1, 0);
  if ( v17[8] )
  {
    v6 = (std::locale *)std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v18);
    v7 = std::use_facet<std::ctype<char>>(v6);
    std::locale::~locale((std::locale *)v18);
    std::string::erase(a2);
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) > 0
      && (unsigned __int64)std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) < 0x7FFFFFFFFFFFFFFFLL )
    {
      v8 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)));
    }
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v9); ; i = std::streambuf::snextc(v14) )
    {
      v12 = i;
      if ( !v8 )
        break;
      if ( i == -1 )
      {
        v4 = 1;
        break;
      }
      LOBYTE(v11) = i;
      if ( (unsigned __int8)std::ctype<char>::is(v7, 72LL, v11) )
        break;
      LOBYTE(v13) = v12;
      std::string::push_back(a2, v13);
      v5 = 1;
      --v8;
      v14 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
  }
  std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  v15 = v4 | 2;
  if ( v5 )
    v15 = v4;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v15, 0LL);
  std::istream::_Sentry_base::~_Sentry_base((__int64)v17);
  return a1;
}
