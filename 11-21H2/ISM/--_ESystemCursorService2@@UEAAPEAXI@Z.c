/*
 * XREFs of ??_ESystemCursorService2@@UEAAPEAXI@Z @ 0x1800EBAE4
 * Callers:
 *     ??_ESystemCursorService2@@W7EAAPEAXI@Z @ 0x18004FA60 (--_ESystemCursorService2@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800EB7D4 (--1SystemCursorService2@@UEAA@XZ.c)
 */

SystemCursorService2 *__fastcall SystemCursorService2::`vector deleting destructor'(
        SystemCursorService2 *this,
        char a2)
{
  SystemCursorService2::~SystemCursorService2(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
