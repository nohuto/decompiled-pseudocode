/*
 * XREFs of ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D72A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800DAF40 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::Disconnect(CPerStreamVolumeAudioSession *a1, int a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CAudioSession::Disconnect((__int64)a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::Disconnect", 2071, v4);
  }
  else if ( *((_BYTE *)a1 + 920) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(a1);
  }
  return v5;
}
