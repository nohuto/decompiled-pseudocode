/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ @ 0x18040B908
 * Callers:
 *     ??1?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@QEAA@XZ @ 0x1803F9468 (--1-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@QEAA@XZ.c)
 *     ?copy_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXPEAVGamingOverlayExperienceManager@@@Z @ 0x18040AA58 (-copy_ref@-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXPEAVGamingOverlayExperienceMan.c)
 *     ?release_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ @ 0x18040B52C (-release_ref@-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<GamingOverlayExperienceManager>::unconditional_release_ref(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(v2);
}
