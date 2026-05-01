/*
 * XREFs of ??_G_System_error@std@@UEAAPEAXI@Z @ 0x1803D5250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x1801C731E (_o___std_exception_destroy_0.c)
 */

std::_System_error *__fastcall std::_System_error::`scalar deleting destructor'(std::_System_error *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
