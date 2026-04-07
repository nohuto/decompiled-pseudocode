/*
 * XREFs of ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800D35E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800AD344 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800D4780 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4F60 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D524C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5350 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D5470 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::UpdateProxyWindowForCapture(
        CProjectionBorderManager *this,
        HWND a2,
        HWND a3,
        HWND a4)
{
  struct _RTL_GENERIC_TABLE *v8; // r14
  HWND *v9; // rax
  HWND v10; // rdi
  CProjectionBorderManager *v11; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v13; // ebx
  int updated; // esi
  CProjectionBorderManager *v15; // rcx
  CProjectionBorderManager *v16; // rcx
  CProjectionBorderManager *v17; // rcx
  CCaptureControllerProxy **v18; // rax
  struct CCaptureControllerProxy **v19; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  PVOID RestartKey; // [rsp+20h] [rbp-20h] BYREF
  struct CVisualProxy *v24; // [rsp+28h] [rbp-18h] BYREF
  PVOID v25; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v8 = (struct _RTL_GENERIC_TABLE *)((char *)this + 432);
  do
  {
    v9 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(v8, &RestartKey);
    if ( !v9 )
      goto LABEL_22;
  }
  while ( v9[2] != a2 );
  v24 = 0LL;
  RestartKey = 0LL;
  v10 = a2;
  if ( a3 )
    v10 = a3;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&RestartKey);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(
                             v11,
                             v10,
                             &v24,
                             (struct CapturedWindowSWRVisual **)&RestartKey);
  v13 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      do
      {
        v18 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(v8, &v25);
        v19 = v18;
        if ( !v18 )
          goto LABEL_21;
      }
      while ( v18[2] != (CCaptureControllerProxy *)a2 );
      updated = CCaptureControllerProxy::SetRootVisual(v18[1], v24);
      if ( updated < 0 )
      {
        v22 = 661LL;
        goto LABEL_30;
      }
      updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(this, v10, v19[1]);
      if ( updated < 0 )
        break;
      updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(this, v10);
      if ( updated < 0 )
      {
        v22 = 663LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)updated);
        v13 = updated;
        goto LABEL_35;
      }
      if ( *((_BYTE *)v19 + 32) )
      {
        if ( a4 )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v15, a4, 0);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v21 = 671LL;
            goto LABEL_34;
          }
          CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v16, a4, 0);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v21 = 672LL;
            goto LABEL_34;
          }
        }
        if ( v10 == a3 )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v15, v10, 1);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v21 = 678LL;
            goto LABEL_34;
          }
          CapturedItemRootVisual = CProjectionBorderManager::_SetScreenCaptureForWindow(v17, v10, 1);
          v13 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v21 = 679LL;
            goto LABEL_34;
          }
        }
      }
    }
    v22 = 662LL;
    goto LABEL_30;
  }
  if ( CapturedItemRootVisual == -2147467261 )
  {
LABEL_21:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&RestartKey);
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  v21 = 688LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual);
LABEL_35:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&RestartKey);
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v13;
}
