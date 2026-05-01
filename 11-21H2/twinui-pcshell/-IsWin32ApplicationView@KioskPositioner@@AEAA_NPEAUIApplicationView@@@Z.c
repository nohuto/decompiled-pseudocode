/*
 * XREFs of ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F1150
 * Callers:
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804F0C50 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1340 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804F14D0 (-OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRE.c)
 *     ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804F15C0 (-OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x180032720 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 */

bool __fastcall KioskPositioner::IsWin32ApplicationView(KioskPositioner *this, struct IApplicationView *a2)
{
  bool v2; // bl
  KioskPositioner *v4; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  v5 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v4 = this;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v4, &v5);
  v2 = v4 != 0LL;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v4);
  return v2;
}
