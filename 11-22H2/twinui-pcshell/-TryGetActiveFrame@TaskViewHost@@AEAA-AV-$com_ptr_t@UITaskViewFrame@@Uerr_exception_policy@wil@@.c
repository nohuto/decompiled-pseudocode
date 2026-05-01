/*
 * XREFs of ?TryGetActiveFrame@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180768410
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180767B40 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TaskViewHost::TryGetActiveFrame(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v6; // rcx

  v3 = *(_QWORD **)(a1 + 320);
  v4 = *(_QWORD **)(a1 + 328);
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      *a2 = 0LL;
      return a2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 80LL))(*v3) )
      break;
    ++v3;
  }
  v6 = *v3;
  *a2 = *v3;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
