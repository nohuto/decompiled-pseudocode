/*
 * XREFs of ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180581AD8
 * Callers:
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18057E828 (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180350E38 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_System_error::_Makestr(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  unsigned __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  void *v11; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-18h]

  v11 = a3;
  if ( a3[2] )
    std::string::append((void **)a3, ": ", 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v12, *a2);
  v6 = v12;
  if ( v13 >= 0x10 )
    v6 = (_QWORD *)v12[0];
  std::string::append((void **)a3, v6, v12[2]);
  if ( v13 >= 0x10 )
  {
    v10 = v13 + 1;
    v8 = (void *)v12[0];
    v11 = (void *)v12[0];
    if ( v13 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v11, &v10, v7);
      v8 = v11;
    }
    operator delete(v8);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a3 + 1);
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return a1;
}
