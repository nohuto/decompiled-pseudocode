/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x18000B154
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18000AFD0 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18005BCF8 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x18000B1D8 (DwmpCalculateColorizationColor.c)
 */

void __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        const struct CGlassColorizationParameters *a2)
{
  const struct CGlassColorizationParameters *v3; // rcx
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF
  DWORD Info; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(wParam) = 0;
  v3 = (CDesktopManager *)((char *)this + 460);
  if ( a2 != v3 )
  {
    *(_OWORD *)v3 = *(_OWORD *)a2;
    *((_OWORD *)v3 + 1) = *((_OWORD *)a2 + 1);
  }
  if ( !*((_BYTE *)this + 25) )
    *((_DWORD *)this + 120) = 1;
  DwmpCalculateColorizationColor(v3, &wParam);
  Info = 8;
  BroadcastSystemMessageW(0xB2u, &Info, 0x320u, (unsigned int)wParam, 1LL);
  *((_BYTE *)this + 616) = 0;
}
