/*
 * XREFs of ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x180026180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x1800261BC (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::`scalar deleting destructor'(
        CPerStreamVolumeAudioSession *this,
        char a2)
{
  CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x3E0uLL);
  return this;
}
