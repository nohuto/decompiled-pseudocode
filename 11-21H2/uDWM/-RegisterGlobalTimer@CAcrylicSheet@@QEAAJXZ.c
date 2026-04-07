/*
 * XREFs of ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18009A94C
 * Callers:
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x18009AA6C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z @ 0x18009B0A8 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::RegisterGlobalTimer(CAcrylicSheet *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 492) )
  {
    v3 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v1 = v3;
    if ( v3 >= 0 )
      *((_BYTE *)this + 492) = 1;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1DFu);
  }
  return v1;
}
