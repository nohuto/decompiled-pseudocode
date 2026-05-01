/*
 * XREFs of ?await_resume@?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18062CB38
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802194D0.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_resume(
        __int64 a1)
{
  signed int v2; // ecx
  _QWORD *v3; // rax
  signed int v4; // eax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  if ( winrt_resume_handler )
    winrt_resume_handler();
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = *(_QWORD **)(a1 + 8);
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v3 + 64LL))(*v3, &v7);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return v7;
}
