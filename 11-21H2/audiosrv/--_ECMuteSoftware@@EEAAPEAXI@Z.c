/*
 * XREFs of ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x1800CA0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800C9F88 (--1CMuteSoftware@@EEAA@XZ.c)
 */

CMuteSoftware *__fastcall CMuteSoftware::`vector deleting destructor'(CMuteSoftware *this, char a2)
{
  CMuteSoftware::~CMuteSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
