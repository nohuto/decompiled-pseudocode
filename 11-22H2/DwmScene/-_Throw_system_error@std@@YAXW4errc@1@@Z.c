/*
 * XREFs of ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180027700
 * Callers:
 *     ?lock@?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ @ 0x1800279C0 (-lock@-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ.c)
 *     ?unlock@?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ @ 0x180027A80 (-unlock@-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Raise@exception@stdext@@QEBAXXZ @ 0x180011A5C (-_Raise@exception@stdext@@QEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1800258C8 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4errc@1@@Z @ 0x180027A04 (-make_error_code@std@@YA-AVerror_code@1@W4errc@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn std::_Throw_system_error(unsigned int a1)
{
  __int128 v1; // xmm6
  __int128 v2; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v3[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v4[16]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_OWORD *)std::make_error_code(v4, a1);
  std::string::string(v5, (__int64)&word_180106082);
  v2 = v1;
  std::_System_error::_System_error((__int64)v3, &v2, (__int64)v5);
  std::string::_Tidy_deallocate((__int64)v5);
  v3[0] = &std::system_error::`vftable';
  stdext::exception::_Raise((stdext::exception *)v3);
}
