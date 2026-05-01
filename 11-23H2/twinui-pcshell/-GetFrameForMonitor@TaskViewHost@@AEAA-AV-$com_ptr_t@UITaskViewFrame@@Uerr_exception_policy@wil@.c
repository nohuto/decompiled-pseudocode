/*
 * XREFs of ?GetFrameForMonitor@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@@Z @ 0x1807679DC
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180767B40 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall TaskViewHost::GetFrameForMonitor(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v8; // rcx

  v5 = *(_QWORD **)(a1 + 320);
  v6 = *(_QWORD **)(a1 + 328);
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      *a2 = 0LL;
      return a2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 24LL))(*v5, a3) )
      break;
    ++v5;
  }
  v8 = *v5;
  *a2 = *v5;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return a2;
}
