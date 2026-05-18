/*
 * XREFs of ??_E_Generic_error_category@std@@UEAAPEAXI@Z @ 0x180025EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

std::_Generic_error_category *__fastcall std::_Generic_error_category::`vector deleting destructor'(
        std::_Generic_error_category *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
