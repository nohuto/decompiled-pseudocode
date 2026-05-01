/*
 * XREFs of ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1804B1D9C
 * Callers:
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1804B1200 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180751BF4 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::sentry::sentry(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // di
  __int64 v6; // rax

  *(_QWORD *)a1 = a2;
  v4 = std::basic_ios<unsigned short>::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  v5 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL))) )
  {
    v6 = std::basic_ios<unsigned short>::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
    if ( !v6 || v6 == a2 )
    {
      v5 = 1;
    }
    else
    {
      std::basic_ostream<unsigned short>::flush(v6);
      v5 = std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)));
    }
  }
  *(_BYTE *)(a1 + 8) = v5;
  return a1;
}
