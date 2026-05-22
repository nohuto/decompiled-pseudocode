/*
 * XREFs of ??_EEdgyInputTarget@@MEAAPEAXI@Z @ 0x1801D9CD8
 * Callers:
 *     ??_EEdgyInputTarget@@OBA@EAAPEAXI@Z @ 0x18007E610 (--_EEdgyInputTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

EdgyInputTarget *__fastcall EdgyInputTarget::`vector deleting destructor'(EdgyInputTarget *this, char a2)
{
  *(_QWORD *)this = &EdgyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
