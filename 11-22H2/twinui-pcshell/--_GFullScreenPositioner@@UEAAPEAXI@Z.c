/*
 * XREFs of ??_GFullScreenPositioner@@UEAAPEAXI@Z @ 0x1801A9970
 * Callers:
 *     ??_EFullScreenPositioner@@WCA@EAAPEAXI@Z @ 0x180293930 (--_EFullScreenPositioner@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x1801A99AC (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

FullScreenPositioner *__fastcall FullScreenPositioner::`scalar deleting destructor'(
        FullScreenPositioner *this,
        char a2)
{
  FullScreenPositioner::~FullScreenPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x190uLL);
  return this;
}
