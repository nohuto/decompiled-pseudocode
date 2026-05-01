/*
 * XREFs of ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x1804A1690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x1804A150C (--1CAltTabViewHost@@UEAA@XZ.c)
 */

CAltTabViewHost *__fastcall CAltTabViewHost::`vector deleting destructor'(CAltTabViewHost *this, char a2)
{
  CAltTabViewHost::~CAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
