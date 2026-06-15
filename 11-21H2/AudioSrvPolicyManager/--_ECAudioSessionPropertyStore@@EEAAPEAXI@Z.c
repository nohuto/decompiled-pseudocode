/*
 * XREFs of ??_ECAudioSessionPropertyStore@@EEAAPEAXI@Z @ 0x180033950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x1800331B8 (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
 */

CAudioSessionPropertyStore *__fastcall CAudioSessionPropertyStore::`vector deleting destructor'(
        CAudioSessionPropertyStore *this,
        char a2)
{
  CAudioSessionPropertyStore::~CAudioSessionPropertyStore(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
