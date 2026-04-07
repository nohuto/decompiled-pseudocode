/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18000AFD0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x18000B154 (-ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18000B3F8 (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180069ED6 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // ebx
  CDesktopManager *v5; // rcx
  int v6; // r13d
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int32 v9; // eax
  __int32 v10; // edx
  int v11; // r15d
  _QWORD *v12; // rax
  CVisual *v13; // rdi
  CWindowData *v15; // r14
  CWindowData *i; // rdi
  CTopLevelWindow *v17; // rcx
  char v18; // al
  int v19; // eax
  int v20; // edi
  PVOID RestartKey; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __m128i v24; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  RestartKey = 0LL;
  if ( CDesktopManager::CheckAnyPolicy(2u) )
  {
    v4 = -2147024846;
  }
  else
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v23 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 460);
    v24 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 476);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8)) == 2;
    *(_QWORD *)&v23 = *(_QWORD *)((char *)a2 + 4);
    v7 = *((_DWORD *)a2 + 3);
    if ( v7 > 0x78 )
      v7 = 120;
    DWORD2(v23) = v7;
    v8 = *((_DWORD *)a2 + 4);
    if ( v8 > 0x78 )
      v8 = 120;
    HIDWORD(v23) = v8;
    v9 = *((_DWORD *)a2 + 5);
    if ( v9 > 0x78 )
      v9 = 120;
    v24.m128i_i32[0] = v9;
    v24.m128i_i32[1] = *((_DWORD *)a2 + 6);
    v10 = *((_DWORD *)a2 + 7);
    v24.m128i_i32[2] = v10;
    if ( *((_DWORD *)a2 + 8) != 2 )
      *((_BYTE *)this + 659) = *((_DWORD *)a2 + 8) != 0;
    v11 = v10 == 2;
    CDesktopManager::ApplyColorizationParameters(v5, (const struct CGlassColorizationParameters *)&v23);
    while ( 1 )
    {
      v12 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
      if ( !v12 )
        break;
      v15 = (CWindowData *)(v12 + 10);
      for ( i = (CWindowData *)v12[10]; i != v15; i = *(CWindowData **)i )
      {
        CWindowData::OnColorizationUpdated(i);
        v17 = (CTopLevelWindow *)*((_QWORD *)i + 55);
        if ( v17 && v11 != v6 )
          CTopLevelWindow::OnBlurBehindUpdated(v17);
      }
    }
    v13 = (CVisual *)*((_QWORD *)this + 70);
    if ( v13 )
    {
      v18 = *((_BYTE *)this + 659);
      if ( v18 != *((_BYTE *)v13 + 493) )
      {
        *((_BYTE *)v13 + 493) = v18;
        CVisual::SetDirtyFlags(v13, 0x6000u);
        v19 = CVisual::RenderRecursive(v13);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x148,
            (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
            (const char *)(unsigned int)v19);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x1BABu);
          v4 = v20;
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v4;
}
