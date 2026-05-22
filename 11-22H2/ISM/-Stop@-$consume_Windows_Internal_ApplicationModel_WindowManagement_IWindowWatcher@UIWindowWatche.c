/*
 * XREFs of ?Stop@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AFD7C
 * Callers:
 *     ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AFDB8 (-StopWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 *     ?StopWindowWatcher@MPCTarget@@AEAAXXZ @ 0x18011BD5C (-StopWindowWatcher@MPCTarget@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800ACD6C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stop(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 176LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
