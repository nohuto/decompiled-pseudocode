/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18014B64C
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BF254 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180476EF0 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18014B8B8 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     ?GetSessionID@@YAKXZ @ 0x18014B970 (-GetSessionID@@YAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall GetDesktopUniqueName(const wchar_t *a1, wchar_t *a2)
{
  unsigned int v4; // edx
  unsigned int SessionID; // esi
  unsigned int v6; // [rsp+28h] [rbp-240h]
  wchar_t v7[264]; // [rsp+30h] [rbp-238h] BYREF

  v7[0] = 0;
  SessionID = GetSessionID();
  if ( SessionID == -1 || !(unsigned int)GetThreadDesktopName(v7, v4) )
  {
    StringCchCopyW(a2, 255LL, a1);
  }
  else
  {
    v6 = SessionID;
    StringCchPrintfW(a2, 255LL, L"%s%s%d", a1, v7, v6);
  }
}
