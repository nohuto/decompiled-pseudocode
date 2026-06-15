/*
 * XREFs of ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800FEB40
 * Callers:
 *     _CConstraintModelResourceManager::DoReacquireSaDeviceResource_::_1_::dtor$3 @ 0x18007945F (_CConstraintModelResourceManager--DoReacquireSaDeviceResource_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::AssignResourceGroup_::_1_::dtor$1 @ 0x1800FFB4A (_CConstraintModelResourceManager--AssignResourceGroup_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$2 @ 0x180101372 (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::RevokeEndpointResources_::_1_::dtor$1 @ 0x18010203B (_CConstraintModelResourceManager--RevokeEndpointResources_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::RevokeEndpointResourcesInGroup_::_1_::dtor$1 @ 0x180102208 (_CConstraintModelResourceManager--RevokeEndpointResourcesInGroup_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::UpdateResourceEndpoint_::_1_::dtor$1 @ 0x1801026D4 (_CConstraintModelResourceManager--UpdateResourceEndpoint_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::UpdateResourceEndpoint_::_1_::dtor$2 @ 0x1801026E0 (_CConstraintModelResourceManager--UpdateResourceEndpoint_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ResourceHandleInfo::~ResourceHandleInfo(ResourceHandleInfo *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 155);
}
