/*
 * XREFs of ??_ECPassthroughEffect@@EEAAPEAXI@Z @ 0x1800FAD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CPassthroughEffect *__fastcall CPassthroughEffect::`vector deleting destructor'(CPassthroughEffect *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x18uLL);
  return this;
}
