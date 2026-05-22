/*
 * XREFs of ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x1800FA608
 * Callers:
 *     ??_ESystemContextProvider@@O7EAAPEAXI@Z @ 0x180050160 (--_ESystemContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x1800FA590 (--1SystemContextProvider@@MEAA@XZ.c)
 */

SystemContextProvider *__fastcall SystemContextProvider::`scalar deleting destructor'(
        SystemContextProvider *this,
        char a2)
{
  SystemContextProvider::~SystemContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
