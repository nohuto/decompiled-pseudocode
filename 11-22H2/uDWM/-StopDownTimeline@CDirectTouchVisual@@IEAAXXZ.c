/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046640
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800465F0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18006C9E0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B6EC8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 48) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmDirectTouchDownAnimation_End,
        a3,
        1LL,
        (__int64)v7);
    v4 = *((_QWORD *)this + 48);
    if ( v4 )
    {
      v5 = (*(_DWORD *)(v4 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v5 )
        v6 = 1;
      *((_QWORD *)this + 48) = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
}
