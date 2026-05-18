/*
 * XREFs of ?WaitForLsa@@YAJXZ @ 0x180006484
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800044C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800075AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 WaitForLsa(void)
{
  unsigned int v0; // ebx
  HANDLE EventW; // rdi
  signed int LastError; // eax

  v0 = 0;
  EventW = CreateEventW(0LL, 1, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
  if ( EventW )
    goto LABEL_9;
  if ( GetLastError() != 183 )
    return v0;
  SetLastError(0);
  EventW = OpenEventW(0x100000u, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
  if ( EventW )
  {
LABEL_9:
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    CloseHandle(EventW);
    return v0;
  }
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError >= 0 )
    LastError = -2003304445;
  v0 = LastError;
  DoStackCaptureDirect(LastError, 0x1ABu);
  return v0;
}
