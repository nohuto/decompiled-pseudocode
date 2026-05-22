/*
 * XREFs of ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x1801A7410
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ButtonRecognizer@@MEAA@XZ @ 0x1801A7250 (--1ButtonRecognizer@@MEAA@XZ.c)
 */

ButtonRecognizer *__fastcall ButtonRecognizer::`scalar deleting destructor'(ButtonRecognizer *this, char a2)
{
  ButtonRecognizer::~ButtonRecognizer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
