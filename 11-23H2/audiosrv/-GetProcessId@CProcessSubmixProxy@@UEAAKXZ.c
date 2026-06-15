/*
 * XREFs of ?GetProcessId@CProcessSubmixProxy@@UEAAKXZ @ 0x180107FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::GetProcessId(CProcessSubmixProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 40LL))(*((_QWORD *)this + 13));
}
