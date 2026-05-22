/*
 * XREFs of ?Thunk_UpdateContainerId_47@?$IContainerInfoInputObjectProxy_Receive@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801186B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IContainerInfoInputObjectProxy_Receive<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::Thunk_UpdateContainerId_47(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *a1,
        const struct CONTAINER_ID **a2)
{
  return BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerId(a1, 1, *a2);
}
