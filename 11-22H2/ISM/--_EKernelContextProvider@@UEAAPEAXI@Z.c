/*
 * XREFs of ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x180124370
 * Callers:
 *     ??_EKernelContextProvider@@W7EAAPEAXI@Z @ 0x18007ACD0 (--_EKernelContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x180124454 (--1SystemContextProvider@@MEAA@XZ.c)
 */

KernelContextProvider *__fastcall KernelContextProvider::`vector deleting destructor'(
        KernelContextProvider *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
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
