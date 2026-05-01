/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180029CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x180029D2C (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
