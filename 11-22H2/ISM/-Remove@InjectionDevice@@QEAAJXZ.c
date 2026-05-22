/*
 * XREFs of ?Remove@InjectionDevice@@QEAAJXZ @ 0x1801A5588
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1801A2C48 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x1801A2DF0 (--1InjectionDevice@@QEAA@XZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801A6C84 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x1801BFCBC (--1MouseProcessor@@MEAA@XZ.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1801C0438 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InjectionDevice::Remove(InjectionDevice *this)
{
  __int64 result; // rax

  if ( !*((_BYTE *)this + 1556) )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 8);
  *((_BYTE *)this + 1556) = (int)result < 0;
  return result;
}
