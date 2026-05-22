/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180151490
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800720B4 (-UpdateGamepadInterceptionEnabled@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 */

void __fastcall BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputDelegationInputObjectProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  __int64 v5; // r8

  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateGamepadInterceptionEnabled(this, 0LL, a3);
  LOBYTE(v5) = *((_BYTE *)a2 + 33);
  BamoImpl::BamoInputDelegationInputObjectProxyImpl::UpdateGamepadKeyRoutingEnabled(this, 0LL, v5);
}
