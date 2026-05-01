/*
 * XREFs of ??_GSessionInfoItem@GamingAudio@@UEAAPEAXI@Z @ 0x18040C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SessionInfoItem@GamingAudio@@UEAA@XZ @ 0x18040C6AC (--1SessionInfoItem@GamingAudio@@UEAA@XZ.c)
 */

GamingAudio::SessionInfoItem *__fastcall GamingAudio::SessionInfoItem::`scalar deleting destructor'(
        GamingAudio::SessionInfoItem *this,
        char a2)
{
  GamingAudio::SessionInfoItem::~SessionInfoItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
