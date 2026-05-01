/*
 * XREFs of ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1804E173C
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DF460 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804DFDBC (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagPlaceVisual(CAppTransitionManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v9; // edi
  int v10; // eax
  HWND v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-21h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-19h] BYREF
  RECT rc2; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp+7h] BYREF
  RECT rc1; // [rsp+80h] [rbp+17h] BYREF
  RECT rcSrc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 26);
  if ( !v2 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v17);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21C,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v6 = 0;
  if ( !v17 )
    return 0LL;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 26);
    v16 = 0LL;
    v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
    if ( v8(v7, v6, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v16) < 0 )
      goto LABEL_16;
    v9 = 218103808;
    if ( *((_DWORD *)this + 75) == 68 )
      v9 = 218365952;
    v10 = (*(__int64 (**)(void))(*(_QWORD *)v16 + 32LL))() - 7;
    if ( !v10 )
      break;
    if ( v10 == 1 )
    {
      v11 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
      GetWindowRect(v11, &Rect);
      OffsetRect(&Rect, -Rect.left, -Rect.top);
      (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v16 + 24LL))(v16, 1LL, &rc1);
      (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v16 + 24LL))(v16, 0LL, &rc2);
      if ( !EqualRect(&rc1, &rc2) )
      {
        MatchRectAspectRatio(&Rect, &rc2);
        v12 = MulDiv(rc2.left - rc1.left, Rect.right - Rect.left, rc2.right - rc2.left);
        OffsetRect(&Rect, v12, 0);
      }
      v13 = DwmpTransitionWindowWithRects(v11, v9 | 1u, &Rect, &rc2, 0LL, 0LL, (char *)this + 264);
      v4 = v13;
      if ( v13 < 0 )
      {
        v14 = 587LL;
        goto LABEL_19;
      }
    }
LABEL_16:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
    if ( ++v6 >= v17 )
      return 0LL;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 64LL))(v16);
  (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v16 + 24LL))(v16, 1LL, &rcSrc);
  CopyRect(&rcDst, &rcSrc);
  OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
  v13 = DwmpTransitionWindowWithRects(v15, v9 | 0x1Eu, &rcDst, &rcSrc, 0LL, 0LL, 0LL);
  v4 = v13;
  if ( v13 >= 0 )
    goto LABEL_16;
  v14 = 606LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  return v4;
}
