/*
 * XREFs of ?InitializeProxyThunk@BamoMPCConstantManagerClientCallbacksStubImpl@BamoImpl@@UEAAJXZ @ 0x180170450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksStubImpl::InitializeProxyThunk(
        BamoImpl::BamoMPCConstantManagerClientCallbacksStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 48LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
