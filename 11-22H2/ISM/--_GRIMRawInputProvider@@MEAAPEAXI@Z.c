/*
 * XREFs of ??_GRIMRawInputProvider@@MEAAPEAXI@Z @ 0x1800E2710
 * Callers:
 *     ??_ERIMRawInputProvider@@O7EAAPEAXI@Z @ 0x180079EB0 (--_ERIMRawInputProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800E25C0 (--1RIMRawInputProvider@@MEAA@XZ.c)
 */

RIMRawInputProvider *__fastcall RIMRawInputProvider::`scalar deleting destructor'(RIMRawInputProvider *this, char a2)
{
  RIMRawInputProvider::~RIMRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
