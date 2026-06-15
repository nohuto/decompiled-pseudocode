/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180018AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x180018A3C (--1ResultException@wil@@UEAA@XZ.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
