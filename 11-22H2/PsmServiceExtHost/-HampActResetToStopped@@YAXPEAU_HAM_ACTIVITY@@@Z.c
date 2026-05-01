/*
 * XREFs of ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800146E8
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180015844 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180014724 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActResetToStopped(struct _HAM_ACTIVITY *a1)
{
  *((_DWORD *)a1 + 138) &= 0xFFFFC0FF;
  *((_DWORD *)a1 + 139) = 0;
  *((_WORD *)a1 + 280) = 0;
  HampActCancelExpirationTimer(a1);
  *((_DWORD *)a1 + 138) &= ~0x40u;
}
