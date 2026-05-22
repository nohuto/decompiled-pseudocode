/*
 * XREFs of ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800873C4
 * Callers:
 *     _Microsoft::BamoImpl::CalloutWrapper_Microsoft::BamoImpl::CalloutWrapperObject_::CalloutWrapper_Microsoft::BamoImpl::CalloutWrapperObject__::_1_::dtor$0 @ 0x180054940 (_Microsoft--BamoImpl--CalloutWrapper_Microsoft--BamoImpl--CalloutWrapperObject_--CalloutWrapper_.c)
 *     _Microsoft::BamoImpl::ConditionalCalloutWrapper_Microsoft::BamoImpl::CalloutWrapperObject_::ConditionalCalloutWrapper_Microsoft::BamoImpl::CalloutWrapperObject__::_1_::dtor$0 @ 0x18008713C (_Microsoft--BamoImpl--ConditionalCalloutWrapper_Microsoft--BamoImpl--CalloutWrapperObject_--Cond.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
      246LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
}
