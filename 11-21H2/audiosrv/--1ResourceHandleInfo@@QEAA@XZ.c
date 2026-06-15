/*
 * XREFs of ??1ResourceHandleInfo@@QEAA@XZ @ 0x18000FC8C
 * Callers:
 *     _CConstraintModelResourceManager::AssignResourceGroup_::_1_::dtor$1 @ 0x18010AD35 (_CConstraintModelResourceManager--AssignResourceGroup_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::DoReacquireSaDeviceResource_::_1_::dtor$3 @ 0x18010B1BB (_CConstraintModelResourceManager--DoReacquireSaDeviceResource_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$2 @ 0x18010CAAE (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::RevokeEndpointResources_::_1_::dtor$1 @ 0x18010DC2B (_CConstraintModelResourceManager--RevokeEndpointResources_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::RevokeEndpointResourcesInGroup_::_1_::dtor$1 @ 0x18010DDF8 (_CConstraintModelResourceManager--RevokeEndpointResourcesInGroup_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::UpdateResourceEndpoint_::_1_::dtor$1 @ 0x18010E2C4 (_CConstraintModelResourceManager--UpdateResourceEndpoint_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::UpdateResourceEndpoint_::_1_::dtor$2 @ 0x18010E2D0 (_CConstraintModelResourceManager--UpdateResourceEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ResourceHandleInfo::~ResourceHandleInfo(ResourceHandleInfo *this)
{
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)this + 155);
}
