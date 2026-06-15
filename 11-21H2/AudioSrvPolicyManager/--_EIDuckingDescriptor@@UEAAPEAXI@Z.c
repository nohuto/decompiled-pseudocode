/*
 * XREFs of ??_EIDuckingDescriptor@@UEAAPEAXI@Z @ 0x1800102F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

IDuckingDescriptor *__fastcall IDuckingDescriptor::`vector deleting destructor'(IDuckingDescriptor *this, char a2)
{
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
