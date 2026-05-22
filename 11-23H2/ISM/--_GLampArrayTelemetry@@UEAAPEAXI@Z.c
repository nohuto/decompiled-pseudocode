/*
 * XREFs of ??_GLampArrayTelemetry@@UEAAPEAXI@Z @ 0x180096B40
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

LampArrayTelemetry *__fastcall LampArrayTelemetry::`scalar deleting destructor'(LampArrayTelemetry *this, char a2)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
