/*
 * XREFs of _lambda_d1ff7bb2acfe3360b50ca45b6d833a46_::operator() @ 0x1801E9B54
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d1ff7bb2acfe3360b50ca45b6d833a46___::Run @ 0x1801EF100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d1ff7bb2acfe3360b50ca45b6d833a46___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B363C (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d1ff7bb2acfe3360b50ca45b6d833a46_::operator()(RTL_SRWLOCK **a1)
{
  int v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)a1, &v6);
  try
  {
    if ( v2 < 0 )
      winrt::throw_hresult((unsigned int)v2);
    if ( v6 )
      UndockedSearchAppExperienceManager::RegisterViewCoordinatorEventsInternal(a1[1]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xC2F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  }
  return 0LL;
}
