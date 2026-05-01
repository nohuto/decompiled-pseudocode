/*
 * XREFs of ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18012C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x18007432C (CApplicationFrameService--_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___.c)
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18012C180 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180144170 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::SynchronizeFrameInformation(
        CApplicationFrameService *this,
        struct IUnknown *a2)
{
  int FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed; // ebx
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationFrame *v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v7);
  FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
                                                            (_QWORD *)this - 5,
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
