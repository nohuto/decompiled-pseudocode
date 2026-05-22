/*
 * XREFs of ?Thunk_UpdateHWND_0@?$IActivationListenerInputObjectProxy_Receive@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180054C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IActivationListenerInputObjectProxy_Receive<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::Thunk_UpdateHWND_0(
        BamoImpl::BamoActivationListenerInputObjectProxyImpl *a1,
        __int64 **a2)
{
  __int64 *v2; // rax

  v2 = *a2;
  LOBYTE(a2) = 1;
  return BamoImpl::BamoActivationListenerInputObjectProxyImpl::UpdateHWND(a1, (__int64)a2, *v2);
}
