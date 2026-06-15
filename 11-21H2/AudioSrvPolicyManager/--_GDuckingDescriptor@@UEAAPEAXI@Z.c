/*
 * XREFs of ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x1800102B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

DuckingDescriptor *__fastcall DuckingDescriptor::`scalar deleting destructor'(DuckingDescriptor *this, char a2)
{
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
