/*
 * XREFs of ?AttachInterface@HapticsDevice@@QEAAXV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B8E54
 * Callers:
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x1801B67EC (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800BA6CC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ??$emplace@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801B8404 (--$emplace@AEBV-$com_ptr_t@VHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$com_p.c)
 *     ?UpdateBamoProperties@HapticsDevice@@QEAAXXZ @ 0x1801BB4FC (-UpdateBamoProperties@HapticsDevice@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticsDevice::AttachInterface(HapticsDevice *this, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a2;
  if ( *(_BYTE *)(*a2 + 264) )
  {
    v5 = (__int64 *)*((_QWORD *)this + 10);
    if ( v5 == *((__int64 **)this + 11) )
    {
      std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
        (__int64 *)this + 9,
        (__int64)v5,
        a2);
    }
    else
    {
      *v5 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 10) += 8LL;
    }
  }
  else
  {
    std::vector<wil::com_ptr_t<HapticInterface,wil::err_exception_policy>>::emplace<wil::com_ptr_t<HapticInterface,wil::err_exception_policy> const &>(
      (__int64 *)this + 9,
      &v7,
      *((__int64 **)this + 9),
      a2);
  }
  HapticsDevice::UpdateBamoProperties(this);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
