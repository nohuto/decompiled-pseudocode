/*
 * XREFs of ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180010240
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800E5820 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailsForNewWindow(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 i; // rsi
  __int64 v7; // r14
  int v8; // eax
  CVisual *v9; // rcx
  int v10; // eax
  CThumbnailVisual *v11; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)a2 + 140) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * v3);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v2 = v8;
      if ( v8 < 0 )
        break;
      v9 = (CVisual *)*((_QWORD *)a2 + 55);
      if ( *(_BYTE *)(v7 + 34) )
      {
        CVisual::SetDirtyFlags(v9, 0x8000000u);
      }
      else
      {
        v10 = CTopLevelWindow::OnThumbnailAdded(v9, *(struct CVisual **)(v7 + 88));
        v2 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x19CEu);
          return v2;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a2 + 140) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x19C3u);
  }
  else
  {
LABEL_2:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 148); i = (unsigned int)(i + 1) )
    {
      v11 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 71) + 8 * i) + 88LL);
      if ( v11 )
        CThumbnailVisual::SetDirtyFlags(v11, 0x2000u);
    }
  }
  return v2;
}
