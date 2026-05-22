/*
 * XREFs of ??_ESystemButtonEventController@@UEAAPEAXI@Z @ 0x180152300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SystemButtonEventController@@UEAA@XZ @ 0x18015226C (--1SystemButtonEventController@@UEAA@XZ.c)
 */

SystemButtonEventController *__fastcall SystemButtonEventController::`vector deleting destructor'(
        SystemButtonEventController *this,
        char a2)
{
  SystemButtonEventController::~SystemButtonEventController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
