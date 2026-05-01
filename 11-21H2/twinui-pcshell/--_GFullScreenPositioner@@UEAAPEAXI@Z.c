/*
 * XREFs of ??_GFullScreenPositioner@@UEAAPEAXI@Z @ 0x180170BA8
 * Callers:
 *     ??_EFullScreenPositioner@@WCA@EAAPEAXI@Z @ 0x1801EFDC0 (--_EFullScreenPositioner@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x180170BE4 (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

FullScreenPositioner *__fastcall FullScreenPositioner::`scalar deleting destructor'(
        FullScreenPositioner *this,
        char a2)
{
  FullScreenPositioner::~FullScreenPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1B0uLL);
  return this;
}
