/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x1800A97C0
 * Callers:
 *     ??_ECDesktopPositioner@@WCI@EAAPEAXI@Z @ 0x18020A7F0 (--_ECDesktopPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x1800A97FC (--1CDesktopPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(CDesktopPositioner *this, char a2)
{
  CDesktopPositioner::~CDesktopPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x200uLL);
  return this;
}
