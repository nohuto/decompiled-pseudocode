/*
 * XREFs of ?_Init@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8@G$0BAPPPP@$0A@@2@@Z @ 0x180071618
 * Callers:
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18006E43C (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 * Callees:
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z @ 0x180005748 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x180009348 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ??Bid@locale@std@@QEAA_KXZ @ 0x180053AF4 (--Bid@locale@std@@QEAA_KXZ.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18006E7CC (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::_Init(
        __int64 a1,
        struct std::locale::facet *a2)
{
  struct std::locale::_Locimp *v4; // rbx
  unsigned __int64 v5; // rax
  struct std::locale::_Locimp *v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // r8
  struct std::locale::_Locimp *v10; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 88) = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::_Init'::`2'::_State0;
  *(_QWORD *)(a1 + 8) = a2;
  v4 = std::locale::_Locimp::_New_Locimp(*(const struct std::locale::_Locimp **)(a1 + 16));
  v10 = v4;
  if ( a2 )
  {
    v5 = std::locale::id::operator unsigned __int64((__int64)&std::codecvt<unsigned short,char,int>::id);
    std::locale::_Locimp::_Locimp_Addfac((void **)v4, a2, v5);
    *((_DWORD *)v4 + 8) = 0;
    std::_Yarn<char>::operator=((void **)v4 + 5, "*");
  }
  v6 = *(struct std::locale::_Locimp **)(a1 + 16);
  if ( v6 != v4 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v6 + 16LL))(v6);
    v9 = v7;
    if ( v7 )
      (**v7)(v7, 1LL);
    *(_QWORD *)(a1 + 16) = v4;
    (*(void (__fastcall **)(struct std::locale::_Locimp *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v4 + 8LL))(
      v4,
      v8,
      v9);
  }
  std::locale::~locale((std::locale *)&v10);
  *(_QWORD *)(a1 + 96) = 0LL;
}
