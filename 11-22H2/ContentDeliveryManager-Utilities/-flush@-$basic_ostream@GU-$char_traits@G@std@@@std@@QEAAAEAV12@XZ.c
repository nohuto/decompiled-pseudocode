/*
 * XREFs of ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180064724
 * Callers:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1800521CC (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18006208C (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1800521CC (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800537E0 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x1800652AC (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::flush(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72) )
  {
    std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v4, a1);
    if ( v5 )
    {
      v2 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) == -1 )
        std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL);
    }
    std::basic_ostream<unsigned short>::sentry::~sentry(&v4);
  }
  return a1;
}
