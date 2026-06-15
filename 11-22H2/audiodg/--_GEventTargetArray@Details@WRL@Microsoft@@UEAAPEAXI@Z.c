/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1400399F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x14003988C (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
