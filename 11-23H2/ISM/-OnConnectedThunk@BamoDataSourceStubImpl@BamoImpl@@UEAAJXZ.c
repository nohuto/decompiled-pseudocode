/*
 * XREFs of ?OnConnectedThunk@BamoDataSourceStubImpl@BamoImpl@@UEAAJXZ @ 0x180110D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::OnConnectedThunk(BamoImpl::BamoDataSourceStubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
