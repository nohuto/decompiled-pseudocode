/*
 * XREFs of ??_GCPlaybackManager@@MEAAPEAXI@Z @ 0x18001C280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

CPlaybackManager *__fastcall CPlaybackManager::`scalar deleting destructor'(CPlaybackManager *this, char a2)
{
  *((_BYTE *)this + 16) = 1;
  *(_QWORD *)this = &CPlaybackManager::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
