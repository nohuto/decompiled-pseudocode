/*
 * XREFs of ??_EAppList@GamingAudio@@UEAAPEAXI@Z @ 0x18032D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1AppList@GamingAudio@@UEAA@XZ @ 0x18032C204 (--1AppList@GamingAudio@@UEAA@XZ.c)
 */

GamingAudio::AppList *__fastcall GamingAudio::AppList::`vector deleting destructor'(
        GamingAudio::AppList *this,
        char a2)
{
  GamingAudio::AppList::~AppList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
