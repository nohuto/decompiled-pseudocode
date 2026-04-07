/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x18003D7A8
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180039458 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003D5F0 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x18003D85C (DwmpCalculateColorizationColor.c)
 *     memcmp_0 @ 0x18006634C (memcmp_0.c)
 */

char __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        struct CGlassColorizationParameters *a2)
{
  char v2; // bl
  _OWORD *v4; // rsi
  WPARAM v6; // r9
  DWORD Info; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 25) )
    *((_DWORD *)a2 + 5) = 1;
  v4 = (_OWORD *)((char *)this + 476);
  if ( memcmp_0(a2, (char *)this + 476, 0x20uLL) )
  {
    v2 = 1;
    *v4 = *(_OWORD *)a2;
    v4[1] = *((_OWORD *)a2 + 1);
  }
  DwmpCalculateColorizationColor(v4, &Info);
  if ( Info != dword_180148424 )
  {
    v6 = Info;
    dword_180148424 = Info;
    Info = 8;
    BroadcastSystemMessageW(0xB2u, &Info, 0x320u, v6, 1LL);
  }
  return v2;
}
