/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x1801C2C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CInk@@UEAA@XZ @ 0x1801C19F4 (--1CInk@@UEAA@XZ.c)
 */

CInk *__fastcall CInk::`vector deleting destructor'(CInk *this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
