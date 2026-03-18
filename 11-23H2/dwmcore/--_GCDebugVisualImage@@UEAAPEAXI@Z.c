/*
 * XREFs of ??_GCDebugVisualImage@@UEAAPEAXI@Z @ 0x180218070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800A3828 (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CDebugVisualImage *__fastcall CDebugVisualImage::`scalar deleting destructor'(CDebugVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
