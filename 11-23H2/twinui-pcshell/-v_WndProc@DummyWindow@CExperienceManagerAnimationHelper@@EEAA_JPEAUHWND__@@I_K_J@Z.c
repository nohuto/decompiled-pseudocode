/*
 * XREFs of ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18014DE00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x180748D00 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CExperienceManagerAnimationHelper::DummyWindow::v_WndProc(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 != 810 )
    return DefWindowProcW(a2, a3, a4, lParam);
  v5 = 0LL;
  if ( (_DWORD)lParam == 4 )
  {
    v7[0] = 0LL;
    if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
                (char *)this + 16,
                v7) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 24LL))(v7[0]);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  }
  return v5;
}
