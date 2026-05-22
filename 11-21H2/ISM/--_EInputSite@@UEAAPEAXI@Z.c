/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x180123E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1InputSite@@UEAA@XZ @ 0x180123D78 (--1InputSite@@UEAA@XZ.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  InputSite::~InputSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
