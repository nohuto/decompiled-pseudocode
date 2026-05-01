/*
 * XREFs of ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x1803DC8E8
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x1803D4368 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180188350 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_System_error::_Makestr(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD *v6; // rdx
  void *v7; // rcx
  unsigned __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  void *v10; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-10h]

  v10 = a3;
  if ( a3[2] )
    std::string::append(a3, ": ", 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v11, *a2);
  v6 = v11;
  if ( v12 >= 0x10 )
    v6 = (_QWORD *)v11[0];
  std::string::append(a3, v6, v11[2]);
  if ( v12 >= 0x10 )
  {
    v9 = v12 + 1;
    v7 = (void *)v11[0];
    v10 = (void *)v11[0];
    if ( v12 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v10, &v9);
      v7 = v10;
    }
    operator delete(v7);
  }
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
  a3[2] = 0LL;
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return a1;
}
