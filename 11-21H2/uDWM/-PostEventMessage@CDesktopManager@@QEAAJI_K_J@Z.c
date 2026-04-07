/*
 * XREFs of ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x1800B1014
 * Callers:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x180068F9C (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x1800ACA9C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostEventMessage(HANDLE *this, UINT a2, WPARAM a3, LPARAM a4)
{
  signed int v4; // ebx
  DWORD ThreadId; // eax
  signed int LastError; // eax

  v4 = 0;
  if ( this[74] )
  {
    SetLastError(0);
    ThreadId = GetThreadId(this[74]);
    if ( !PostThreadMessageW(ThreadId, a2, a3, a4) )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801226F8, 1LL, v4, 0xB13u);
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801226F8, 1LL, -2147467259, 0xB10u);
  }
  return (unsigned int)v4;
}
