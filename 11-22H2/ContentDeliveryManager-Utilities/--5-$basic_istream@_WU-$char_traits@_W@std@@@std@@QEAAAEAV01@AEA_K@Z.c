/*
 * XREFs of ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800B727C
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x1800B6D18 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180053718 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x180064914 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x1800652AC (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B69E0 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??0sentry@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z @ 0x1800B7150 (--0sentry@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::wistream::operator>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::locale *v4; // rcx
  const struct std::locale::facet *v5; // rsi
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp-58h] BYREF
  char v9; // [rsp+48h] [rbp-50h]
  __int64 v10; // [rsp+50h] [rbp-48h] BYREF
  bool v11; // [rsp+58h] [rbp-40h]
  __int64 *v12; // [rsp+60h] [rbp-38h] BYREF
  char v13; // [rsp+68h] [rbp-30h]
  char v14[40]; // [rsp+70h] [rbp-28h] BYREF
  int v17; // [rsp+B0h] [rbp+18h] BYREF
  char v18; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a1;
  v17 = 0;
  std::wistream::sentry::sentry((__int64)&v12, a1);
  if ( v13 )
  {
    v4 = std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), (std::locale *)&v18);
    v5 = std::use_facet<std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(v4);
    std::locale::~locale((std::locale *)&v18);
    try
    {
      v6 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
      v8 = 0LL;
      v9 = 1;
      v10 = *(_QWORD *)(v6 + 72);
      v11 = v10 == 0;
      (*(void (__fastcall **)(const struct std::locale::facet *, char *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v5 + 56LL))(
        v5,
        v14,
        &v10,
        &v8,
        v6,
        &v17,
        a2);
    }
    catch ( ... )
    {
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4, 1);
      v3 = a1;
    }
  }
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v17, 0);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(&v12);
  return v3;
}
