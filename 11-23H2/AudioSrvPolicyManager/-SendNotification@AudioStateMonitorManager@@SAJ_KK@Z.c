/*
 * XREFs of ?SendNotification@AudioStateMonitorManager@@SAJ_KK@Z @ 0x180040A34
 * Callers:
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180008780 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016D1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x180040660 (--1-$unique_ptr@UAUDIOSTATEMONITOR_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIOSTATEMONITOR_NOTI.c)
 */

__int64 __fastcall AudioStateMonitorManager::SendNotification(__int64 a1, unsigned int a2)
{
  _OWORD *v4; // rax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0;
  v8 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    *(_DWORD *)v4 = 32;
    *((_DWORD *)v4 + 1) = 0x80000;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 3) = a1;
    GenerateMediaEvent(v4, a2);
  }
  else
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (int)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
      (const char *)0x8007000ELL);
  }
  std::unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>::~unique_ptr<AUDIOSTATEMONITOR_NOTIFICATION_BLOCK>(&v8);
  return v5;
}
