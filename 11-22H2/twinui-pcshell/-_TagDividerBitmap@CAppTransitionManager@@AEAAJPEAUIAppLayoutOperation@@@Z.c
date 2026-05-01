/*
 * XREFs of ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1805993A0
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180598B50 (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18074608C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppTransitionManager::_TagDividerBitmap(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  __int64 (__fastcall *v3)(struct IAppLayoutOperation *, __int64 *); // rdi
  __int64 *v4; // rbx
  int v5; // eax
  unsigned int LastError; // esi
  __int64 v7; // r9
  __int64 v8; // rdx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v9; // rdx
  int v10; // eax
  HDC CompatibleDC; // rdi
  CAppTransitionManager *v12; // rcx
  HBITMAP v13; // rbx
  const char *v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  HWND ShellWindow; // rax
  __int64 v19; // [rsp+38h] [rbp-29h] BYREF
  __int64 v20; // [rsp+40h] [rbp-21h] BYREF
  int v21; // [rsp+48h] [rbp-19h]
  int v22; // [rsp+4Ch] [rbp-15h]
  int v23; // [rsp+50h] [rbp-11h]
  int v24; // [rsp+54h] [rbp-Dh]
  BITMAPINFO pbmi; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v26[4]; // [rsp+88h] [rbp+27h] BYREF
  int v27; // [rsp+8Ch] [rbp+2Bh]
  int v28; // [rsp+94h] [rbp+33h]
  enum DEVICE_SCALE_FACTOR v29; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v19 = 0LL;
  v3 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL);
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  v5 = v3(a2, v4);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 608LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)v7);
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 24LL))(v19, v26);
  v10 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v26, v9);
  v21 = 0;
  v22 = 0;
  v23 = v10;
  v24 = v28 - v27;
  if ( v10 <= 0 || v28 - v27 <= 0 )
    goto LABEL_19;
  CompatibleDC = CreateCompatibleDC(0LL);
  if ( !CompatibleDC )
  {
    LastError = -2147024882;
    v7 = 2147942414LL;
    v8 = 617LL;
    goto LABEL_3;
  }
  pbmi.bmiHeader.biSize = 40;
  pbmi.bmiHeader.biWidth = v23 - v21;
  pbmi.bmiHeader.biHeight = v22 - v24;
  *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
  memset(&pbmi.bmiHeader.biCompression, 0, 28);
  v13 = CreateDIBSection(CompatibleDC, &pbmi, 0, 0LL, 0LL, 0);
  if ( v13 )
  {
    v15 = CAppTransitionManager::_PaintDividerForDWM(v12, CompatibleDC, v13, &pbmi, v29);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 630LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_15;
    }
    ShellWindow = GetShellWindow();
    v15 = DwmpTransitionBitmap(ShellWindow, v13, 22LL);
    LastError = v15;
    if ( v15 < 0 )
    {
      v16 = 633LL;
      goto LABEL_14;
    }
    DeleteObject(v13);
    DeleteDC(CompatibleDC);
LABEL_19:
    LastError = 0;
    goto LABEL_20;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x274,
                (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                v14);
LABEL_15:
  if ( v13 )
    DeleteObject(v13);
  DeleteDC(CompatibleDC);
LABEL_20:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  return LastError;
}
