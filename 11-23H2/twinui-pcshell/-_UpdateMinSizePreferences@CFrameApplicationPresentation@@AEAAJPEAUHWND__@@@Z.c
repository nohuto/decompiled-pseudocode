/*
 * XREFs of ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x180028BF8
 * Callers:
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x180026D3C (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d___::Run @ 0x18006C5A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d___--Run.c)
 * Callees:
 *     ?_ShouldUpdateForHwnd@CFrameApplicationPresentation@@AEAA_NPEAUHWND__@@@Z @ 0x180028D88 (-_ShouldUpdateForHwnd@CFrameApplicationPresentation@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_UpdateMinSizePreferences(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  unsigned int PropW; // ebx
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int *v7; // rax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+44h] [rbp+1Ch]

  if ( *((_DWORD *)this + 14) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F3,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v11);
    return 2147947423LL;
  }
  else
  {
    if ( CFrameApplicationPresentation::_ShouldUpdateForHwnd(this, a2) )
    {
      PropW = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.X");
      v5 = (unsigned int)GetPropW(a2, L"Windows.ApplicationView.PreferredMinSize.Y");
      v14 = PropW;
      v15 = v5;
      if ( !PropW || (v6 = v5 == 0, v7 = &v14, v6) )
        v7 = (unsigned int *)((char *)this + 160);
      *((_QWORD *)this + 19) = *(_QWORD *)v7;
      v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 15) + 80LL))(
             *((_QWORD *)this + 15),
             (char *)this + 152);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7FF,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v8,
          v11);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)this + 224LL))(this);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&ppvOut);
      if ( IUnknown_QueryService(
             (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
             &ppvOut) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 64LL))(
               ppvOut,
               *((_QWORD *)this + 76),
               *((_QWORD *)this + 19));
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x80C,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v9,
            v11);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&ppvOut);
    }
    return 0LL;
  }
}
