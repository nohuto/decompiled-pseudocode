/*
 * XREFs of ?OnConnectedThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ @ 0x18019F100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootStubImpl::OnConnectedThunk(
        BamoImpl::BamoCompObjectDiagnosticsRootStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
