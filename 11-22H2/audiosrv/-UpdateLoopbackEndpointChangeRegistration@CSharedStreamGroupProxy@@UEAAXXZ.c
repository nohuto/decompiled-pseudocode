/*
 * XREFs of ?UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18010A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x18000CAF8 (-IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18010973C (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 */

void __fastcall CSharedStreamGroupProxy::UpdateLoopbackEndpointChangeRegistration(CSharedStreamGroupProxy *this)
{
  if ( *((_BYTE *)this + 352) && !IsValidAECLoopbackSelectionMode(*((const unsigned __int16 **)this + 36)) )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 43);
    *((_BYTE *)this + 352) = 0;
  }
  if ( IsValidAECLoopbackSelectionMode(*((const unsigned __int16 **)this + 36)) )
  {
    if ( !*((_BYTE *)this + 352) )
      CSharedStreamGroupProxy::RegisterForLoopbackEndpointChangeNotifications((CSharedStreamGroupProxy *)((char *)this - 8));
  }
}
