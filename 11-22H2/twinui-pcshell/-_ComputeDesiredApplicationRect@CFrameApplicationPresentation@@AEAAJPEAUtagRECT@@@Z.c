/*
 * XREFs of ?_ComputeDesiredApplicationRect@CFrameApplicationPresentation@@AEAAJPEAUtagRECT@@@Z @ 0x180022858
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800225F0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x1803CA31C (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeDesiredApplicationRect(HWND *this, LPRECT lprc)
{
  int Error; // edi
  struct tagRECT v6; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v7; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v9[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  SetRectEmpty(lprc);
  if ( *((_DWORD *)this + 14) != 2 )
  {
    if ( GetClientRect(this[16], &Rect) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        return (unsigned int)Error;
    }
    if ( *((_BYTE *)this + 53) )
    {
      v6 = Rect;
      Rect = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(
                (CFrameApplicationPresentation *)this,
                &v7,
                &v6);
    }
    (*(void (__fastcall **)(HWND, _DWORD *))(*(_QWORD *)this[15] + 120LL))(this[15], v9);
    Rect.left += v9[0];
    Rect.top += v9[1];
    Rect.right -= v9[2];
    Rect.bottom -= v9[3];
    *lprc = Rect;
    return (unsigned int)Error;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43B,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
    (const char *)0x8007139FLL,
    v6.left);
  return 2147947423LL;
}
