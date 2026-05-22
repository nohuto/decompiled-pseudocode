/*
 * XREFs of ?InitializeProxyThunk@BamoMPCManagerClientStubImpl@BamoImpl@@UEAAJXZ @ 0x18015F770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientStubImpl::InitializeProxyThunk(
        BamoImpl::BamoMPCManagerClientStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 48LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
