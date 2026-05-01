/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180017B0C
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180017940 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180017ADC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180432ED4 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x180496874 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804F0614 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z @ 0x180552180 (-Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  unsigned int *v1; // rbp
  unsigned int *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, unsigned int *); // rbx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1 + 2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  v3 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v3[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v5 = *(_QWORD *)v3;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, unsigned int *))(**(_QWORD **)v3 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v1);
      result = v6(v5, *a1, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v1);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (unsigned int)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result,
        v7);
      ++*a1;
      v3 = (unsigned int *)*((_QWORD *)a1 + 2);
      result = *a1;
    }
    while ( (unsigned int)result < v3[2] );
  }
  return result;
}
