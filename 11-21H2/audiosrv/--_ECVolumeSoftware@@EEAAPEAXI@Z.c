/*
 * XREFs of ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x1800CBBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x1800CBABC (--1CVolumeSoftware@@EEAA@XZ.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::`vector deleting destructor'(CVolumeSoftware *this, char a2)
{
  CVolumeSoftware::~CVolumeSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
