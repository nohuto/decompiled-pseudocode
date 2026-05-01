/*
 * XREFs of ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180529270
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::GetViewForWindow(JointResize *this, HWND a2, struct IApplicationView **a3)
{
  __int64 result; // rax

  *a3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17)) >= 0 )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IApplicationView **))(**((_QWORD **)this + 18) + 40LL))(
             *((_QWORD *)this + 18),
             a2,
             a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
