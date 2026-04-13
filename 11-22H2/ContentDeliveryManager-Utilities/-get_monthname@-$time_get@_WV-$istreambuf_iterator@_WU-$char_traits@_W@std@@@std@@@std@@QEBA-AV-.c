/*
 * XREFs of ?get_monthname@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800D1EEC
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800D0E70 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 *     ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800D1330 (-do_get_date@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_monthname(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int128 v9; // xmm1
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = *a1;
  v9 = *a3;
  v11 = *a4;
  v12 = v9;
  (*(void (__fastcall **)(__int64 *, __int64, __int128 *, __int128 *, __int64, __int64, __int64))(v7 + 56))(
    a1,
    a2,
    &v12,
    &v11,
    a5,
    a6,
    a7);
  return a2;
}
