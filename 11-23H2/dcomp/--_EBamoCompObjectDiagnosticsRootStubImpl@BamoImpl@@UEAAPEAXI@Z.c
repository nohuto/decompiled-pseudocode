/*
 * XREFs of ??_EBamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18019CC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016A9E8 (--1-$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

BamoImpl::BamoCompObjectDiagnosticsRootStubImpl *__fastcall BamoImpl::BamoCompObjectDiagnosticsRootStubImpl::`vector deleting destructor'(
        BamoImpl::BamoCompObjectDiagnosticsRootStubImpl *this,
        char a2)
{
  wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
