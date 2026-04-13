/*
 * XREFs of ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180004EB8
 * Callers:
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x180056170 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 *     ??0?$basic_streambuf@GU?$char_traits@G@std@@@std@@IEAA@XZ @ 0x180056390 (--0-$basic_streambuf@GU-$char_traits@G@std@@@std@@IEAA@XZ.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800760D8 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800AF2B0 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180004C2C (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180004CBC (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z @ 0x1800050F8 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z.c)
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x180005170 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x1800767FC (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct std::locale::_Locimp *__fastcall std::locale::_Init(char a1)
{
  struct std::locale::_Locimp *v2; // rbx
  char v4; // [rsp+40h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v4, 0);
  v2 = (struct std::locale::_Locimp *)qword_1801AE458;
  if ( !qword_1801AE458 )
  {
    v2 = std::locale::_Locimp::_New_Locimp(0);
    std::locale::_Setgloballocale(v2);
    *((_DWORD *)v2 + 8) = 63;
    std::_Yarn<char>::operator=((char *)v2 + 40, "C");
    std::locale::_Locimp::_Clocptr = v2;
    (*(void (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v2 + 8LL))(v2);
    qword_1801AE490 = (__int64)std::locale::_Locimp::_Clocptr;
  }
  if ( a1 )
    (*(void (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v2 + 8LL))(v2);
  std::_Lockit::~_Lockit((std::_Lockit *)&v4);
  return v2;
}
