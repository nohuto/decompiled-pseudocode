/*
 * XREFs of ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1801CB7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801CB734 (--1ContextualProcessorManager@@MEAA@XZ.c)
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
