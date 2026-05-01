/*
 * XREFs of ??_G_System_error_category@std@@UEAAPEAXI@Z @ 0x18057F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

std::_System_error_category *__fastcall std::_System_error_category::`scalar deleting destructor'(
        std::_System_error_category *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
