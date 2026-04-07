/*
 * XREFs of ?PostInitializeComObjects@CDesktopManager@@QEAAJXZ @ 0x1800B1104
 * Callers:
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x1800B1A70 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::PostInitializeComObjects(CDesktopManager *this)
{
  signed int v2; // edi
  signed int LastError; // eax

  v2 = 0;
  SetLastError(0);
  if ( !PostThreadMessageW(*((_DWORD *)this + 146), 0x409u, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x766u);
  }
  return (unsigned int)v2;
}
