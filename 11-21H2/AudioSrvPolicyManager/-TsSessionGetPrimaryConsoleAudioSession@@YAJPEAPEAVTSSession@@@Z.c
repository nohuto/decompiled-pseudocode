/*
 * XREFs of ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x18002E098
 * Callers:
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x1800300D8 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800301EC (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionGetPrimaryConsoleAudioSession(struct TSSession **a1)
{
  _QWORD *i; // rax
  struct TSSession *v3; // rdx
  unsigned int v4; // ebx

  EnterCriticalSection(&stru_18005C5D8);
  for ( i = *(_QWORD **)qword_18005C6B8; i != (_QWORD *)qword_18005C6B8; i = (_QWORD *)*i )
  {
    v3 = (struct TSSession *)i[3];
    if ( *(_DWORD *)v3 && *((_DWORD *)v3 + 278) )
      goto LABEL_7;
  }
  v3 = 0LL;
LABEL_7:
  *a1 = v3;
  v4 = v3 == 0LL ? 0x80070490 : 0;
  LeaveCriticalSection(&stru_18005C5D8);
  return v4;
}
