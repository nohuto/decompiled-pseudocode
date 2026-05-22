/*
 * XREFs of ?OnConnectedThunk@BamoAsyncResult_string_StubImpl@BamoImpl@@UEAAJXZ @ 0x18016F240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_string_StubImpl::OnConnectedThunk(
        BamoImpl::BamoAsyncResult_string_StubImpl *this)
{
  return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*((_QWORD *)this + 3) - 16LL) + 56LL))(
           *((_QWORD *)this + 3) - 16LL,
           (char *)this - 16);
}
