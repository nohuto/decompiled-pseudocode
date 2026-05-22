/*
 * XREFs of ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x180116300
 * Callers:
 *     ??_EKernelContextProvider@@W7EAAPEAXI@Z @ 0x180067190 (--_EKernelContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x1801163E4 (--1SystemContextProvider@@MEAA@XZ.c)
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
