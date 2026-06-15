/*
 * XREFs of ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x180127170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180127074 (--1CVolumeSoftware@@EEAA@XZ.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::`vector deleting destructor'(CVolumeSoftware *this, char a2)
{
  CVolumeSoftware::~CVolumeSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
