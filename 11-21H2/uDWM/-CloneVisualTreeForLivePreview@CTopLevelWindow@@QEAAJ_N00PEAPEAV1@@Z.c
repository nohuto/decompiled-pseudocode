/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097DA4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B2DC0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800B35A8 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C3A14 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E4E5C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x1800EF85C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18001B750 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E3FB4 (--0-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x1800E415C (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800E60D8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E6350 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        struct CTopLevelWindow **a5)
{
  int v5; // r12d
  __int64 v7; // rax
  char v8; // cl
  __int64 v9; // rax
  char v10; // di
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r15d
  char *v16; // r14
  __int64 v17; // rax
  CVisual *v18; // rbp
  int v19; // esi
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  CBaseObject *v30; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v31[40]; // [rsp+40h] [rbp-178h] BYREF

  v5 = a2;
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v31);
  v31[0] = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  WindowFrameLoggingTelemetry::CloneWindow::StartActivity((WindowFrameLoggingTelemetry::CloneWindow *)v31);
  v7 = *((_QWORD *)this + 37);
  if ( v7 )
  {
    if ( (_BYTE)v5 || !*(_DWORD *)(v7 + 280) )
      v8 = 8;
    else
      v8 = 0;
    *(_BYTE *)(v7 + 92) &= ~8u;
    *(_BYTE *)(v7 + 92) |= v8;
  }
  v9 = *((_QWORD *)this + 39);
  v10 = 8 * v5;
  if ( v9 )
  {
    *(_BYTE *)(v9 + 92) &= ~8u;
    *(_BYTE *)(v9 + 92) |= v10;
  }
  v11 = *((_QWORD *)this + 68);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 92) &= ~8u;
    *(_BYTE *)(v11 + 92) |= v10;
  }
  v12 = *((_QWORD *)this + 70);
  if ( v12 )
  {
    *(_BYTE *)(v12 + 92) &= ~8u;
    *(_BYTE *)(v12 + 92) |= v10;
  }
  v13 = *((_QWORD *)this + 67);
  if ( v13 )
  {
    *(_BYTE *)(v13 + 92) &= ~8u;
    *(_BYTE *)(v13 + 92) |= v10;
  }
  v14 = *((_QWORD *)this + 105);
  if ( v14 )
  {
    *(_BYTE *)(v14 + 92) &= ~8u;
    *(_BYTE *)(v14 + 92) |= v10;
  }
  v15 = 0;
  v16 = (char *)this + 504;
  do
  {
    v17 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 )
    {
      *(_BYTE *)(v17 + 92) &= ~8u;
      *(_BYTE *)(v17 + 92) |= v10;
      if ( !(_BYTE)v5 )
      {
        v18 = *(CVisual **)v16;
        v19 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v16 + 392LL) )
        {
          *((_BYTE *)v18 + 288) |= 0x40u;
          CVisual::SetDirtyFlags(v18, 0x10000);
          v19 = CVisual::RenderRecursive(v18);
        }
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x1627u);
          goto LABEL_43;
        }
      }
    }
    ++v15;
    v16 += 8;
  }
  while ( v15 < 4 );
  v20 = *((_QWORD *)this + 35);
  if ( v20 )
    *(_BYTE *)(v20 + 92) &= ~8u;
  v30 = 0LL;
  v21 = (8 * v5 + 2) | 1;
  if ( (*((_DWORD *)this + 152) & 0x20) == 0 )
    v21 = 8 * v5 + 2;
  v22 = CTopLevelWindow::CloneVisualTree((__int64)this, &v30, v21);
  v19 = v22;
  if ( v22 >= 0 )
  {
    *a5 = v30;
    v23 = *((_QWORD *)this + 37);
    if ( v23 )
      *(_BYTE *)(v23 + 92) &= ~8u;
    v24 = *((_QWORD *)this + 39);
    if ( v24 )
      *(_BYTE *)(v24 + 92) &= ~8u;
    v25 = *((_QWORD *)this + 68);
    if ( v25 )
      *(_BYTE *)(v25 + 92) &= ~8u;
    v26 = *((_QWORD *)this + 70);
    if ( v26 )
      *(_BYTE *)(v26 + 92) &= ~8u;
    v27 = *((_QWORD *)this + 67);
    if ( v27 )
      *(_BYTE *)(v27 + 92) &= ~8u;
    v28 = *((_QWORD *)this + 105);
    if ( v28 )
      *(_BYTE *)(v28 + 92) &= ~8u;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x1640u);
  }
LABEL_43:
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v31, (unsigned int)v19);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v31);
  return (unsigned int)v19;
}
