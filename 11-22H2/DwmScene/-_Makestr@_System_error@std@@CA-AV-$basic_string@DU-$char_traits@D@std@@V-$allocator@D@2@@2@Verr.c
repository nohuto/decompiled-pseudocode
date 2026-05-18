/*
 * XREFs of ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x1800275B4
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1800258C8 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_System_error::_Makestr(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  void **v6; // rcx
  _QWORD *v7; // rdx
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( !std::string::empty(a3) )
    std::string::append(v6, ": ", 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v9, *a2);
  v7 = v9;
  if ( v9[3] >= 0x10uLL )
    v7 = (_QWORD *)v9[0];
  std::string::append((void **)a3, v7, v9[2]);
  std::string::_Tidy_deallocate((__int64)v9);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  std::string::_Tidy_deallocate(a3);
  return a1;
}
