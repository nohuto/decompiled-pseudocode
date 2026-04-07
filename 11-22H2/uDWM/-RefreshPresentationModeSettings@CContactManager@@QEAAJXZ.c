/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x1800412E0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180041174 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18004A0B0 (--0CContactManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  BOOL v2; // eax
  bool v3; // dl
  bool v4; // zf
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  v2 = SystemParametersInfoW(0x2018u, 0, &pvParam, 0);
  v3 = 0;
  if ( v2 )
  {
    v4 = pvParam == 0;
    *((_BYTE *)this + 324) = pvParam == 2;
    v3 = v4;
  }
  else
  {
    *((_BYTE *)this + 324) = 0;
  }
  *((_BYTE *)this + 325) = v3;
  return 0LL;
}
