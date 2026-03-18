/*
 * XREFs of ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x180025720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x180025780 (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CBackdropVisualImage *__fastcall CBackdropVisualImage::`scalar deleting destructor'(
        CBackdropVisualImage *this,
        char a2)
{
  CBackdropVisualImage::~CBackdropVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x808uLL);
    else
      operator delete(this);
  }
  return this;
}
