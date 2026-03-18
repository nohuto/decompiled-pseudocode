/*
 * XREFs of ?ResetTokenThread@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800EC950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ResetTokenThread(CGlobalSurfaceManager *this)
{
  signed int v2; // edi
  char *v3; // rcx
  DWORD ThreadId; // ebx
  signed int LastError; // eax
  __int64 v7; // rcx

  v2 = 0;
  v3 = (char *)*((_QWORD *)this + 55);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    ThreadId = GetThreadId(v3);
    if ( GetCurrentThreadId() != ThreadId )
    {
      if ( *((_BYTE *)this + 496) )
      {
        return (unsigned int)-2147467260;
      }
      else
      {
        SetLastError(0);
        if ( !SetEvent(*((HANDLE *)this + 56)) )
        {
          LastError = GetLastError();
          v2 = LastError;
          if ( LastError > 0 )
            v2 = (unsigned __int16)LastError | 0x80070000;
          if ( v2 >= 0 )
            v2 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v2, 0x87u);
        }
      }
    }
  }
  return (unsigned int)v2;
}
