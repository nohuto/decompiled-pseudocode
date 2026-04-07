/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x18004F480
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x18004F430 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x1800694A0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B3F70 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  bool v5; // zf
  char v6; // al
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0
      || (McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmDirectTouchDownAnimation_End,
            a3,
            1,
            (__int64)v7),
          (v3 = *((_QWORD *)this + 48)) != 0) )
    {
      v5 = (*(_DWORD *)(v3 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *((_QWORD *)this + 48) = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
