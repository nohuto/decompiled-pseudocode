/*
 * XREFs of ??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@AEAV12@@Z @ 0x18001E3D8
 * Callers:
 *     ??$_Insert_string@DU?$char_traits@D@std@@_K@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@QEBD_K@Z @ 0x18001DFB4 (--$_Insert_string@DU-$char_traits@D@std@@_K@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0.c)
 *     ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0 (--$-6U-$char_traits@D@std@@@std@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@0@AEAV10@PEBD@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::ostream::sentry::sentry(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // di
  __int64 v6; // rax

  *(_QWORD *)a1 = a2;
  v4 = std::ios::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  v5 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL))) )
  {
    v6 = std::ios::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
    if ( !v6 || v6 == a2 )
    {
      v5 = 1;
    }
    else
    {
      std::ostream::flush(v6);
      v5 = std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)));
    }
  }
  *(_BYTE *)(a1 + 8) = v5;
  return a1;
}
