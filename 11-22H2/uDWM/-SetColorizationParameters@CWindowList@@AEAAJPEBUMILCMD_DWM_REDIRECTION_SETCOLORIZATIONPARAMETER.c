/*
 * XREFs of ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180039458
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001636C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x1800395E0 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z @ 0x18003D77C (-CheckAnyPolicy@CDesktopManager@@SA_NK@Z.c)
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18003D7A8 (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetColorizationParameters(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *a2)
{
  unsigned int v4; // ebx
  CDesktopManager *v5; // rcx
  char v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int32 v9; // eax
  __int32 v10; // edx
  char v11; // r13
  bool v12; // al
  bool v13; // r15
  _QWORD *v14; // rax
  CWindowData *v15; // r14
  CWindowData *v16; // rdi
  __int64 v17; // rdi
  CTopLevelWindow *v19; // rcx
  char v20; // al
  int v21; // eax
  int v22; // edi
  unsigned int v23; // [rsp+20h] [rbp-50h]
  char v24; // [rsp+30h] [rbp-40h]
  PVOID RestartKey; // [rsp+38h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  __m128i v28; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v26 = &CDesktopManager::s_csDwmInstance;
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
    v27 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 476);
    v28 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 492);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v28, 8)) == 2;
    v24 = v6;
    *(_QWORD *)&v27 = *(_QWORD *)((char *)a2 + 4);
    v7 = *((_DWORD *)a2 + 3);
    if ( v7 > 0x78 )
      v7 = 120;
    DWORD2(v27) = v7;
    v8 = *((_DWORD *)a2 + 4);
    if ( v8 > 0x78 )
      v8 = 120;
    HIDWORD(v27) = v8;
    v9 = *((_DWORD *)a2 + 5);
    if ( v9 > 0x78 )
      v9 = 120;
    v28.m128i_i32[0] = v9;
    v28.m128i_i32[1] = *((_DWORD *)a2 + 6) != 0;
    v10 = *((_DWORD *)a2 + 7);
    v28.m128i_i32[2] = v10;
    if ( *((_DWORD *)a2 + 8) != 2 )
      *((_BYTE *)this + 643) = *((_DWORD *)a2 + 8) != 0;
    v11 = v10 == 2;
    v12 = CDesktopManager::ApplyColorizationParameters(v5, (struct CGlassColorizationParameters *)&v27);
    v13 = v12;
    if ( v11 != v6 || v12 )
    {
      while ( 1 )
      {
        v14 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        if ( !v14 )
          break;
        v15 = (CWindowData *)(v14 + 10);
        v16 = (CWindowData *)v14[10];
        if ( v16 != (CWindowData *)(v14 + 10) )
        {
          do
          {
            if ( v13 )
              CWindowData::OnColorizationUpdated(v16);
            if ( v11 != v24 )
            {
              v19 = (CTopLevelWindow *)*((_QWORD *)v16 + 55);
              if ( v19 )
                CTopLevelWindow::OnBlurBehindUpdated(v19);
            }
            v16 = *(CWindowData **)v16;
          }
          while ( v16 != v15 );
        }
      }
    }
    v17 = *((_QWORD *)this + 68);
    if ( v17 )
    {
      v20 = *((_BYTE *)this + 643);
      if ( v20 != *(_BYTE *)(v17 + 465) )
      {
        *(_BYTE *)(v17 + 465) = v20;
        if ( (*(_DWORD *)(v17 + 88) & 0x6000) != 0x6000 )
        {
          *(_DWORD *)(v17 + 88) |= 0x6000u;
          CVisual::PropagateDirtyChildren((CVisual *)v17);
        }
        v21 = CVisual::RenderRecursive((CVisual *)v17);
        v22 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14E,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
            (const char *)(unsigned int)v21,
            v23);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1C17u, 0LL);
          v4 = v22;
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v4;
}
