/*
 * XREFs of ?GetFrameForHwnd@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1805FE574
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1805FE770 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 *     ?IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x1805FEA50 (-IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TaskViewHost::GetFrameForHwnd(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v8; // rcx

  v5 = *(_QWORD **)(a1 + 304);
  v6 = *(_QWORD **)(a1 + 312);
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      *a2 = 0LL;
      return a2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(*v5, a3) )
      break;
    ++v5;
  }
  v8 = *v5;
  *a2 = *v5;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return a2;
}
