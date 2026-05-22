/*
 * XREFs of ??_GInputRedirectionTarget@@MEAAPEAXI@Z @ 0x1801DD780
 * Callers:
 *     ??_EInputRedirectionTarget@@OBA@EAAPEAXI@Z @ 0x18007E790 (--_EInputRedirectionTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputRedirectionTarget@@MEAA@XZ @ 0x1801DD6DC (--1InputRedirectionTarget@@MEAA@XZ.c)
 */

InputRedirectionTarget *__fastcall InputRedirectionTarget::`scalar deleting destructor'(
        InputRedirectionTarget *this,
        char a2)
{
  InputRedirectionTarget::~InputRedirectionTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
