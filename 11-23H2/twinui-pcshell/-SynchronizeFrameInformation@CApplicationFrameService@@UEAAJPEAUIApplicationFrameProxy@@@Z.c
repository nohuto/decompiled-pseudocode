/*
 * XREFs of ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180042540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x180042604 (CApplicationFrameService--_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___.c)
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800426D0 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::SynchronizeFrameInformation(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  int FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed; // ebx
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationFrame *v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v7);
  FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
                                                            (char *)this - 40,
                                                            a2,
                                                            &v7);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed >= 0 )
  {
    v8 = 0LL;
    v5 = v7;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v5 + 112));
    v8 = *(struct IApplicationFrame **)(v5 + 112);
    FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::OnChromeOffsetsChanged(
                                                              (CApplicationFrameService *)((char *)this + 8),
                                                              v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v7);
  return (unsigned int)FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed;
}
