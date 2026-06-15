/*
 * XREFs of ?IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ @ 0x180004720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AudioDeviceMgr::IsPhoneTopologyValid(struct _RTL_CRITICAL_SECTION *this)
{
  BOOL v2; // edi

  EnterCriticalSection(this + 2);
  v2 = this[1].SpinCount != 0;
  LeaveCriticalSection(this + 2);
  return v2;
}
