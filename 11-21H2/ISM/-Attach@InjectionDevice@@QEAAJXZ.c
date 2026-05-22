/*
 * XREFs of ?Attach@InjectionDevice@@QEAAJXZ @ 0x1801763F8
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017705C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801795E0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180179AC8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180194548 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InjectionDevice::Attach(InjectionDevice *this)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 1556) )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)this + 40LL))(
             *(_QWORD *)this,
             (char *)this + 8,
             0LL);
  *((_BYTE *)this + 1556) = (int)result >= 0;
  return result;
}
