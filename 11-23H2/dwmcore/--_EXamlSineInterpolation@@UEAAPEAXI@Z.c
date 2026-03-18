/*
 * XREFs of ??_EXamlSineInterpolation@@UEAAPEAXI@Z @ 0x1802673A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

XamlSineInterpolation *__fastcall XamlSineInterpolation::`vector deleting destructor'(
        XamlSineInterpolation *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
