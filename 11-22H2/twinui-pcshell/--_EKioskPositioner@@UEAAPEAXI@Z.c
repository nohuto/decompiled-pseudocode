/*
 * XREFs of ??_EKioskPositioner@@UEAAPEAXI@Z @ 0x1801BE3E8
 * Callers:
 *     ??_EKioskPositioner@@WCI@EAAPEAXI@Z @ 0x1802A5B10 (--_EKioskPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1KioskPositioner@@UEAA@XZ @ 0x1801433FC (--1KioskPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

KioskPositioner *__fastcall KioskPositioner::`vector deleting destructor'(KioskPositioner *this, char a2)
{
  KioskPositioner::~KioskPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2A8uLL);
  return this;
}
