/*
 * XREFs of ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1805E3124
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1805E374C (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall JointResize::GetViewForWindow(JointResize *this, HWND a2, struct IApplicationView **a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 48LL))(*((_QWORD *)this + 17)) >= 0 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct IApplicationView **))(**((_QWORD **)this + 18) + 32LL))(
         *((_QWORD *)this + 18),
         a2,
         a3);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v3;
}
