/*
 * XREFs of ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4368
 * Callers:
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x1803D46C8 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4798 (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x1802D21FE (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4648 (--0runtime_error@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@@Z.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x1803DC8E8 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 */

_QWORD *__fastcall std::_System_error::_System_error(_QWORD *a1, _OWORD *a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  void *v7; // rcx
  __int128 v8; // xmm0
  _QWORD *result; // rax
  void *v10[2]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-48h] BYREF
  void *v13; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp-10h]

  v10[0] = a1;
  v5 = std::string::string(v12, a3);
  *(_OWORD *)v10 = *a2;
  v6 = std::_System_error::_Makestr(&v13, v10, v5);
  std::runtime_error::runtime_error(a1, v6);
  if ( v14 >= 0x10 )
  {
    v7 = v13;
    v11 = v14 + 1;
    v10[0] = v13;
    if ( v14 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v10, &v11);
      v7 = v10[0];
    }
    operator delete(v7);
  }
  v8 = *a2;
  *a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 3) = v8;
  return result;
}
