/*
 * XREFs of ??$?5GU?$char_traits@G@std@@G@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x1803E19EC
 * Callers:
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x1803E4580 (_anonymous_namespace_--TimeStringToTimePoint.c)
 * Callees:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1803E2B74 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1803E2DF8 (--0sentry@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1803E2EB0 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1locale@std@@QEAA@XZ @ 0x1803E2EFC (--1locale@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator>><unsigned short,std::char_traits<unsigned short>,unsigned short>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  std::locale *v4; // rcx
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v12; // [rsp+50h] [rbp-78h] BYREF
  char v13; // [rsp+58h] [rbp-70h]
  __int16 v14; // [rsp+5Ah] [rbp-6Eh]
  __int64 v15; // [rsp+60h] [rbp-68h] BYREF
  bool v16; // [rsp+68h] [rbp-60h]
  __int16 v17; // [rsp+6Ah] [rbp-5Eh]
  _BYTE v18[16]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v20[16]; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+E0h] [rbp+18h] BYREF

  v3 = a1;
  v23 = 0;
  std::basic_istream<unsigned short>::sentry::sentry(v18, a1, 0LL);
  if ( v18[8] )
  {
    v4 = (std::locale *)std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v19);
    v5 = std::use_facet<std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(v4);
    std::locale::~locale((std::locale *)v19);
    v6 = a2[2];
    v7 = a2[1];
    v8 = *a2;
    v9 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
    v12 = 0LL;
    v13 = 1;
    v14 = 0;
    try
    {
      v15 = std::basic_ios<unsigned short>::rdbuf();
      v16 = v15 == 0;
      v17 = 0;
      std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::get(
        v5,
        v20,
        &v15,
        &v12,
        v9,
        &v23,
        v8,
        v7,
        v6);
    }
    catch ( ... )
    {
      LOBYTE(v10) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v10);
      v3 = a1;
    }
  }
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v23, 0LL);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(v18);
  return v3;
}
