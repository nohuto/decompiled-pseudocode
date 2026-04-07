/*
 * XREFs of ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003E8B8
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMDisplay::RefreshRateChanged(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  char v2; // r10

  v2 = *((_BYTE *)this + 256);
  return v2 != *((_BYTE *)a2 + 256)
      || *((_DWORD *)this + 62) != *((_DWORD *)a2 + 62)
      || *((_DWORD *)this + 57) != *((_DWORD *)a2 + 57)
      || *((unsigned int *)this + 49) * (unsigned __int64)*((unsigned int *)a2 + 50) != *((unsigned int *)this + 50)
                                                                                      * (unsigned __int64)*((unsigned int *)a2 + 49)
      || v2
      && (*((_DWORD *)this + 58) != *((_DWORD *)a2 + 58)
       || *((_DWORD *)this + 59) != *((_DWORD *)a2 + 59)
       || *((_DWORD *)this + 60) != *((_DWORD *)a2 + 60)
       || *((_DWORD *)this + 61) != *((_DWORD *)a2 + 61));
}
