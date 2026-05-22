/*
 * XREFs of ?OnConnectedThunk@BamoCompObjectDiagnosticsStubImpl@BamoImpl@@UEAAJXZ @ 0x18019DAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsStubImpl::OnConnectedThunk(
        BamoImpl::BamoCompObjectDiagnosticsStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
