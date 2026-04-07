/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180035C80 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180037D70 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42AC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E6BC8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData *v6; // r11
  CLivePreview *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  const struct CWindowData *v13; // rax
  int v14; // eax
  int v15; // eax
  int started; // eax
  unsigned int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || (*((_BYTE *)this[42] + 668) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1C7u);
    }
    else if ( !this[46] || *((_DWORD *)this + 96) != 3 )
    {
      v9 = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1D0u);
      }
      else
      {
        v10 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[42] + 55), 0);
        v3 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1D2u);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v14 = CTopLevelWindow3D::StartAnimation((__int64)this, 7);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1B0u);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition((CTopLevelWindow3D *)this) )
    {
LABEL_5:
      if ( !this[46] )
      {
        v6 = this[42];
        v7 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55);
        if ( !*((_BYTE *)v7 + 288) || !v6 || !CLivePreview::_IsInLivePreview(v7, this[42]) )
        {
          v8 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v6 + 55), 1);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1BFu);
        }
      }
      return v3;
    }
    if ( !a3 )
    {
      v13 = this[42];
      if ( *((_DWORD *)v13 + 168) != 93 )
        goto LABEL_5;
      *((_DWORD *)v13 + 168) = 4095;
    }
    if ( this[46] )
    {
      v15 = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B7,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v15,
          v17);
    }
    v12 = CTopLevelWindow3D::StartAnimation((__int64)this, 1);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1B9u);
  }
  return v3;
}
