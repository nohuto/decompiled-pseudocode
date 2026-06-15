/*
 * XREFs of ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x180047460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositeSystemEffect@@UEAA@XZ @ 0x18004749C (--1CCompositeSystemEffect@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CCompositeSystemEffect *__fastcall CCompositeSystemEffect::`vector deleting destructor'(
        CCompositeSystemEffect *this,
        char a2)
{
  CCompositeSystemEffect::~CCompositeSystemEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x88uLL);
  return this;
}
