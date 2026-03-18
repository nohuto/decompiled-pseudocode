/*
 * XREFs of ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1802555C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1802554F0 (--1CVisualCapture@@UEAA@XZ.c)
 */

CVisualCapture *__fastcall CVisualCapture::`scalar deleting destructor'(CVisualCapture *this, char a2)
{
  CVisualCapture::~CVisualCapture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
