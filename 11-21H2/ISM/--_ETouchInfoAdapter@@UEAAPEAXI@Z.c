/*
 * XREFs of ??_ETouchInfoAdapter@@UEAAPEAXI@Z @ 0x1801CCD24
 * Callers:
 *     ??_ETouchInfoAdapter@@W7EAAPEAXI@Z @ 0x180054300 (--_ETouchInfoAdapter@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1TouchInfoAdapter@@UEAA@XZ @ 0x1801CCCAC (--1TouchInfoAdapter@@UEAA@XZ.c)
 */

TouchInfoAdapter *__fastcall TouchInfoAdapter::`vector deleting destructor'(TouchInfoAdapter *this, char a2)
{
  TouchInfoAdapter::~TouchInfoAdapter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
