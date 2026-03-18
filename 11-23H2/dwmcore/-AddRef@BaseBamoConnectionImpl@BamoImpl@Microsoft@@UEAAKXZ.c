/*
 * XREFs of ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801B8D10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800D6C98 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  Microsoft::BamoImpl::BamoImplObject **v2; // rcx

  v2 = (Microsoft::BamoImpl::BamoImplObject **)((char *)this + 104);
  if ( !*v2 )
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      v2,
      *((volatile signed __int32 **)this + 12));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
