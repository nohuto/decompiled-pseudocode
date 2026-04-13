/*
 * XREFs of ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180053980
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x180058800 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18004FFD4 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??0sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z @ 0x180052128 (--0sentry@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@_N@Z.c)
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800536C8 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::operator>>(__int64 a1, __int64 a2)
{
  std::locale *v4; // rax
  const struct std::locale::facet *v5; // rsi
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp-58h] BYREF
  char v9; // [rsp+48h] [rbp-50h]
  __int64 v10; // [rsp+50h] [rbp-48h] BYREF
  bool v11; // [rsp+58h] [rbp-40h]
  __int64 *v12; // [rsp+60h] [rbp-38h] BYREF
  char v13; // [rsp+68h] [rbp-30h]
  _BYTE v14[40]; // [rsp+70h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+18h] BYREF
  char v16; // [rsp+B8h] [rbp+20h] BYREF

  v15 = 0;
  std::basic_istream<unsigned short>::sentry::sentry((__int64)&v12, a1);
  if ( v13 )
  {
    v4 = (std::locale *)std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), &v16);
    v5 = std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(v4);
    std::locale::~locale((std::locale *)&v16);
    v6 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
    v8 = 0LL;
    v9 = 1;
    v10 = *(_QWORD *)(v6 + 72);
    v11 = v10 == 0;
    (*(void (__fastcall **)(const struct std::locale::facet *, _BYTE *, __int64 *, __int64 *, __int64, unsigned int *, __int64))(*(_QWORD *)v5 + 56LL))(
      v5,
      v14,
      &v10,
      &v8,
      v6,
      &v15,
      a2);
  }
  std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v15);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(&v12);
  return a1;
}
