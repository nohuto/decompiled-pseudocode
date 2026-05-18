/*
 * XREFs of ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1800258C8
 * Callers:
 *     ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180027700 (-_Throw_system_error@std@@YAXW4errc@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x1800275B4 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 */

__int64 __fastcall std::_System_error::_System_error(__int64 a1, __int128 *a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)&v9 = a1;
  v5 = std::string::string(v10, a3);
  v9 = *a2;
  v6 = (_QWORD *)std::_System_error::_Makestr(v11, &v9, v5);
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = &std::runtime_error::`vftable';
  std::string::_Tidy_deallocate((__int64)v11);
  v7 = *a2;
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 16) = v7;
  return result;
}
