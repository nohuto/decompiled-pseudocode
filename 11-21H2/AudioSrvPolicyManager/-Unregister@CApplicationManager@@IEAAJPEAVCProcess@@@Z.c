/*
 * XREFs of ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94
 * Callers:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18000D92C (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     wil::details::lambda_call__lambda_7a265385352276fbe340bd9c396c3899___::_lambda_call__lambda_7a265385352276fbe340bd9c396c3899___ @ 0x18001EC84 (wil--details--lambda_call__lambda_7a265385352276fbe340bd9c396c3899___--_lambda_call__lambda_7a26.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180022044 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppClosureNotification @ 0x1800292B0 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800293E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180015CB0 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800166BC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180022440 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::Unregister(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CApplication *v5; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && (unsigned int)CProcess::CanBeRemoved(a2) )
  {
    v5 = (CApplication *)*((_QWORD *)a2 + 28);
    if ( v5 )
      CApplication::DelinkProcess(v5, a2);
    CApplicationManager::RemoveProcess(this, a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
