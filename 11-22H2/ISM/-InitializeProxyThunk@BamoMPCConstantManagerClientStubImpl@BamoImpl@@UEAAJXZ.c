/*
 * XREFs of ?InitializeProxyThunk@BamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAJXZ @ 0x1800BE8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::InitializeProxyThunk(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 64LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
