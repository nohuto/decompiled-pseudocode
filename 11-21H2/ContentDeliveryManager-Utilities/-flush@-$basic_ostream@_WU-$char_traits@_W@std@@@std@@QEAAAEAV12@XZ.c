/*
 * XREFs of ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x1800AF1EC
 * Callers:
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1800A8CB4 (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800CC818 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18000523C (-uncaught_exception@std@@YA_NXZ.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1800694D8 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1800A8CB4 (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::wostream::flush(__int64 *a1)
{
  __int64 v2; // rcx
  std::ios_base *v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  if ( *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72) )
  {
    std::wostream::sentry::sentry((__int64)&v6, a1);
    if ( v7 )
    {
      v2 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) == -1 )
      {
        v3 = (std::ios_base *)((char *)a1 + *(int *)(*a1 + 4));
        std::ios_base::clear(v3, *((_BYTE *)v3 + 16) | 4, 0);
      }
    }
    if ( !std::uncaught_exception() )
      std::basic_ostream<unsigned short>::_Osfx(v6);
    v4 = *(_QWORD *)(*(int *)(*(_QWORD *)v6 + 4LL) + v6 + 72);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
