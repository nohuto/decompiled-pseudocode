/*
 * XREFs of ??_GSessionInfoItem@GamingAudio@@UEAAPEAXI@Z @ 0x18033EC80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SessionInfoItem@GamingAudio@@UEAA@XZ @ 0x18033EA84 (--1SessionInfoItem@GamingAudio@@UEAA@XZ.c)
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
