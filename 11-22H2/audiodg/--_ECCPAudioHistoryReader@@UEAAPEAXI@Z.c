/*
 * XREFs of ??_ECCPAudioHistoryReader@@UEAAPEAXI@Z @ 0x140094950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1CCPAudioHistoryReader@@UEAA@XZ @ 0x1400948D4 (--1CCPAudioHistoryReader@@UEAA@XZ.c)
 */

CCPAudioHistoryReader *__fastcall CCPAudioHistoryReader::`vector deleting destructor'(
        CCPAudioHistoryReader *this,
        char a2)
{
  CCPAudioHistoryReader::~CCPAudioHistoryReader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
