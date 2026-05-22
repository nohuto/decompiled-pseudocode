/*
 * XREFs of ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x1800F9F60
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1RegistryWatcher@@MEAA@XZ @ 0x1800F9EA4 (--1RegistryWatcher@@MEAA@XZ.c)
 */

RegistryWatcher *__fastcall RegistryWatcher::`vector deleting destructor'(RegistryWatcher *this, char a2)
{
  RegistryWatcher::~RegistryWatcher(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
