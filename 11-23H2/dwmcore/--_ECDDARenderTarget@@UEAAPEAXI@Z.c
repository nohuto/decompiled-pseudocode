/*
 * XREFs of ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x1801F90C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801F9058 (--1CDDARenderTarget@@UEAA@XZ.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::`vector deleting destructor'(CDDARenderTarget *this, char a2)
{
  CDDARenderTarget::~CDDARenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
