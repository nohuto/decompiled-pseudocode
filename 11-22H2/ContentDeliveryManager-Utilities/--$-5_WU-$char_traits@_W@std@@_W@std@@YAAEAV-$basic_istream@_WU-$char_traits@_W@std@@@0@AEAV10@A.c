/*
 * XREFs of ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800CFE74
 * Callers:
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800D0400 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180053718 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x180064914 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x1800652AC (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1800B7150 (--0sentry@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800D01D0 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 *     ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x1800D1BF8 (-get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$istreambu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  std::locale *v4; // rcx
  int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp-58h] BYREF
  char v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h] BYREF
  bool v14; // [rsp+68h] [rbp-40h]
  __int64 *v15; // [rsp+70h] [rbp-38h] BYREF
  char v16; // [rsp+78h] [rbp-30h]
  char v17; // [rsp+80h] [rbp-28h] BYREF
  int v20; // [rsp+C0h] [rbp+18h] BYREF
  char v21; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v20 = 0;
  std::wistream::sentry::sentry((__int64)&v15, a1);
  if ( v16 )
  {
    v4 = std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), (std::locale *)&v21);
    v5 = std::use_facet<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(v4);
    std::locale::~locale((std::locale *)&v21);
    try
    {
      v6 = a2[2];
      v7 = a2[1];
      v8 = *a2;
      v9 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
      v11 = 0LL;
      v12 = 1;
      v13 = *(_QWORD *)(v9 + 72);
      v14 = v13 == 0;
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        v5,
        (unsigned int)&v17,
        (unsigned int)&v13,
        (unsigned int)&v11,
        v9,
        (__int64)&v20,
        v8,
        v7,
        v6);
    }
    catch ( ... )
    {
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4, 1);
      v3 = a1;
    }
  }
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v20, 0);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(&v15);
  return v3;
}
