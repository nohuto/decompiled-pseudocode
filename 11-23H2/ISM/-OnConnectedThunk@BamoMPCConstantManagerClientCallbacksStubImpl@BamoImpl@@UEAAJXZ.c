/*
 * XREFs of ?OnConnectedThunk@BamoMPCConstantManagerClientCallbacksStubImpl@BamoImpl@@UEAAJXZ @ 0x18018FCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksStubImpl::OnConnectedThunk(
        BamoImpl::BamoMPCConstantManagerClientCallbacksStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
