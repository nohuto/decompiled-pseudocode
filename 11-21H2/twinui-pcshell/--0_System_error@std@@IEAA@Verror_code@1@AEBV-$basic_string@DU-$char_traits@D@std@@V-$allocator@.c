/*
 * XREFs of ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18057E828
 * Callers:
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18057EBCC (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18057EC9C (--0system_error@std@@QEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18034C684 (--0runtime_error@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x18057E3E4 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180581AD8 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 */

_QWORD *__fastcall std::_System_error::_System_error(_QWORD *a1, _OWORD *a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  void *v8; // rcx
  __int128 v9; // xmm0
  _QWORD *result; // rax
  void *v11[2]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-48h] BYREF
  void *v14; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]

  v11[0] = a1;
  v5 = std::string::string(v13, a3);
  *(_OWORD *)v11 = *a2;
  v6 = (_QWORD *)std::_System_error::_Makestr(&v14, v11, v5);
  std::runtime_error::runtime_error((__int64)a1, v6);
  if ( v15 >= 0x10 )
  {
    v8 = v14;
    v12 = v15 + 1;
    v11[0] = v14;
    if ( v15 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v11, &v12, v7);
      v8 = v11[0];
    }
    operator delete(v8);
  }
  v9 = *a2;
  *a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 3) = v9;
  return result;
}
