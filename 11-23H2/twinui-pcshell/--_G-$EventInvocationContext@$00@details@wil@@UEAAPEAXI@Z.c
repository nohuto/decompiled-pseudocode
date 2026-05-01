/*
 * XREFs of ??_G?$EventInvocationContext@$00@details@wil@@UEAAPEAXI@Z @ 0x1804AA310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1804A9D94 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::EventInvocationContext<1>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  wil::details::EventInvocationContext<1>::~EventInvocationContext<1>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
