/*
 * XREFs of ??_GTipToGlassProcessor@@UEAAPEAXI@Z @ 0x1801B4154
 * Callers:
 *     ??_ETipToGlassProcessor@@W7EAAPEAXI@Z @ 0x180053AE0 (--_ETipToGlassProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 */

TipToGlassProcessor *__fastcall TipToGlassProcessor::`scalar deleting destructor'(TipToGlassProcessor *this, char a2)
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
