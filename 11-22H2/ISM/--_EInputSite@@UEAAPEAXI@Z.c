/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x1800557C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InputSite@@UEAA@XZ @ 0x18003FE8C (--1InputSite@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  InputSite::~InputSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x208uLL);
  return this;
}
