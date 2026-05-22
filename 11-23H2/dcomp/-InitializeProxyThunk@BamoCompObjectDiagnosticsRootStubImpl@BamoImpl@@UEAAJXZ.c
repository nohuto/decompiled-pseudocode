/*
 * XREFs of ?InitializeProxyThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ @ 0x18019F0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootStubImpl::InitializeProxyThunk(
        BamoImpl::BamoCompObjectDiagnosticsRootStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 48LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
