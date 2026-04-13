/*
 * XREFs of ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800B8ABC
 * Callers:
 *     ??0sentry@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1800B7100 (--0sentry@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 *     ?_Gnavail@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@IEBA_JXZ @ 0x1800619A4 (-_Gnavail@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@IEBA_JXZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?sbumpc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x180064EB0 (-sbumpc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ?sgetc@?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@QEAAGXZ @ 0x180065288 (-sgetc@-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@QEAAGXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC34 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x1800A040C (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::wistream::_Ipfx(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  std::locale *v6; // rcx
  const struct std::locale::facet *v7; // rsi
  __int64 v8; // rdi
  _WORD **v9; // rax
  unsigned __int16 v10; // cx
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)v1 + v3 + 16) )
  {
    v4 = *(__int64 *)((char *)v1 + v3 + 80);
    if ( v4 )
    {
      std::wostream::flush(v4);
      v2 = *v1;
    }
    v5 = (__int64)v1 + *(int *)(v2 + 4);
    if ( (*(_BYTE *)(v5 + 24) & 1) != 0 )
    {
      v6 = std::ios_base::getloc(v5, (std::locale *)&v14);
      v7 = std::use_facet<std::ctype<wchar_t>>(v6);
      std::locale::~locale((std::locale *)&v14);
      try
      {
        v10 = std::wstreambuf::sgetc(*(unsigned __int16 ****)((char *)v1 + *(int *)(*v1 + 4) + 72));
        while ( v10 != 0xFFFF )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(
                  v7,
                  72LL,
                  v10) )
            goto LABEL_20;
          v8 = *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72);
          if ( std::wstreambuf::_Gnavail(v8) <= 1 )
          {
            if ( (unsigned __int16)std::wstreambuf::sbumpc(v8) == 0xFFFF )
              v10 = -1;
            else
              v10 = std::wstreambuf::sgetc((unsigned __int16 ***)v8);
          }
          else
          {
            --**(_DWORD **)(v8 + 80);
            v9 = *(_WORD ***)(v8 + 56);
            v10 = *++*v9;
          }
        }
        std::basic_ios<unsigned short>::setstate((__int64)v1 + *(int *)(*v1 + 4), 1, 0);
      }
      catch ( ... )
      {
        std::basic_ios<unsigned short>::setstate((__int64)a1 + *(int *)(*a1 + 4), 4, 1);
        v1 = a1;
        goto LABEL_15;
      }
LABEL_20:
      ;
    }
LABEL_15:
    v2 = *v1;
    if ( !*(_DWORD *)((char *)v1 + *(int *)(*v1 + 4) + 16) )
      return 1;
  }
  std::basic_ios<unsigned short>::setstate((__int64)v1 + *(int *)(v2 + 4), 2, 0);
  return 0;
}
