/*
 * XREFs of sub_180032F84 @ 0x180032F84
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 *     unknown_libname_33 @ 0x180101196 (unknown_libname_33.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA @ 0x180101482 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB.c)
 *     sub_1801014CA @ 0x1801014CA (sub_1801014CA.c)
 *     sub_180101512 @ 0x180101512 (sub_180101512.c)
 *     sub_18010157E @ 0x18010157E (sub_18010157E.c)
 *     sub_1801015EA @ 0x1801015EA (sub_1801015EA.c)
 *     sub_180101632 @ 0x180101632 (sub_180101632.c)
 *     sub_18010168C @ 0x18010168C (sub_18010168C.c)
 *     sub_1801016E6 @ 0x1801016E6 (sub_1801016E6.c)
 *     sub_18010170A @ 0x18010170A (sub_18010170A.c)
 *     sub_180101892 @ 0x180101892 (sub_180101892.c)
 *     sub_18010197C @ 0x18010197C (sub_18010197C.c)
 *     sub_180101A54 @ 0x180101A54 (sub_180101A54.c)
 *     sub_18010390F @ 0x18010390F (sub_18010390F.c)
 *     sub_18010397B @ 0x18010397B (sub_18010397B.c)
 *     sub_180103A0B @ 0x180103A0B (sub_180103A0B.c)
 *     sub_18010431D @ 0x18010431D (sub_18010431D.c)
 *     sub_18010705A @ 0x18010705A (sub_18010705A.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B2394 @ 0x1800B2394 (sub_1800B2394.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032F84(__int64 *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  v2 = a1[1];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v5 = *a1;
        *(_QWORD *)&v8 = v5;
        *((_QWORD *)&v8 + 1) = a1[1];
        if ( v5 )
          sub_1800B2394(v5, a1[2]);
        break;
      }
    }
  }
  result = sub_180010910((__int64)&v8);
  v7 = (volatile signed __int32 *)a1[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return result;
}
