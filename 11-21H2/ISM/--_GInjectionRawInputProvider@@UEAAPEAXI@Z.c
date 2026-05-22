/*
 * XREFs of ??_GInjectionRawInputProvider@@UEAAPEAXI@Z @ 0x1800CE804
 * Callers:
 *     ??_EInjectionRawInputProvider@@W7EAAPEAXI@Z @ 0x18004F4C0 (--_EInjectionRawInputProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InjectionRawInputProvider@@UEAA@XZ @ 0x1800CE738 (--1InjectionRawInputProvider@@UEAA@XZ.c)
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
