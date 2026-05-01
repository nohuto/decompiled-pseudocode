/*
 * XREFs of ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804B2CBC
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802337B0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ??$As@UIFrameElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF534 (--$As@UIFrameElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF648 (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewFrame::_OnWindowPosChanged(HWND *this)
{
  struct tagRECT *v2; // rdx
  HWND v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v8; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  Rect = 0LL;
  GetWindowRect(this[6], &Rect);
  if ( !Geometry::operator==(&Rect, (_DWORD *)this + 638) )
  {
    *v2 = Rect;
    v8 = 0LL;
    GetClientRect(this[6], &v8);
    v3 = this[315];
    if ( v3 )
    {
      (*(void (__fastcall **)(HWND, struct tagRECT *))(*(_QWORD *)v3 + 104LL))(v3, &v8);
      v5 = 0LL;
      Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IFrameElement>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 315,
        &v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    }
    v6 = 0LL;
    if ( this[318] )
    {
      v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 318,
             &v6);
      if ( v4 >= 0 )
        (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v6 + 24LL))(v6, &Rect);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B3,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
          (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
}
