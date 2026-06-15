/*
 * XREFs of ?GetEndpointId@CAudioStream@@UEAAPEBGXZ @ 0x18004A7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioStream::GetEndpointId(CAudioStream *this)
{
  return (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 72LL))(*((_QWORD *)this + 6) + 8LL);
}
