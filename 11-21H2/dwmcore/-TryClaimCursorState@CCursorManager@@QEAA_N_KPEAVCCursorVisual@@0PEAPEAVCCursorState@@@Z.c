/*
 * XREFs of ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x180267874
 * Callers:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x180211CE8 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 * Callees:
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18002F914 (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z @ 0x18026B494 (-TrySetVisual@CCursorState@@QEAA_NPEAVCCursorVisual@@_K@Z.c)
 */

bool __fastcall CCursorManager::TryClaimCursorState(
        CCursorManager *this,
        unsigned __int64 a2,
        struct CCursorVisual *a3,
        unsigned __int64 a4,
        struct CCursorState **a5)
{
  CCursorManager *v8; // rcx
  int v9; // eax
  struct CCursorState *v10; // rbx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-18h] BYREF
  struct CCursorState *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v12 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
  v9 = CCursorManager::EnsureCursorState(v8, a2, &v13);
  v10 = v13;
  if ( v9 >= 0 && !CCursorState::TrySetVisual(v13, a3, a4) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    v10 = v13;
  }
  *a5 = v10;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v10 != 0LL;
}
