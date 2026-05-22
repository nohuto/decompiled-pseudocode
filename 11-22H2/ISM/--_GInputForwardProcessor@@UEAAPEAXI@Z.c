/*
 * XREFs of ??_GInputForwardProcessor@@UEAAPEAXI@Z @ 0x1801D4750
 * Callers:
 *     ??_EInputForwardProcessor@@W7EAAPEAXI@Z @ 0x18007E530 (--_EInputForwardProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputForwardProcessor@@UEAA@XZ @ 0x1801D46EC (--1InputForwardProcessor@@UEAA@XZ.c)
 */

InputForwardProcessor *__fastcall InputForwardProcessor::`scalar deleting destructor'(
        InputForwardProcessor *this,
        char a2)
{
  InputForwardProcessor::~InputForwardProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
