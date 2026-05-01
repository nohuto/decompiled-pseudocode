/*
 * XREFs of ?await_resume@?$notify_awaiter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180692C48
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18022C660 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022C660.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18022D0F0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022D0F0.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

_OWORD *__fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>::await_resume(
        __int64 a1,
        _OWORD *a2)
{
  signed int v4; // ecx
  _QWORD *v5; // rax
  signed int v6; // eax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( winrt_resume_handler )
    winrt_resume_handler();
  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v5 = *(_QWORD **)(a1 + 8);
  *a2 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)*v5 + 64LL))(*v5, a2);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  return a2;
}
