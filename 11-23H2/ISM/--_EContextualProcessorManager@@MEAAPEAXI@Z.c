/*
 * XREFs of ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1801BDF40
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801BDEC4 (--1ContextualProcessorManager@@MEAA@XZ.c)
 */

ContextualProcessorManager *__fastcall ContextualProcessorManager::`vector deleting destructor'(
        ContextualProcessorManager *this,
        char a2)
{
  ContextualProcessorManager::~ContextualProcessorManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
