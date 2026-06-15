/*
 * XREFs of ??_ECAcl@ATL@@UEAAPEAXI@Z @ 0x1800CE630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall ATL::CAcl::`vector deleting destructor'(void **this, char a2)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
