/*
 * XREFs of ??$emplace@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C298
 * Callers:
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x18018A63C (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180091710 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ?attach@?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@@@Z @ 0x1801893A8 (-attach@-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVHapticInterface@.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAAEAV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x18018BFF4 (--$_Emplace_back_with_unused_capacity@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::emplace<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
        __int64 *a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v7; // r15
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  v7 = (__int64 *)a1[1];
  if ( v7 == (__int64 *)a1[2] )
  {
    *a2 = std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
            a1,
            (__int64)a3,
            a4);
  }
  else
  {
    if ( a3 == v7 )
    {
      std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::_Emplace_back_with_unused_capacity<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
        (__int64)a1,
        a4);
    }
    else
    {
      v8 = *a4;
      v15 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = v7 - 1;
      v10 = *(v7 - 1);
      *(v7 - 1) = 0LL;
      *v7 = v10;
      a1[1] += 8LL;
      while ( v9 != a3 )
      {
        v11 = v9--;
        v12 = *v9;
        *v9 = 0LL;
        wil::com_ptr_t<HapticInterface,wil::err_exception_policy>::attach(v11, v12);
      }
      v13 = v15;
      v15 = 0LL;
      wil::com_ptr_t<HapticInterface,wil::err_exception_policy>::attach(a3, v13);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v15);
    }
    *a2 = a3;
  }
  return a2;
}
