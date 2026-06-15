/*
 * XREFs of ??_GCAudioSessionStore@@EEAAPEAXI@Z @ 0x180019090
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x180019138 (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

CAudioSessionStore *__fastcall CAudioSessionStore::`scalar deleting destructor'(CAudioSessionStore *this, char a2)
{
  CAudioSessionStore::~CAudioSessionStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
