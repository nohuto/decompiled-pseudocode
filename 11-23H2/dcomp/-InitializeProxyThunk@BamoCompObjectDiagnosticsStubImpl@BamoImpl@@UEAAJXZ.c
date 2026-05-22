/*
 * XREFs of ?InitializeProxyThunk@BamoCompObjectDiagnosticsStubImpl@BamoImpl@@UEAAJXZ @ 0x18019D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsStubImpl::InitializeProxyThunk(
        BamoImpl::BamoCompObjectDiagnosticsStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 48LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
