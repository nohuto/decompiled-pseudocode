/*
 * XREFs of ??_GCD2DSharedBuffer@DirectComposition@@MEAAPEAXI@Z @ 0x1800B54F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

void **__fastcall DirectComposition::CD2DSharedBuffer::`scalar deleting destructor'(void **this, char a2)
{
  *this = &DirectComposition::CD2DSharedBuffer::`vftable';
  operator delete(this[2]);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
