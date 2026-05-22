/*
 * XREFs of ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B0A3C
 * Callers:
 *     _BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoInputDelegationInputObjectProxy_::_1_::dtor$3 @ 0x18007F622 (_BamoImpl--ISMBamos_AutoBamos--BamoPeerImpl--Materialize_BamoInputDelegationInputObjectProxy_--_.c)
 *     _Microsoft::BamoImpl::CalloutWrapper_Microsoft::BamoImpl::CalloutWrapperObject_::CalloutWrapper_Microsoft::BamoImpl::CalloutWrapperObject__::_1_::dtor$0 @ 0x18007F640 (_Microsoft--BamoImpl--CalloutWrapper_Microsoft--BamoImpl--CalloutWrapperObject_--CalloutWrapper_.c)
 *     _Microsoft::BamoImpl::BamoProxyImpl::OnZeroReferenceCount_::_1_::dtor$3 @ 0x18007F830 (_Microsoft--BamoImpl--BamoProxyImpl--OnZeroReferenceCount_--_1_--dtor$3.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF6,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
}
