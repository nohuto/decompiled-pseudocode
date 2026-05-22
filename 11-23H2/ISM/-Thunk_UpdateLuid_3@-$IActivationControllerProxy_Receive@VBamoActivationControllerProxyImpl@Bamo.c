/*
 * XREFs of ?Thunk_UpdateLuid_3@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001AF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IActivationControllerProxy_Receive<BamoImpl::BamoActivationControllerProxyImpl>::Thunk_UpdateLuid_3(
        BamoImpl::BamoActivationControllerProxyImpl *a1,
        const struct _LUID **a2)
{
  return BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid(a1, 1, *a2);
}
