/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x1800E5FEC
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800EEFA0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180003C20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D07B4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

void __fastcall CTopLevelWindow::SetWindowOffscreen(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow *v2; // rdi
  char v3; // bl
  char v4; // cl
  __int64 v5; // r8
  void *v6; // rdx
  struct CWindowData *v7; // rdx
  CProjectionBorderVisual *v8; // rcx
  __int64 v9; // rax

  v2 = this;
  v3 = 1;
  v4 = *((_BYTE *)this + 249);
  if ( (v4 & 1) == a2 )
    return;
  v5 = *((_QWORD *)v2 + 94);
  LOBYTE(this) = a2 | v4 & 0xFE;
  *((_BYTE *)v2 + 249) = (_BYTE)this;
  if ( v5 )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v6 = &UdwmSystemAnimation_MoveOffscreen_Start;
LABEL_8:
        McTemplateU0p_EtwEventWriteTransfer((__int64)this, (int)v6, *(_QWORD *)(v5 + 40));
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v6 = &UdwmSystemAnimation_MoveOffscreen_Stop;
      goto LABEL_8;
    }
  }
  v7 = (struct CWindowData *)*((_QWORD *)v2 + 94);
  v8 = (CProjectionBorderVisual *)*((_QWORD *)v7 + 58);
  if ( v8 )
  {
    v9 = *((_QWORD *)v2 + 33);
    if ( (*(_BYTE *)(v9 + 92) & 4) == 0
      || *(_DWORD *)(v9 + 96)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(v9 + 192)) & _xmm) < 0.0000011920929
      || (*((_BYTE *)v2 + 249) & 1) != 0 )
    {
      v3 = 0;
    }
    CProjectionBorderVisual::Show(v8, v3);
    v7 = (struct CWindowData *)*((_QWORD *)v2 + 94);
  }
  CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52), v7, 0);
}
