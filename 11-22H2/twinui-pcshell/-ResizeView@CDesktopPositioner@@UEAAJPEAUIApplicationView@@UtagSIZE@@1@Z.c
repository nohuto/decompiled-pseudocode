/*
 * XREFs of ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1805B4610
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180125850 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802A69B0 (-ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802A69D0 (-ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180075324 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180076E48 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::ResizeView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  __int64 v7; // rbx
  unsigned int LastError; // esi
  __int64 (__fastcall *v9)(struct IApplicationView *, GUID *, __int64 *); // rsi
  int fixed; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // r15
  CDesktopPositioner *v14; // rcx
  int FullPositionSnapshot; // eax
  __int64 v16; // rdx
  const char *v17; // r9
  __int64 v19; // [rsp+20h] [rbp-49h]
  struct IOcclusionBasedApplicationViewPosition *v20; // [rsp+30h] [rbp-39h] BYREF
  __int64 v21; // [rsp+38h] [rbp-31h] BYREF
  int v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  struct tagSIZE v24; // [rsp+50h] [rbp-19h]
  RECT rcSrc; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v27; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  cx = a3.cx;
  v24 = a3;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v23);
  v7 = v23;
  if ( v23 )
  {
    v21 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    fixed = v9(a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v21);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v11 = 364LL;
LABEL_27:
      v12 = (unsigned int)fixed;
      goto LABEL_28;
    }
    fixed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 32LL))(v21, &v22);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v11 = 368LL;
      goto LABEL_27;
    }
    if ( (unsigned int)(v22 - 2) > 1 )
    {
      LastError = -2147019873;
      v12 = 2147947423LL;
      v11 = 371LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v12);
      goto LABEL_30;
    }
    v13 = 0;
    if ( v22 == 2 )
    {
      fixed = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v21 + 24LL))(v21, &rcSrc);
      LastError = fixed;
      if ( fixed < 0 )
      {
        v11 = 377LL;
        goto LABEL_27;
      }
      goto LABEL_19;
    }
    if ( v22 == 3 )
    {
      v13 = 1;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
      FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v14, a2, &v20);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v16 = 386LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)FullPositionSnapshot);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
        goto LABEL_30;
      }
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v20 + 56LL))(
                               v20,
                               &rcSrc);
      LastError = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v16 = 387LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
    }
LABEL_19:
    if ( CopyRect(&rcDst, &rcSrc) )
    {
      rcSrc.right = cx + rcSrc.left;
      rcSrc.bottom = v24.cy + rcSrc.top;
      if ( v13 || !EqualRect(&rcDst, &rcSrc) )
      {
        fixed = CDesktopPositioner::_FixRectForWorkArea((__int64)this - 120, 3, &rcSrc.left, 0LL, v19, &v27);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v11 = 402LL;
          goto LABEL_27;
        }
        *(struct tagRECT *)(v7 + 96) = v27;
        *(_BYTE *)(v7 + 92) = 1;
        fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v7);
        LastError = fixed;
        if ( fixed < 0 )
        {
          v11 = 408LL;
          goto LABEL_27;
        }
      }
      LastError = 0;
      goto LABEL_30;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x189,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  v17);
LABEL_30:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    goto LABEL_31;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x167,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x8007000ELL);
LABEL_31:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v23);
  return LastError;
}
