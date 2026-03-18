/*
 * XREFs of ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x1801D1200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CKernelTransport@@UEAA@XZ @ 0x1801D1198 (--1CKernelTransport@@UEAA@XZ.c)
 */

CKernelTransport *__fastcall CKernelTransport::`vector deleting destructor'(CKernelTransport *this, char a2)
{
  CKernelTransport::~CKernelTransport(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
