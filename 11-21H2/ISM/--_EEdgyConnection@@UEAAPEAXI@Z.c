/*
 * XREFs of ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x1801A9590
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1801A94A4 (--1EdgyConnection@@UEAA@XZ.c)
 */

EdgyConnection *__fastcall EdgyConnection::`vector deleting destructor'(EdgyConnection *this, char a2)
{
  EdgyConnection::~EdgyConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
