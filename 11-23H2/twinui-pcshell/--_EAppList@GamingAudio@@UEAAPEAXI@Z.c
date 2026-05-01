/*
 * XREFs of ??_EAppList@GamingAudio@@UEAAPEAXI@Z @ 0x1803FA680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1AppList@GamingAudio@@UEAA@XZ @ 0x1803F9768 (--1AppList@GamingAudio@@UEAA@XZ.c)
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
