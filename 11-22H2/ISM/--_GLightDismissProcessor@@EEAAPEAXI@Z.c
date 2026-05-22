/*
 * XREFs of ??_GLightDismissProcessor@@EEAAPEAXI@Z @ 0x18018022C
 * Callers:
 *     ??_ELightDismissProcessor@@G7EAAPEAXI@Z @ 0x18007BED0 (--_ELightDismissProcessor@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

LightDismissProcessor *__fastcall LightDismissProcessor::`scalar deleting destructor'(
        LightDismissProcessor *this,
        char a2)
{
  *(_QWORD *)this = &LightDismissProcessor::`vftable'{for `IContextualProcessor'};
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
