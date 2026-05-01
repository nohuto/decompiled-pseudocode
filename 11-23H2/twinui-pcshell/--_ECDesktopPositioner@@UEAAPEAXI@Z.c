/*
 * XREFs of ??_ECDesktopPositioner@@UEAAPEAXI@Z @ 0x1801BE5EC
 * Callers:
 *     ??_ECDesktopPositioner@@WDA@EAAPEAXI@Z @ 0x1802A6430 (--_ECDesktopPositioner@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDesktopPositioner@@UEAA@XZ @ 0x18014251C (--1CDesktopPositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CDesktopPositioner *__fastcall CDesktopPositioner::`vector deleting destructor'(
        CDesktopPositioner *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CDesktopPositioner::~CDesktopPositioner(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, 0x248uLL);
  return this;
}
