/*
 * XREFs of ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x1800CF868
 * Callers:
 *     ??_ELampArrayRawInputProvider@@GBA@EAAPEAXI@Z @ 0x18004F500 (--_ELampArrayRawInputProvider@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800CF688 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 */

LampArrayRawInputProvider *__fastcall LampArrayRawInputProvider::`scalar deleting destructor'(
        LampArrayRawInputProvider *this,
        char a2)
{
  LampArrayRawInputProvider::~LampArrayRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
