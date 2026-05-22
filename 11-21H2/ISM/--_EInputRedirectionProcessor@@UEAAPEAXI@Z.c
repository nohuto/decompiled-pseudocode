/*
 * XREFs of ??_EInputRedirectionProcessor@@UEAAPEAXI@Z @ 0x1801B1174
 * Callers:
 *     ??_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z @ 0x1800539A0 (--_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputRedirectionProcessor@@UEAA@XZ @ 0x1801B1104 (--1InputRedirectionProcessor@@UEAA@XZ.c)
 */

InputRedirectionProcessor *__fastcall InputRedirectionProcessor::`vector deleting destructor'(
        InputRedirectionProcessor *this,
        char a2)
{
  InputRedirectionProcessor::~InputRedirectionProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
