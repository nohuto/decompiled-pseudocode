/*
 * XREFs of ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@D@Z @ 0x180050DF0
 * Callers:
 *     ??$getline@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@AEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x180050F38 (--$getline@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@YAAEAV-$basic_istream@DU-$_ea_180050F38.c)
 * Callees:
 *     ??1_Sentry_base@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18001E500 (--1_Sentry_base@-$basic_istream@DU-$char_traits@D@std@@@std@@QEAA@XZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18001E784 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ??0sentry@?$basic_istream@DU?$char_traits@D@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1800511D4 (--0sentry@-$basic_istream@DU-$char_traits@D@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K@Z @ 0x180051EBC (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::getline<char,std::char_traits<char>,std::allocator<char>>(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v6; // edi
  char v7; // bp
  __int64 v8; // rax
  int i; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (unsigned __int8)a3;
  v6 = 0;
  v7 = 0;
  LOBYTE(a3) = 1;
  std::istream::sentry::sentry(v15, a1, a3);
  if ( v15[8] )
  {
    std::string::erase(a2);
    v8 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    for ( i = std::streambuf::sgetc(v8); i != -1; i = std::streambuf::snextc(v11) )
    {
      if ( i == v3 )
      {
        v7 = 1;
        v12 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        std::streambuf::sbumpc(v12);
        goto LABEL_10;
      }
      if ( *(_QWORD *)(a2 + 16) >= 0x7FFFFFFFFFFFFFFFuLL )
      {
        v6 = 2;
        goto LABEL_10;
      }
      LOBYTE(v10) = i;
      std::string::push_back((void **)a2, v10);
      v7 = 1;
      v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    }
    v6 = 1;
  }
LABEL_10:
  v13 = v6 | 2;
  if ( v7 )
    v13 = v6;
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v13, 0LL);
  std::istream::_Sentry_base::~_Sentry_base((__int64)v15);
  return a1;
}
