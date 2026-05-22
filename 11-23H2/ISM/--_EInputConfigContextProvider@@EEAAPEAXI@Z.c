/*
 * XREFs of ??_EInputConfigContextProvider@@EEAAPEAXI@Z @ 0x180116164
 * Callers:
 *     ??_EInputConfigContextProvider@@G7EAAPEAXI@Z @ 0x180067150 (--_EInputConfigContextProvider@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801160DC (--1InputConfigContextProvider@@EEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::`vector deleting destructor'(
        InputConfigContextProvider *this,
        char a2)
{
  InputConfigContextProvider::~InputConfigContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
