/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180139E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoImpl::BamoAttachableInputObjectSampleProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoAttachableInputObjectSampleProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2,
        __int64 a3)
{
  LOBYTE(a3) = *((_BYTE *)a2 + 32);
  BamoImpl::BamoAttachableInputObjectSampleProxyImpl::UpdateEnabled(this, 0LL, a3);
}
