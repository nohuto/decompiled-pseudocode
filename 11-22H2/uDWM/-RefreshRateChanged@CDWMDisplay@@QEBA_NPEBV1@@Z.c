/*
 * XREFs of ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005B718
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMDisplay::RefreshRateChanged(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  char v2; // r10

  v2 = *((_BYTE *)this + 273);
  return v2 != *((_BYTE *)a2 + 273)
      || *((_DWORD *)this + 66) != *((_DWORD *)a2 + 66)
      || *((_DWORD *)this + 61) != *((_DWORD *)a2 + 61)
      || *((unsigned int *)this + 53) * (unsigned __int64)*((unsigned int *)a2 + 54) != *((unsigned int *)this + 54)
                                                                                      * (unsigned __int64)*((unsigned int *)a2 + 53)
      || v2
      && (*((_DWORD *)this + 62) != *((_DWORD *)a2 + 62)
       || *((_DWORD *)this + 63) != *((_DWORD *)a2 + 63)
       || *((_DWORD *)this + 64) != *((_DWORD *)a2 + 64)
       || *((_DWORD *)this + 65) != *((_DWORD *)a2 + 65));
}
