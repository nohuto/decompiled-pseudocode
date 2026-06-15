/*
 * XREFs of ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x180042F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::GetPhoneTopology(struct _RTL_CRITICAL_SECTION *this, struct IPhoneTopology **a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***SpinCount)(_QWORD, GUID *, struct IPhoneTopology **); // rcx

  EnterCriticalSection(this + 2);
  v4 = 0;
  if ( a2
    && (*a2 = 0LL,
        (SpinCount = (void (__fastcall ***)(_QWORD, GUID *, struct IPhoneTopology **))this[1].SpinCount) != 0LL) )
  {
    (**SpinCount)(SpinCount, &GUID_242cf56d_42d8_4b1f_ae71_9dc02d4a7d37, a2);
  }
  else
  {
    v4 = -2147467261;
  }
  LeaveCriticalSection(this + 2);
  return v4;
}
