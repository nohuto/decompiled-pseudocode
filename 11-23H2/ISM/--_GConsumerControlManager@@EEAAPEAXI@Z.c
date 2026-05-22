/*
 * XREFs of ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x1800EA1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800EA008 (--1ConsumerControlManager@@EEAA@XZ.c)
 */

ConsumerControlManager *__fastcall ConsumerControlManager::`scalar deleting destructor'(
        ConsumerControlManager *this,
        char a2)
{
  ConsumerControlManager::~ConsumerControlManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
