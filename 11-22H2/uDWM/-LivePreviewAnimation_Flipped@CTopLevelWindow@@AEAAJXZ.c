/*
 * XREFs of ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18006D9F0
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18006DBC6 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E6D58 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Flipped(CTopLevelWindow *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax

  v1 = *((_DWORD *)this + 64);
  v2 = 0;
  if ( v1 == 1 )
  {
    v4 = CTopLevelWindow::ShowWindow(this, 0);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x116Au);
      return v2;
    }
LABEL_10:
    CTopLevelWindow::StopLivePreviewAnimation(this);
    return v2;
  }
  if ( v1 == 2 )
  {
    v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    if ( v5 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 440) + 72LL) )
      {
        v6 = CTopLevelWindow::ShowWindow(this, 1);
        v2 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1172u);
          return v2;
        }
        goto LABEL_10;
      }
    }
  }
  return v2;
}
