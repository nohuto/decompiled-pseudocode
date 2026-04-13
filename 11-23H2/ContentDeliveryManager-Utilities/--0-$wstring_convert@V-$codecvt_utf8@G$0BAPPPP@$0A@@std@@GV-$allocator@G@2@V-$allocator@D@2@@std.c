/*
 * XREFs of ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18006E3EC
 * Callers:
 *     ?Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBD@Z @ 0x180071340 (-Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@GU-$char_tr.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x1800713E0 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005548 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     _Getcvt @ 0x18000612C (_Getcvt.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180051F18 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180053638 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?_Init@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8@G$0BAPPPP@$0A@@2@@Z @ 0x1800715C8 (-_Init@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(
        __int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  _Cvtvec *v4; // rax
  _Cvtvec v6; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v7[112]; // [rsp+50h] [rbp-78h] BYREF

  *(_QWORD *)a1 = &std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::`vftable';
  *(_QWORD *)(a1 + 16) = std::locale::_Init(1);
  *(_QWORD *)(a1 + 48) = 15LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 80) = 7LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_WORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 92) = 0;
  *(_BYTE *)(a1 + 94) = 0;
  v2 = operator new(0x40uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 0;
    *(_QWORD *)v2 = &std::codecvt<unsigned short,char,int>::`vftable';
    std::_Locinfo::_Locinfo((std::_Locinfo *)v7, "C");
    v4 = Getcvt(&v6);
    *((_OWORD *)v3 + 1) = *(_OWORD *)&v4->_Page;
    *((_OWORD *)v3 + 2) = *(_OWORD *)&v4->_Isleadbyte[4];
    *((_OWORD *)v3 + 3) = *(_OWORD *)&v4->_Isleadbyte[20];
    std::_Locinfo::~_Locinfo((std::_Locinfo *)v7);
    *(_QWORD *)v3 = &std::codecvt_utf8<unsigned short,1114111,0>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::_Init(
    a1,
    v3);
  return a1;
}
