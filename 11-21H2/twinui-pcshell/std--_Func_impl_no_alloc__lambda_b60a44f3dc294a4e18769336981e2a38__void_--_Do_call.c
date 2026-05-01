/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Do_call @ 0x1801A8380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180075AA4 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FACF4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Do_call(__int64 a1)
{
  Microsoft::WRL::WeakRef *v1; // rbx
  struct IInspectable *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = (Microsoft::WRL::WeakRef *)(a1 + 16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v3);
  if ( (int)Microsoft::WRL::WeakRef::InternalResolve(v1, &GUID_8ea1a33a_4a62_484e_967c_439093cd6ac3, &v3) >= 0 )
    ExperienceManagerUtils::PostToUIThread(0LL, (struct IUnknown *)v3, (void *)0x401, 3LL);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v3);
}
