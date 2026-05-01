/*
 * XREFs of ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18018B018
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180166DD4 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1802DDB10 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetSessionID@@YAKXZ @ 0x18018B0B8 (-GetSessionID@@YAKXZ.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x18018B104 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
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
    StringCchPrintfW(a2, 0xFFuLL, (size_t *)L"%s%s%d", a1, v7, v6);
  }
}
