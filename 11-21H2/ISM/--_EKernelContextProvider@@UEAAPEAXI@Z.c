/*
 * XREFs of ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x1800FA474
 * Callers:
 *     ??_EKernelContextProvider@@W7EAAPEAXI@Z @ 0x180050140 (--_EKernelContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x1800FA590 (--1SystemContextProvider@@MEAA@XZ.c)
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
