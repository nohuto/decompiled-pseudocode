/*
 * XREFs of ??_GInjectionRawInputProvider@@UEAAPEAXI@Z @ 0x1800F6E40
 * Callers:
 *     ??_EInjectionRawInputProvider@@W7EAAPEAXI@Z @ 0x180079F50 (--_EInjectionRawInputProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InjectionRawInputProvider@@UEAA@XZ @ 0x1800F6D74 (--1InjectionRawInputProvider@@UEAA@XZ.c)
 */

InjectionRawInputProvider *__fastcall InjectionRawInputProvider::`scalar deleting destructor'(
        InjectionRawInputProvider *this,
        char a2)
{
  InjectionRawInputProvider::~InjectionRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
