/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800031A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800031D8 (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
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
