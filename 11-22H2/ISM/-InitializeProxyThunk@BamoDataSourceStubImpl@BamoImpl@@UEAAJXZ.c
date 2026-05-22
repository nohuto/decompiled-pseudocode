/*
 * XREFs of ?InitializeProxyThunk@BamoDataSourceStubImpl@BamoImpl@@UEAAJXZ @ 0x18011EA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::InitializeProxyThunk(BamoImpl::BamoDataSourceStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 48LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
