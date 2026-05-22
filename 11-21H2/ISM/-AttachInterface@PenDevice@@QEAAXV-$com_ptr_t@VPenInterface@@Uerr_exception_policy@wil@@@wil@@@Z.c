/*
 * XREFs of ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180189C64
 * Callers:
 *     ?EnsureInterfaceAttached@PenDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x180186938 (-EnsureInterfaceAttached@PenDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_polic.c)
 * Callees:
 *     ??0?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z @ 0x180185AB8 (--0-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenInterface@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180189574 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x18018A63C (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDevice::AttachInterface(__int64 **this, __int64 *a2)
{
  if ( this[11] == this[12] )
    std::vector<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenInterface,wil::err_exception_policy> const &>(
      this + 10,
      this[11],
      a2);
  else
    wil::com_ptr_t<PenInterface,wil::err_exception_policy>::com_ptr_t<PenInterface,wil::err_exception_policy>(
      this[11]++,
      *a2);
  PenDevice::UpdateBamoProperties((PenDevice *)this);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
