/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1801C005C
 * Callers:
 *     ??_EContextualProcessorBuffer@@OBI@EAAPEAXI@Z @ 0x18006A8D0 (--_EContextualProcessorBuffer@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x1801BFA78 (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  ContextualProcessorBuffer::~ContextualProcessorBuffer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
