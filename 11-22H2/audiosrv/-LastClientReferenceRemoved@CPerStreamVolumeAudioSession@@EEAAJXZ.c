/*
 * XREFs of ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180055AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800485E0 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LastClientReferenceRemoved(CPerStreamVolumeAudioSession *this)
{
  if ( *((_BYTE *)this + 920) )
    CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
  return 0LL;
}
