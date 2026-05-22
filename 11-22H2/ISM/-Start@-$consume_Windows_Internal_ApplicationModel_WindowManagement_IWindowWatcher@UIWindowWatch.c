/*
 * XREFs of ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800497C4
 * Callers:
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180049418 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AFBB0 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18011AD50 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800ACD6C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 168LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
