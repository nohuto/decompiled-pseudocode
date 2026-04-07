/*
 * XREFs of ?UpdateProxyWindowForCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800CE6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800A8284 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x1800CF640 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFCE0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CFFBC (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProjectionBorderManager::UpdateProxyWindowForCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        HWND a3,
        HWND a4)
{
  HWND *v7; // rax
  HWND v8; // rsi
  CProjectionBorderManager *v9; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v11; // ebx
  CProjectionBorderManager *v12; // rcx
  CProjectionBorderManager *v13; // rcx
  CCaptureControllerProxy **v14; // rax
  CCaptureControllerProxy **v15; // rdi
  __int64 v17; // rdx
  struct CVisualProxy *v18; // [rsp+20h] [rbp-20h] BYREF
  PVOID v19; // [rsp+28h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  PVOID RestartKey; // [rsp+80h] [rbp+40h] BYREF
  HWND v23; // [rsp+98h] [rbp+58h]

  v23 = a4;
  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  do
  {
    v7 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v7 )
      goto LABEL_18;
  }
  while ( v7[2] != a2 );
  v18 = 0LL;
  RestartKey = 0LL;
  v8 = a2;
  if ( a3 )
    v8 = a3;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&RestartKey);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(
                             v9,
                             v8,
                             &v18,
                             (struct CapturedWindowSWRVisual **)&RestartKey);
  v11 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      v14 = (CCaptureControllerProxy **)RtlEnumerateGenericTableWithoutSplaying(this + 6, &v19);
      v15 = v14;
      if ( !v14 )
        goto LABEL_17;
      if ( v14[2] == (CCaptureControllerProxy *)a2 )
      {
        CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual(v14[1], v18);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 617LL;
          goto LABEL_26;
        }
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                                   (CProjectionBorderManager *)this,
                                   v8,
                                   v15[1]);
        v11 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual < 0 )
        {
          v17 = 618LL;
          goto LABEL_26;
        }
        if ( *((_BYTE *)v15 + 32) )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v12, v23, 0);
          v11 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual < 0 )
          {
            v17 = 624LL;
            goto LABEL_26;
          }
          if ( v8 == a3 )
          {
            CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v13, v8, 1);
            v11 = CapturedItemRootVisual;
            if ( CapturedItemRootVisual < 0 )
            {
              v17 = 628LL;
              goto LABEL_26;
            }
          }
        }
      }
    }
  }
  if ( CapturedItemRootVisual == -2147467261 )
  {
LABEL_17:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&RestartKey);
LABEL_18:
    v11 = 0;
    goto LABEL_19;
  }
  v17 = 637LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&RestartKey);
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v11;
}
