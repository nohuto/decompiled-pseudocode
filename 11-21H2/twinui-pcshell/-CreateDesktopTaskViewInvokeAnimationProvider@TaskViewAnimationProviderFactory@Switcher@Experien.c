/*
 * XREFs of ?CreateDesktopTaskViewInvokeAnimationProvider@TaskViewAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9DF0
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18017F9B0 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?CreateDesktopTaskViewInvokeAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x1801E9ED8 (-CreateDesktopTaskViewInvokeAnimationProvider@__ITaskViewAnimationProviderFactoryStatics@Switche.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewAnimationProviderFactory::CreateDesktopTaskViewInvokeAnimationProvider(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h]

  v11[0] = -2090303465;
  v11[1] = 954826589;
  v11[2] = -1369022787;
  v11[3] = -287052126;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewAnimationProviderFactory",
                                (struct Platform::Guid *)v11,
                                (void **)&v13,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v12 = *a2;
  v7 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewAnimationProviderFactoryStatics::CreateDesktopTaskViewInvokeAnimationProvider(
         v13,
         a1,
         &v12);
  v14 = v7;
  v8 = __abi_winrt_ptr_ctor(v7);
  v14 = v8;
  __abi_winrt_ptr_dtor(v7);
  v9 = __abi_winrt_ptr_ctor(v8);
  __abi_winrt_ptr_dtor(v8);
  __abi_winrt_ptr_dtor(v13);
  return v9;
}
