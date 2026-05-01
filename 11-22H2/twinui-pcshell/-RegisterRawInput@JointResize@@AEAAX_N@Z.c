/*
 * XREFs of ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1802E6E54
 * Callers:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1802E6B64 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1802E6DC2 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1805E374C (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x1805E3A20 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointResize::RegisterRawInput(JointResize *this, char a2)
{
  int v4; // edx
  void *v5; // rbx
  void (__fastcall *v6)(void *, __int64, __int64, char *); // rdi
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 2),
         (const GUID *const)&SID_ImmersiveRawInputProvider,
         &GUID_c1235996_b084_4af2_8663_28f19352097e,
         &ppvOut) >= 0 )
  {
    v4 = *((_DWORD *)this + 109);
    if ( a2 )
    {
      if ( !v4 )
      {
        v5 = ppvOut;
        v6 = *(void (__fastcall **)(void *, __int64, __int64, char *))(*(_QWORD *)ppvOut + 24LL);
        v7 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown((__int64)this);
        v6(v5, v7, 2LL, (char *)this + 436);
      }
    }
    else if ( v4 )
    {
      v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 32LL))(ppvOut);
      if ( v8 >= 0 )
        *((_DWORD *)this + 109) = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1BE,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
}
