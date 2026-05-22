/*
 * XREFs of ??_EInputServiceProcessor@@UEAAPEAXI@Z @ 0x1801706BC
 * Callers:
 *     ??_EInputServiceProcessor@@W7EAAPEAXI@Z @ 0x1800682F0 (--_EInputServiceProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

InputServiceProcessor *__fastcall InputServiceProcessor::`vector deleting destructor'(
        InputServiceProcessor *this,
        char a2)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
