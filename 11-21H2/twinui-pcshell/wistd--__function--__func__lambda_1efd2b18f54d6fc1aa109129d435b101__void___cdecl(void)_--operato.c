/*
 * XREFs of wistd::__function::__func__lambda_1efd2b18f54d6fc1aa109129d435b101__void___cdecl(void)_::operator() @ 0x180315BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180152840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180152840.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___ @ 0x180315844 (Windows--Internal--ComTaskPool--QueueTask__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x180315A44 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 */

void __fastcall wistd::__function::__func__lambda_1efd2b18f54d6fc1aa109129d435b101__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r11
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  volatile int *v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile int *v9; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    &v9,
    *(volatile int **)(a1 + 8));
  *(_QWORD *)v6 = *(_QWORD *)(v1 + 8);
  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    &v7,
    v9);
  v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_3a4a7428c5f3296bcd04ed9c75e0e556___(
         v4,
         v3,
         *(_DWORD *)(*(_QWORD *)(v2 + 8) + 204LL),
         v6);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release((__int64)v7);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15A,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v5);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release((__int64)v9);
}
