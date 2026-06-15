/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUCO_DEVICE_CATALOG_COOKIE__@@P6AJPEAU1@@Z$1?CoRevokeDeviceCatalog@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CDC
 * Callers:
 *     _GetModuleName_::_1_::dtor$0 @ 0x140065A79 (_GetModuleName_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<CO_DEVICE_CATALOG_COOKIE__ *,long (*)(CO_DEVICE_CATALOG_COOKIE__ *),&long CoRevokeDeviceCatalog(CO_DEVICE_CATALOG_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_DEVICE_CATALOG_COOKIE__ *,CO_DEVICE_CATALOG_COOKIE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<CO_DEVICE_CATALOG_COOKIE__ *,long (*)(CO_DEVICE_CATALOG_COOKIE__ *),&long CoRevokeDeviceCatalog(CO_DEVICE_CATALOG_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_DEVICE_CATALOG_COOKIE__ *,CO_DEVICE_CATALOG_COOKIE__ *,0,std::nullptr_t>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CoRevokeDeviceCatalog();
  return result;
}
